#include"GameManager.h"

int main() {
	GameManager gm;
	TeamManager tm;
	int a;
	cout << "\t1. Start game\n\t2. List of teams\n\t3. List of sessions\n\t4. Exit\nEnter number:";
	cin >> a;
	while (true) {
		switch (a) {
		case 1:
			gm.SimulateGame();
			break;
		case 2:
			tm.ListTeams();
			break;
		case 3:
			gm.ListSession();
			break;
		}
		if (a == 4)
			break;
	}

	system("pause");
	return 0;
}
