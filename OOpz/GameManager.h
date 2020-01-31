#pragma once
#include"session.h"
class GameManager {
public:
	HeroManager hm;
	PlayerMeneger pm;
	TeamManager tm;
	Session sn;
	vector <string> winners;
	GameManager() {};
	void SimulateGame() {
		hm.createHeroes(10);
		pm.CreatePlayer(10);
		tm.CreatTeams();
		string winner=sn.CalculateWinner();
		winners.push_back(winner);
	}
	void ListSession() {
		cout << "history games:" << endl;
		for (int i = 0; i < winners.size(); i++) {
			cout << "Game " << i + 1 << "won " << winners[i] << endl;
		}
	}
};