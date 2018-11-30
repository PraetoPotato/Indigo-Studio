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
int pokemonLevel = 10;
int TrainerLevel = 10;
int attack;
bool defenseCurl(false);
std::string line;
std::ifstream draw;

void battle::displayHP()
{
	cout << "Pokemon HP:" << HP << "/50";
}

void battle::gameOver()
{
	std::ifstream draw("Game Over.txt");
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
void battle::displayTrainerLevel()
{
	cout << "                                                                                                                                                                                                " << "Level:" << TrainerLevel;
}
void battle::displayTrainerHP()
{
	if (TraHP > 0)
	{
		cout << "                                                                                                                                                                     " << "Trainer Pokemon HP:" << TraHP << "/50" << endl;
	}
	else
	{
		cout << "                                                                                                                                                                     " << "Trainer Pokemon HP:" << "0/50" << endl;
	}
}

void battle::displayXP()
{
	cout << "Level:" << pokemonLevel << endl;
}

void battle::attackTackle(bool defenseCurl)
{
	if (defenseCurl == true)
	{
		TraHP = TraHP -10;
		defenseCurl = false;
	}
	else
	{
		TraHP = TraHP - 15;
	}
}

void battle::displayTackleDmg()
{
	if (defenseCurl == true)
	{
		cout << "                                                                                Squirtle Used Tackle! It dealt 10 Damage\n";
	}
	else 
	{
		cout << "                                                                                Squirtle Used Tackle! It dealt 15 Damage\n";
	}
	
}

void battle::attackScratch(bool defenseCurl)
{
	if (defenseCurl == true)
	{
		TraHP = TraHP - 10;
		
	}
	else
	{
		TraHP = TraHP - 15;
	}
}

void battle::displayScratchDmg()
{
	if (defenseCurl == true)
	{
		cout << "                                                                                Charmander Used Scratch! It dealt 10 Damage\n";
	}
	else
	{
		cout << "                                                                                Charmander Used Scratch! It dealt 15 Damage\n";
	}
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

void battle::drawPlayerNDiglett()
{

	std::ifstream draw("Player N Diglett.txt");
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

void battle::drawSquirtleNDiglett()
{
	std::ifstream draw("Squirtle N Diglett.txt");
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
void battle::drawSquirtleNBrock()
{
	std::ifstream draw("Squirtle N Brock.txt");
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
void battle::drawSquirtleNGeodude()
{
	std::ifstream draw("Squirtle N Geodude.txt");
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

void battle::drawSquirtleNOnix()
{
	std::ifstream draw("Squirtle N Onix.txt");
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
	cout << "                                                                                          3 - Bubble - Power=20       4 - Tail Whip - Lowers defense\n";
}
void battle::charmanderMoveSet()
{
	cout << "                                                                                                            Pick a move\n";
	cout << "Pick a move\n";
	cout << "                                                                                          1 - Scratch - Power=40       2 - Ember- Power=40 \n";
	cout << "                                                                                          3 - Growl - Lowers attack    4 - Dragon Rage- Takes 40 HP\n";
}
void battle::bulbasaurMoveSet()
{
	cout << "                                                                                                            Pick a move\n";
	cout << "                                                                                          1 - Tackle - Power=40        2 - Leech Seed - Power=40\n";
	cout << "                                                                                          3 - Growl - Lowers attack    4 - Vine Whip- Power=40\n";
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
		defenseCurl = true;
	}

}
void battle::diglettMoveSet()
{
	std::cout << "                                                                                                  Diglett used Scratch!"<<std::endl;
	HP -= 15;
}

void battle::geoDudeMoveSet()
{
	int moveNum;
	moveNum = rand() % 4 + 1;
	if (moveNum == 2 || moveNum == 3 || moveNum == 4)
	{
		std::cout << "                                                                                              Geodude used Tackle! It dealt 15 Damage" << std::endl;
		HP -= 15;
	}
	if (moveNum == 1)
	{
		std::cout << "                                                                                              Geodude used Defense Curl!" << std::endl;
		Sleep(1500);
		std::cout << "                                                                                              Geodude's defense rose!" << std::endl;
		defenseCurl = true;
	}
}

void battle::onixMoveSet()
{
	int moveNum;
	moveNum = rand() % 4 + 1;
	if (moveNum == 2 || moveNum == 3 || moveNum == 4)
	{
		std::cout << "                                                                                             Onix used Rock Throw! It dealt 15 Damage" << std::endl;
		HP -= 25;
		if (starter == "Charmander")
		{
			std::cout << "                                                                                              It's super effective!" << std::endl;
			HP -= 40;
		}
	}
	if (moveNum == 1)
	{
		std::cout << "                                                                                              Onix used Tackle!" << std::endl;
		Sleep(1500);
		HP -= 25;
		
	}

}

void battle::drawCharmanderNCamper()
{
	std::ifstream draw("Charmander N Camper.txt");
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

void battle::drawCharmanderNSandshrew()
{
	std::ifstream draw("Charmander N SandShrew.txt");
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

void battle::drawCharmanderNDiglett()
{
	std::ifstream draw("Charmander N Diglett.txt");
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

void battle::drawCharmanderNGeodude()
{
	std::ifstream draw("Charmander N Geodude.txt");
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

void battle::drawCharmanderNOnix()
{
	std::ifstream draw("Charmander N Onix.txt");
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

void battle::drawCharmanderNBrock()
{
	std::ifstream draw("Charmander N Brock.txt");
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

void battle::drawBulbasaurNBrock()
{
	std::ifstream draw("Bulbasaur N Brock.txt");
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

void battle::drawBulbasaurNCamper()
{
	std::ifstream draw("Bulbasaur N Camper.txt");
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

void battle::drawBulbasaurNSandshrew()
{
	std::ifstream draw("Bulbasaur N Sandshrew.txt");
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

void battle::drawBulbasaurNDiglett()
{
	std::ifstream draw("Bulbasaur N Diglett.txt");
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

void battle::drawBulbasaurNGeodude()
{
	std::ifstream draw("Bulbasaur N Geodude.txt");
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

void battle::drawBulbasaurNOnix()
{
	std::ifstream draw("Bulbasaur N Onix.txt");
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

void battle::drawPlayerNGeoDude()
{
	std::ifstream draw("Player N Geodude.txt");
	if (draw.is_open())
	{
		while (getline(draw, line))
		{
			std::cout << line << "\n";
		}
		draw.close();
	}
}

void battle::drawPlayerNOnix()
{
	std::ifstream draw("Player N Onix.txt");
	if (draw.is_open())
	{
		while (getline(draw, line))
		{
			std::cout << line << "\n";
		}
		draw.close();
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
		displayXP();
		displayTrainerLevel();
		squirtleMoveSet();
		for(;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackTackle(defenseCurl);
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					displayTackleDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
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
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
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
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}


			}
		}
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawSquirtleNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper Todd! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawSquirtleNCamper();
		textBox();
		std::cout << "                                                                                                          Dang! I lost to a chump! " << std::endl;
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                          You've gained 30 experience points, your pokemon is now level 11! " << std::endl;
		Sleep(1000);
		system("pause");
	}

	if (starter == "Bulbasaur")
	{
		drawPlayerNSandhrew();
		textBox();
		cout << "                                                                                                             Camper Todd sent out Sandshrew!\n";


		Sleep(2000);
		system("CLS");
		drawBulbasaurNSandshrew();
		textBox();
		cout << "                                                                                                                Go Bulbasaur!\n";
		Sleep(2000);
		system("CLS");
		drawBulbasaurNSandshrew();
		textBox();
		displayHP();
		displayTrainerHP();
		bulbasaurMoveSet();
		
		for (;;)
		{
			keyBoardInput();

			if (move1 == true)
			{
				system("CLS");
				TraHP = TraHP - 15;
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                         Bulbasaur Used Tackle!\n";
				Sleep(2500);
				move1 = false;
				system("CLS");
				if (TraHP <= 0)
				{
					move1 = false;
					move2 = false;
					move3 = false;
					move4 = false;
					TraHP = 50;
					break;
				}
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				sandShrewMoveSet();
				Sleep(2500);
				if (HP <= 0)
				{
					system("CLS");
					gameOver();
					Sleep(3000);
					system("pause");
					exit(0);
				}
				move1 = false;
				system("CLS");
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				bulbasaurMoveSet();
				
			}

			else if (move2 == true)
			{
				system("CLS");
				TraHP = TraHP - 5;
				HP += 5;
				if (HP > 50)
				{
					HP = 50;
				}
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                           Bulbasaur Used Leech Seed!\n";
				Sleep(2500);
				move2 = false;
				system("CLS");
				if (TraHP <= 0)
				{
					move1 = false;
					move2 = false;
					move3 = false;
					move4 = false;
					TraHP = 50;
					break;
				}
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				sandShrewMoveSet();
				Sleep(2500);
				if (HP <= 0)
				{
					system("CLS");
					gameOver();
					Sleep(3000);
					system("pause");
					exit(0);
				}
				move2 = false;
				system("CLS");
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				bulbasaurMoveSet();
			}

			else if (move3 == true)
			{
				system("CLS");
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                         Bulbasaur Used Growl!\n";
				Sleep(2500);
				move3 = false;
				system("CLS");
				if (TraHP <= 0)
				{
					move1 = false;
					move2 = false;
					move3 = false;
					move4 = false;
					TraHP = 50;
					break;
				}
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				sandShrewMoveSet();
				Sleep(2500);
				if (HP <= 0)
				{
					system("CLS");
					gameOver();
					Sleep(3000);
					system("pause");
					exit(0);
				}
				move3 = false;
				system("CLS");
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				bulbasaurMoveSet();

			}

			else if (move4 == true)
			{
				system("CLS");
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                   Bulbasaur Used Vine Whip! It was super effective and dealt 25 damage!\n";
				Sleep(2500);
				TraHP = TraHP - 25;
				move4 = false;
				system("CLS");
				if (TraHP <= 0)
				{
					move1 = false;
					move2 = false;
					move3 = false;
					move4 = false;
					TraHP = 50;
					break;
				}
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				sandShrewMoveSet();
				Sleep(2500);
				if (HP <= 0)
				{
					system("CLS");
					gameOver();
					Sleep(3000);
					system("pause");
					exit(0);
				}
				move4 = false;
				system("CLS");
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				displayTrainerHP();
				bulbasaurMoveSet();                                               

			}

		}
		cout << HP << "            " << TraHP;
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawBulbasaurNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper Todd! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawBulbasaurNCamper();
		textBox();
		std::cout << "                                                                                                          Dang! I lost to a chump! " << std::endl;
		Sleep(1000);
		system("pause");
	}

	if (starter == "Charmander")
	{
		drawPlayerNSandhrew();
		textBox();
		cout << "                                                                                                             Camper Todd sent out Sandshrew!\n";
		Sleep(2000);
		system("CLS");




		drawCharmanderNSandshrew();
		textBox();
		cout << "                                                                                                               Go Charmander!\n";
		Sleep(2000);
		system("CLS");
		drawCharmanderNSandshrew();
		textBox();
		displayHP();
		displayTrainerHP();
		charmanderMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackScratch(defenseCurl);
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayScratchDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					charmanderMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                Charmander Used Ember! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					sandShrewMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					charmanderMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                    Charmander Used Growl! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					charmanderMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					TraHP = TraHP - 40;
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                   Charmander Used Dragon Rage!\n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					system("CLS");
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					charmanderMoveSet();
				}


			}
		}
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawCharmanderNSandshrew();
		textBox();
		std::cout << "                                                                                           You've gained 30 experience points, your pokemon is now level 11! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawCharmanderNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper Todd! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawCharmanderNCamper();
		textBox();
		std::cout << "                                                                                                          Dang! I lost to a chump! " << std::endl;
		Sleep(1000);
		system("pause");
	}

}

void battle::battle2()
{
	PlaySound("Pokemon RedBlueYellow - Battle! Trainer Music (HQ).wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	drawPlayerNCamper();
	textBox();
	std::cout << "                                                                                                  Camper James wants to battle!" << std::endl;
	system("pause");
	system("CLS");

	if (starter == "Squirtle")
	{
		drawPlayerNDiglett();
		textBox();
		cout << "                                                                                                             Camper James sent out Diglett!\n";
		Sleep(2000);
		system("CLS");




		drawSquirtleNDiglett();
		textBox();
		cout << "                                                                                                               Go Squritle!\n";
		Sleep(2000);
		system("CLS");
		drawSquirtleNDiglett();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		squirtleMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackTackle(defenseCurl);
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					displayTackleDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					diglettMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 30;
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					diglettMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					diglettMoveSet();
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					Sleep(2500);
					move3 = false;
					system("CLS");
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					diglettMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}


			}
		}
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawSquirtleNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper James! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawSquirtleNCamper();
		textBox();
		std::cout << "                                                                                                          Alright, you pass. " << std::endl;
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                          You've gained 30 experience points, your pokemon is now level 11! " << std::endl;
		Sleep(1000);
		system("pause");
	}

	if (starter == "Bulbasaur")
	{
		drawPlayerNDiglett();
		textBox();
		cout << "                                                                                                             Camper James sent out Diglett!\n";


		Sleep(2000);
		system("CLS");
		drawBulbasaurNDiglett();
		textBox();
		cout << "                                                                                                                Go Bulbasaur!\n";
		Sleep(2000);
		system("CLS");
		drawBulbasaurNDiglett();
		textBox();
		displayHP();
		displayTrainerHP();
		bulbasaurMoveSet();

		for (;;)
		{
			keyBoardInput();

			if (move1 == true)
			{
				system("CLS");
				TraHP = TraHP - 15;
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                         Bulbasaur Used Tackle!\n";
				Sleep(2500);
				move1 = false;
				system("CLS");
				if (TraHP <= 0)
				{
					move1 = false;
					move2 = false;
					move3 = false;
					move4 = false;
					TraHP = 50;
					break;
				}
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				diglettMoveSet();
				Sleep(2500);
				if (HP <= 0)
				{
					system("CLS");
					gameOver();
					Sleep(3000);
					system("pause");
					exit(0);
				}
				move1 = false;
				system("CLS");
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				bulbasaurMoveSet();

			}

			else if (move2 == true)
			{
				system("CLS");
				TraHP = TraHP - 5;
				HP += 5;
				if (HP > 50)
				{

					HP = 50;
				}
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                           Bulbasaur Used Leech Seed!\n";
				Sleep(2500);
				move2 = false;
				system("CLS");
				if (TraHP <= 0)
				{
					move1 = false;
					move2 = false;
					move3 = false;
					move4 = false;
					TraHP = 50;
					break;
				}
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				diglettMoveSet();
				Sleep(2500);
				if (HP <= 0)
				{
					system("CLS");
					gameOver();
					Sleep(3000);
					system("pause");
					exit(0);
				}
				move2 = false;
				system("CLS");
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				bulbasaurMoveSet();
			}

			else if (move3 == true)
			{
				system("CLS");
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                         Bulbasaur Used Growl!\n";
				Sleep(2500);
				move3 = false;
				system("CLS");
				if (TraHP <= 0)
				{
					move1 = false;
					move2 = false;
					move3 = false;
					move4 = false;
					TraHP = 50;
					break;
				}
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				diglettMoveSet();
				Sleep(2500);
				if (HP <= 0)
				{
					system("CLS");
					gameOver();
					Sleep(3000);
					system("pause");
					exit(0);
				}
				move3 = false;
				system("CLS");
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				bulbasaurMoveSet();

			}

			else if (move4 == true)
			{
				system("CLS");
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                   Bulbasaur Used Vine Whip! It was super effective and dealt 25 damage!\n";
				Sleep(2500);
				TraHP = TraHP - 25;
				move4 = false;
				system("CLS");
				if (TraHP <= 0)
				{
					move1 = false;
					move2 = false;
					move3 = false;
					move4 = false;
					TraHP = 50;
					break;
				}
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				diglettMoveSet();
				Sleep(2500);
				if (HP <= 0)
				{
					system("CLS");
					gameOver();
					Sleep(3000);
					system("pause");
					exit(0);
				}
				move4 = false;
				system("CLS");
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				bulbasaurMoveSet();

			}

		}
		cout << HP << "            " << TraHP;
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawBulbasaurNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper James! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawBulbasaurNCamper();
		textBox();
		std::cout << "                                                                                                          Alright, you pass. " << std::endl;
		Sleep(1000);
		system("pause");
	}

	if (starter == "Charmander")
	{
		drawPlayerNDiglett();
		textBox();
		cout << "                                                                                                             Camper James sent out Diglett!\n";
		Sleep(2000);
		system("CLS");




		drawCharmanderNDiglett();
		textBox();
		cout << "                                                                                                               Go Charmander!\n";
		Sleep(2000);
		system("CLS");
		drawCharmanderNDiglett();
		textBox();
		displayHP();
		displayTrainerHP();
		charmanderMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackScratch(defenseCurl);
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayScratchDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					diglettMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					charmanderMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                Charmander Used Ember! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					diglettMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					charmanderMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                    Charmander Used Growl! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					diglettMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					charmanderMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					TraHP = TraHP - 40;
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                   Charmander Used Dragon Rage!\n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					diglettMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					system("CLS");
					drawCharmanderNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					charmanderMoveSet();
				}


			}
		}
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawCharmanderNDiglett();
		textBox();
		std::cout << "                                                                                           You've gained 30 experience points, your pokemon is now level 11! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawCharmanderNCamper();
		textBox();
		std::cout << "                                                                                                         Alright, you pass. " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawCharmanderNCamper();
		textBox();
		std::cout << "                                                                                                          Alright, you pass. " << std::endl;
		Sleep(1000);
		system("pause");
	}
}
void battle::battle3()
{
	PlaySound("Pokemon RedBlueYellow - Battle! Gym Leader Music (HQ).wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	drawPlayerNCamper();
	textBox();
	std::cout << "                                                                                                  Gym Leader Brock wants to battle!" << std::endl;
	system("pause");
	system("CLS");
	drawPlayerNGeoDude();
	textBox();
	cout << "                                                                                                             Gym Leader Brock sent out Geodude!\n";
	Sleep(2000);
	system("CLS");

	if (starter == "Squirtle")
	{




		drawSquirtleNGeodude();
		textBox();
		cout << "                                                                                                               Go Squritle!\n";
		Sleep(2000);
		system("CLS");
		drawSquirtleNGeodude();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		squirtleMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackTackle(defenseCurl);
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					displayTackleDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 30;
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}


			}
		}
		drawSquirtleNOnix();
		textBox();
		cout << "                                                                                                             Camper James sent out Sandshrew!\n";
		Sleep(2000);
		system("CLS");
		drawSquirtleNOnix();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		squirtleMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackTackle(defenseCurl);
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					displayTackleDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 30;
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}


			}
		}
		cout << HP << "            " << TraHP;
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawSquirtleNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper James! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawSquirtleNCamper();
		textBox();
		std::cout << "                                                                                                          Alright, you pass. " << std::endl;
		Sleep(1000);
		system("pause");
	}

	if (starter == "Bulbasaur")
	{




		drawBulbasaurNGeodude();
		textBox();
		cout << "                                                                                                               Go Squritle!\n";
		Sleep(2000);
		system("CLS");
		drawBulbasaurNGeodude();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		squirtleMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackTackle(defenseCurl);
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					displayTackleDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 30;
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					geoDudeMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}


			}
		}
		drawBulbasaurNOnix();
		textBox();
		cout << "                                                                                                             Camper James sent out Sandshrew!\n";
		Sleep(2000);
		system("CLS");
		drawBulbasaurNOnix();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		squirtleMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackTackle(defenseCurl);
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					displayTackleDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 30;
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					drawBulbasaurNOnix();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					drawBulbasaurNOnix();
					squirtleMoveSet();
				}


			}
		}
		cout << HP << "            " << TraHP;
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawBulbasaurNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper James! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawBulbasaurNCamper();
		textBox();
		std::cout << "                                                                                                          Alright, you pass. " << std::endl;
		Sleep(1000);
		system("pause");

	}
	if (starter == "Charmander")
	{




		drawCharmanderNGeodude();
		textBox();
		cout << "                                                                                                               Go Squritle!\n";
		Sleep(2000);
		system("CLS");
		drawCharmanderNGeodude();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		squirtleMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackTackle(defenseCurl);
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					displayTackleDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 30;
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}


			}
		}
		drawCharmanderNOnix();
		textBox();
		cout << "                                                                                                             Camper James sent out Sandshrew!\n";
		Sleep(2000);
		system("CLS");
		drawCharmanderNOnix();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		squirtleMoveSet();
		for (;;)
		{
			if (playerTurn == true)
			{
				keyBoardInput();
				if (move1 == true)
				{
					system("CLS");
					attackTackle(defenseCurl);
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					displayTackleDmg();
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move1 = false;
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 30;
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(1500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move2 = false;
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - 20;
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt 20 Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					move3 = false;
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Squirtle Used Tail Whip!\n";
					Sleep(2500);
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					sandShrewMoveSet();
					Sleep(2500);
					if (HP <= 0)
					{
						system("CLS");
						gameOver();
						Sleep(3000);
						system("pause");
						exit(0);
					}
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
					}
					move4 = false;
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					squirtleMoveSet();
				}


			}
		}
		cout << HP << "            " << TraHP;
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawCharmanderNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper James! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawCharmanderNCamper();
		textBox();
		std::cout << "                                                                                                          Alright, you pass. " << std::endl;
		Sleep(1000);
		system("pause");

	}
}
