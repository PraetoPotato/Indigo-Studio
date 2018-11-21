#include "Battle.h"
#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>//allows you to use getch() which will allow keyboard input
#include <fstream>
#pragma comment(lib, "winmm.lib")
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
std::string line;
std::ifstream draw;

void battle::displayHP()
{
	cout << "Pokemon HP:" << HP << "/50";
}

void battle::displayTrainerHP()
{
	cout << "                                                                                                                                                                     " << "Trainer Pokemon HP:" << TraHP << "/50" << endl;
}

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


void battle::drawPlayerNCamper()
{
	
	std::ifstream draw("Trainer Battle img 1.txt");
	if (draw.is_open())
	{
		while (getline(draw, line))
		{
			std::cout << line << "\n";
		}
		draw.close();
	}

	else std::cout << "unable to open file" << std::endl;
}

void battle::drawPlayerNSandhrew()
{

	std::ifstream draw("Trainer and Sandshrew.txt");
	if (draw.is_open())
	{
		while (getline(draw, line))
		{
			std::cout << line << "\n";
		}
		draw.close();
	}

	else std::cout << "unable to open file" << std::endl;
}

void battle::drawSquirtleNSandShrew()
{
	std::ifstream draw("Squirtle n SandShrew.txt");
	if (draw.is_open())
	{
		while (getline(draw, line))
		{
			std::cout << line << "\n";
		}
		draw.close();
	}

	else std::cout << "unable to open file" << std::endl;
}

void battle::drawSquirtleNCamper()
{
	std::ifstream draw("Squirtle n Camper.txt");
	if (draw.is_open())
	{
		while (getline(draw, line))
		{
			std::cout << line << "\n";
		}
		draw.close();
	}

	else std::cout << "unable to open file" << std::endl;
}
void battle::textBox()
{

	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
}

void battle::squirtleMoveSet()
{
	cout << "                                                                                                            Pick a move\n";
	cout << "                                                                                          1 - Tackle - Power=40       2 - Water Gun - Power=40\n";
	cout << "                                                                                          2 - Bubble - Power=20       4 - Tail Whip - Lowers defense\n";
}
void battle::sandShrewMoveSet()
{
	int moveNum;
	moveNum = rand()%2+1;
	if (moveNum == 1)
	{
		std::cout << "                                                                                              SandShrew used Scratch! It dealt 15 Damage"<<std::endl;
		HP -= 15;
	}
	if (moveNum == 2)
	{
		std::cout << "                                                                                              SandShrew used Defense Curl!" << std::endl;
		Sleep(1500);
		std::cout << "                                                                                              SandShrew's defense rose!" << std::endl;
	}

}


void battle::battle1()
{
	PlaySound("Pokemon RedBlueYellow - Battle! Trainer Music (HQ).wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	drawPlayerNCamper();
	textBox();
	std::cout << "                                                                                                  Camper Todd wants to battle!" << std::endl;
	system("pause");
	system("CLS");

	if (starter == "Squirtle")
	{
		drawPlayerNSandhrew();
		textBox();
		cout << "                                                                                                             Camper Todd sent out Sandshrew!\n";
		Sleep(2000);
		system("CLS");
		drawSquirtleNSandShrew();
		textBox();
		cout << "                                                                                                               Go Squritle!\n";
		Sleep(2000);
		system("CLS");
		drawSquirtleNSandShrew();
		textBox();
		displayHP();
		displayTrainerHP();
		squirtleMoveSet();
		for(;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					TraHP = TraHP - 15;
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                Squirtle Used Tackle! It dealt 15 Damage\n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						break;
					}
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					sandShrewMoveSet();
					Sleep(2500);
					move1 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					squirtleMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 30;
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						break;
					}
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					sandShrewMoveSet();
					Sleep(1500);
					move2 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					squirtleMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						break;
					}
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					sandShrewMoveSet();
					Sleep(2500);
					move3 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					sandShrewMoveSet();
					Sleep(2500);
					if (TraHP <= 0)
					{
						break;
					}
					move4 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					squirtleMoveSet();
				}


			}
		}
		PlaySound(NULL, 0, 0);
		drawSquirtleNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper Todd! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawSquirtleNCamper();
		textBox();
		std::cout << "                                                                                                          Dang! I lost to a chump! " << std::endl;
		Sleep(1000);
		system("pause");
	}

	if (starter == "Bulbasaur")
	{
		textBox();
		cout << "Go Bulbasaur!\n";
		Sleep(1000);
		system("CLS");


		cout << "Pick a move\n";
		cout << "1 - Tackle - Power=40        2 - Leech Seed - Power=40\n";
		cout << "3 - Growl - Lowers attack    4 - Vine Whip- Power=40\n";
		for (;;)
		{
			keyBoardInput();

			if (move1 == true)
			{
				TraHP = TraHP - 15;
				cout << "Bulbasaur Used Tackle!\n";
				move1 = false;
			}

			else if (move2 == true)
			{
				TraHP = TraHP - 5;
				HP += 5;
				cout << "Bulbasaur Used Leech Seed!\n";
				move2 = false;
			}

			else if (move3 == true)
			{
				cout << "Bulbasaur Used Growl!\n";
				move3 = false;
			}

			else if (move4 == true)
			{
				cout << "Bulbasaur Used Vine Whip! It was super effective and dealt 25 damage!\n";
				TraHP = TraHP - 25;
				move4 = false;
			}

		}
		cout << HP << "            " << TraHP;
	}

	if (starter == "Charmander")
	{
		textBox();
		cout << "Go Charmander!\n";
		Sleep(1000);
		system("CLS");


			cout << "Pick a move\n";
			cout << "1 - Scratch - Power=40       2 - Ember- Power=40 \n";
			cout << "3 - Growl - Lowers attack    4 - Dragon Rage- Takes 40 HP\n";
			for (;;)
			{
				keyBoardInput();
				if (move1 == true)
				{
					TraHP = TraHP - 15;
					cout << "Charmander Used Scratch!\n";
					move1 = false;
				}

				else if (move2 == true)
				{
					TraHP = TraHP - 10;
					cout << "Charmander Used Ember!\n";
					move2 = false;
				}

				else if (move3 == true)
				{
					cout << "Charmander Used Growl!\n";
					move3 = false;
				}

				else if (move4 == true)
				{
					cout << "Charmander Used Dragon Rage!\n";
					TraHP = TraHP - 25;
					move4 = false;
				}

			}
			cout << HP << "            " << TraHP;
	}

}