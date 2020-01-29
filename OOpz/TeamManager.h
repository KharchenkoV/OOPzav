#pragma once
#include"Team.h"
vector<Team> teamblue;
vector<Team> teamred;
class TeamManager {
public:
	TeamManager() {}
	
	HeroManager hm;
	PlayerMeneger pm;
	
	void CreatTeams() {
		for (int i = 0; i < hm.heroes.size(); i++) {
			if (i % 2 == 0) {
				Team team(hm.heroes[i], pm.players[i]);
				teamblue.push_back(team);
			}
			else if (i % 2 == 1) {
				Team team(hm.heroes[i], pm.players[i]);
				teamred.push_back(team);
			}
		}
 }
	void ListTeams() {
		cout << "blue:" << endl;
		for (int i = 0; i < teamblue.size(); i++) {
			cout << i << ":  " << teamblue[i].player.GetName() << endl;
		}
		cout << endl << endl;
		cout << "red:" << endl;
		for (int i = 0; i < teamred.size(); i++) {
			cout << i << ":  " << teamred[i].player.GetName() << endl;
		}
	}
};