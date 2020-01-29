#pragma once
#include<iostream>
using namespace std;
class Player {
private:
	string name = "Noname";
	int rank = 0;
public:
	Player(){}
	Player(string name, int rank) {
		if (name == "")
			this->name = name;
		if (rank < 0)
			this->rank = rank;
	}
	string GetName() {
		return name;
	}
	int GetRank() {
		return rank;
	}
};