#pragma once
#include"TeamManager.h"
class Session {
public:
	TeamManager tm;
	class Teamblue {
	public:
		int hp;
		int damage;
		void Calculate() {
			for (int i = 0; i < teamblue.size();i++) {
				hp += teamblue[i].hero.getHP();
				damage += teamblue[i].hero.getDamage();
			}
		}
	};
	class Teamred {
	public:
		int hp;
		int damage;
		void Calculate() {
			for (int i = 0; i < teamred.size(); i++) {
				hp += teamred[i].hero.getHP();
				damage += teamred[i].hero.getDamage();
			}
		}
	};
	Teamred tr;
	Teamblue tb;
	string CalculateWinner() {
		tr.Calculate();
		tb.Calculate();
		double indred = (double)tr.hp / tb.damage;
		double indblue = (double)tb.hp / tr.damage;
		string win;
		if (indblue > indred) {
			cout << "Blue Win" << endl;
			win = "Blue Win";
		}
		else if (indblue < indred) {
			cout << "Red Win" << endl;
			win = "Red Win";
		}
		else if (indblue == indred) {
			cout << "Draw" << endl;
			win = "Draw";
		}
		return win;
	}
};