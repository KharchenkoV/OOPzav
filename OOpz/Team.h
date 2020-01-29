#pragma once
#include"HeroManager.h"
#include"PlayerManager.h"
using namespace std;
class Team {
public:
	Hero hero;
	Player player;
	Team(){}
	Team(Hero hero1,Player player1){
		hero = hero1;
		player = player1;
	}
};