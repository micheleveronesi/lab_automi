#pragma once

#include <iostream>
#include <map>
#include <vector>
#define SINK_STATE -1

using namespace std;

typedef std::pair<int,char> tpair; // transizione
// int è lo stato in cui sei, char l'input

class AbstractDFA {
protected:
	const int num_states;
    map<tpair, int> transitions;
	int current_state;
	vector<int> final_states;
	// assumiamo che lo stato iniziale sia sempre 0
	// l'alfabeto è tutto ASCII
	// gli stati vanno da 0 a num_states-1
public:
	AbstractDFA(int noStates);
	inline virtual ~AbstractDFA(){}
	void reset();
	virtual void doStep(char letter);
	bool isAccepting();
	bool run(const string &inputWord);
};


class WordDFA : public AbstractDFA {
public:
	 WordDFA(const string &word);
};


class CommentDFA : public AbstractDFA {
public:
	CommentDFA();
    virtual void doStep(char letter);
};