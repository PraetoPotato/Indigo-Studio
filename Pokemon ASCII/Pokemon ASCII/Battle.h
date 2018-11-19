#pragma once
#include<string>
class battle
{
public:
	battle(int);//supposed to be a constructor that gets the starter pokemon chosen and use it to initialize the starter being used in battles
	void battle1();    //trainer battle number 1
	void battle2();    //trainer battle number 2
	void battle3();    //the gym leader
	void keyBoardInput();

private:
	std::string starter;
	bool move1=false;
	bool move2=false;
	bool move3=false;
	bool move4=false;

};