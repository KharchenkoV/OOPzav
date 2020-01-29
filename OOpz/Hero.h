#pragma once
#include <iostream>
using namespace std;
class Hero
{
private:
	string name;
	int hp;
	int damage;
public:
	Hero()
	{
		name = "hero";
		hp = 100;
		damage = 5;
	}
	
	Hero(string name, int hp, int damage)
	{
		if (name != "") this->name = name;
		if (hp > 0) this->hp = hp;
		if (damage > 0) this->damage = damage;
	}
	string getName()
	{
		return name;
	}
	int getHP()
	{
		return hp;
	}
	int getDamage()
	{
		return damage;
	}

};