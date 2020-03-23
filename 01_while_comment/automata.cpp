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
    for(int i = 0; current_state != SINK_STATE && i < inputWord.length(); i++)
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

CommentDFA::CommentDFA() : AbstractDFA(7) {
    final_states.push_back(6);
    final_states.push_back(5);
    transitions[tpair(0,'/')] = 1;
    transitions[tpair(1,'/')] = 2;
    transitions[tpair(1,'*')] = 3;
    transitions[tpair(2,'\n')] = 6;
    transitions[tpair(3,'*')] = 4;
    transitions[tpair(4,'/')] = 5;
}

void CommentDFA::doStep(char letter) {
    try{
        current_state = transitions.at(tpair(current_state,letter));
    }
    catch(out_of_range){
        switch (current_state){
            case 2:
                // rimango su stato 2
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
