#include"Session.h"
int main() {
	
	HeroManager hm;
	PlayerMeneger pm;
	TeamManager tm;
	Session sn;
	 
	hm.createHeroes(10);
	pm.CreatePlayer(10);
	tm.CreatTeams();
	tm.ListTeams();
	sn.CalculateWinner();

	system("pause");
	return 0;
}
