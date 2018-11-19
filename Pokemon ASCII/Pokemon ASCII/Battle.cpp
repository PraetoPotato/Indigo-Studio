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


void battle::keyBoardInput()
{
	char selectMove = 0;
	selectMove=_getch();
	switch (selectMove)
	{
	case '1':
		move1 = true;
		break;
	case '2':
		move2 = true;
		break;
	case '3':
		move3 = true;
		break;

	case '4':
		move4 = true;
		break;
	}
}

battle::battle(int starterNum)
{
	if (starterNum==1)
	{
		starter = "Squirtle";
    }

	else if (starterNum == 2)
	{
		starter = "Bulbasaur";
	}

	else if (starterNum == 3)
	{
		starter = "Charmander";
	}
}


int HP = 50;
int TraHP = 50;
int attack;


void battle::battle1()
{

	

	if (starter == "Squirtle")
	{
		cout << "Go Squritle\n";


		cout << "Pick a move\n";
		cout << "1 - Tackle - Power=40       2 - Water Gun - Power=40\n";
		cout << "3 - Bubble - Power=20       4 - Tail Whip - Lowers defense\n";
		for (;;)
		{
			keyBoardInput();

			if (move1==true)
			{
				TraHP = TraHP - 5;
				cout << "Squirtle Used Tackle!\n";
				move1 = false;
			}

			else if (move2==true)
			{
				TraHP = TraHP - 15;
				cout << "Squirtle Used Water Gun!\n";
				move2 = false;
			}

			else if (move3 == true)
			{
				TraHP = TraHP - 15;
				cout << "Squirtle Used Bubble!\n";
				move3 = false;
			}

			else if (move4 == true)
			{
				cout << "Squirtle Used Tail Whip!\n";
				move4 = false;
			}

		}
		cout << HP << "            " << TraHP;
	}

	if (starter == "Bulbasaur")
	{
		cout << "Go Bulbasaur\n";


		cout << "Pick a move\n";
		cout << "1 - Tackle - Power=40        2 - Leech Seed - Power=40\n";
		cout << "3 - Growl - Lowers attack    4 - Vine Whip- Power=40\n";
		for (;;)
		{
			keyBoardInput();

			if (move1 == true)
			{
				TraHP = TraHP - 5;
				cout << "Bulbasaur Used Tackle!\n";
				move1 = false;
			}

			else if (move2 == true)
			{
				TraHP = TraHP - 15;
				cout << "Bulbasaur Used Leech Seed!\n";
				move2 = false;
			}

			else if (move3 == true)
			{
				TraHP = TraHP - 15;
				cout << "Bulbasaur Used Growl!\n";
				move3 = false;
			}

			else if (move4 == true)
			{
				cout << "Bulbasaur Used Vine Whip!\n";
				move4 = false;
			}

		}
		cout << HP << "            " << TraHP;
	}

	if (starter == "Charmander")
	{
			cout << "Go Charmander\n";


			cout << "Pick a move\n";
			cout << "1 - Scratch - Power=40       2 - Ember- Power=40 \n";
			cout << "3 - Growl - Lowers attack    4 - Dragon Rage- Takes 40 HP\n";
			for (;;)
			{
				keyBoardInput();
				if (move1 == true)
				{
					TraHP = TraHP - 5;
					cout << "Charmander Used Scratch!\n";
					move1 = false;
				}

				else if (move2 == true)
				{
					TraHP = TraHP - 15;
					cout << "Charmander Used Ember!\n";
					move2 = false;
				}

				else if (move3 == true)
				{
					TraHP = TraHP - 15;
					cout << "Charmander Used Growl!\n";
					move3 = false;
				}

				else if (move4 == true)
				{
					cout << "Charmander Used Dragon Rage!\n";
					move4 = false;
				}

			}
			cout << HP << "            " << TraHP;
	}

}