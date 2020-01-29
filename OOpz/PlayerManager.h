#pragma once
#include<iostream>
#include <vector>
#include <ctime>
#include "Player.h"
using namespace std;
class PlayerMeneger {
public:
	vector<Player> players;
	void CreatePlayer(int k) {
		vector <string> names = {
		"Player1","Player2","Player3","Player4","Player5","Player6","Player7","Player8","Player9","Player10"
		};
		srand((unsigned)time(NULL));
		for (int i = 0; i < k; i++) {
			int id = rand() % names.size();
			int rank = rand() % 100 + 1;
			Player player(names[id], rank);
			players.push_back(player);
		}
	}
	Player GetPlayerByName(string name) {
		for (int i = 0; i < players.size(); i++) {
			if (players[i].GetName() == name) {
				return players[i];
			}
		}
	}
	
};