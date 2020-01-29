#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Hero.h"
using namespace std;
class HeroManager
{
public:
	vector<Hero> heroes;
	void createHeroes(int n)
	{
		vector<string> names =
		{
			"Hero1""Hero2","Hero3","Hero4","Hero5","Hero6","Hero7","Hero8","Hero9","Hero10"
		};
		srand((unsigned)time(NULL));
		for (int i = 0; i < n; i++) {
			int id = rand() % names.size();
			int hp = rand() % 100 + 1;
			int damage = rand() % 10 + 1;
			Hero hero = Hero(names[id], hp, damage);
			heroes.push_back(hero);
		}
	}
	void ListOfHeroes()
	{
		for (int i = 0; i < heroes.size(); i++)
		{
			cout << "Name: " << heroes[i].getName()
				<< "\tHP: " << heroes[i].getHP()
				<< "\tDamage: " << heroes[i].getDamage()
				<< endl << endl;

		}
	}

	Hero GetHeroByName(string name)
	{
		for (int i = 0; i < heroes.size(); i++)
		{
			if (heroes[i].getName() == name)
			{
				return heroes[i];
			}
		}
	}
	int AddHero(string name, int hp, int damage)
	{
		for (int i = 0; i < heroes.size(); i++)
		{
			if (heroes[i].getName() == name)
			{
				cout << "This name is already exist! Change your Name!!!" << endl;
				return 0;
			}
		}
		Hero hero = Hero(name, hp, damage);
		heroes.push_back(hero);
	}

	
};
