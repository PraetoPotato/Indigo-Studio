#include "Battle.h"


#include <iostream>
//#include <string>
#include <conio.h>//allows you to use getch() which will allow keyboard input
using namespace std;


#undef max

/*
void dialogB1();     //dialog the trainer says before the first battle
void dialogWin1();   //dialog the trainer says if you win
void dialogLose1();  //dialog the trainer says if you lose
void trainer1Pok()
{

}*/


//string name;







int HP = 50;
int TraHP = 50;
int attack;


void battle::battle1()
{

	cout << "So, you think your such a champ, go Geodude\n";
	cout << "Go Squritle\n";

	
	cout << "Pick a move\n";
	cout << "1 - Tackle - does 5 damege       2 - Water Gun - does 15 damege\n";
	cout << "3 - Bubble - does 15 damege      4 - Tail Whip - does 10 damege\n";
	cin >> attack;
	for (;;)
	{
		

		if (attack == 1)
		{
			TraHP = TraHP - 5;
		}

		else if (attack == 2)
		{
			TraHP = TraHP - 15;
		}

		else if (attack == 3)
		{
			TraHP = TraHP - 15;
		}

		else if (attack == 4)
		{
			TraHP = TraHP - 10;
		}

	}
	cout << HP << "            " << TraHP;

}