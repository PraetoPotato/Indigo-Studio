#pragma once
class Character
{
public:
	void setHp(int);
	void setAttack(int);
	void setDefense(int);
	void setSpAttack(int);
	void setSpDefense(int);
	void setSpeed(int);
private:
	int hp;
	int attack;
	int defense;
	int spAttack;
	int spDefense;
	int speed;
};