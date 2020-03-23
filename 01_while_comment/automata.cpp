#include <iostream>
#include <stdexcept>    // std::out_of_range
#include <assert.h>
#include "automata.h"
using namespace std;

AbstractDFA::AbstractDFA(int noStates)
    : num_states(noStates), current_state(0) {}

void AbstractDFA::reset() {
    current_state = 0;
}

bool AbstractDFA::isAccepting() {
    if(current_state==SINK_STATE)
        return false;
    if(current_state==FINAL_LOOP)
        return true;
    for(int s : final_states)        
        if(current_state == s)
            return true;
    return false;
}

void AbstractDFA::doStep(char letter) {
    try{
        current_state = transitions.at(tpair(current_state,letter));
    }
    catch(out_of_range){
        current_state = SINK_STATE;
    }
}

bool AbstractDFA::run(const string &inputWord) {
    this->reset();
    for(int i = 0; current_state != SINK_STATE && current_state != FINAL_LOOP && i < inputWord.length(); i++)
        doStep(inputWord[i]);
    return isAccepting();
}

WordDFA::WordDFA(const string& word)
 : AbstractDFA(word.length()+1) 
{
    assert(word.length() > 0);
    final_states.push_back(num_states-1);
    for(int i=0; i < word.length(); ++i)
        transitions[tpair(i,word.at(i))] = i+1;
    /* crea una transizione dallo stato i allo stato
     * i+1 per il carattere in posizione i della stringa 
     */
}



/**
 * Construct a new DFA that recognizes comments within source code. There
 * are two kinds of comments: A single line comment starts with // and ends
 * with a newline and a multiline comment that starts with / * and ends with
 * * / (without the spaces)
 */
CommentDFA::CommentDFA() : AbstractDFA(6) {
    final_states.push_back(2);
    final_states.push_back(5);
    transitions[tpair(0,'/')] = 1;
    transitions[tpair(1,'/')] = 2;
    transitions[tpair(1,'*')] = 3;
    transitions[tpair(3,'*')] = 4;
    transitions[tpair(4,'/')] = 5;
}

/**
 * Performs one step of the DFA for a given letter. This method works
 * differently than in the superclass AbstractDFA.
 * 
 * @param letter
 *            The current input.
 */
void CommentDFA::doStep(char letter) {
    try{
        current_state = transitions.at(tpair(current_state,letter));
    }
    catch(out_of_range){
        switch (current_state){
            case 2:
                current_state=FINAL_LOOP;
                break;
            case 3:
                // rimango su stato 3
                break;
            case 4:
                current_state = 3;
                break;
            default: 
                current_state=SINK_STATE;
                break;
        }
    }
}	


