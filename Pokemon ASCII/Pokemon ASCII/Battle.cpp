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
int HP;
int maxiHP;
int TraHP = 50;
int pokemonLevel = 10;
int TrainerLevel = 10;
int attack;
bool isFightingRock=false;
bool tailWhip = false;
bool growl = false;
bool defenseCurl(false);
std::string line;
std::ifstream draw;

int battle::ifGrowlIsTrue()
{
	if (growl == true)
	{
		return 2;
	}
	return 1;
}
void battle::displayHP()
{
	cout << "Pokemon HP:" << HP <<"/" <<getMaxiHP();
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

void battle::youWin()
{
	std::ifstream draw("well done.txt");
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
int battle::getMaxiHP()
{
	if (starter == "Squirtle")
	{
		if (pokemonLevel == 10)
		{

			maxiHP = 50;
		}
		if (pokemonLevel == 11)
		{
			maxiHP = 52;
		}
		if (pokemonLevel == 12)
		{
			maxiHP = 54;
		}
		if (pokemonLevel == 13)
		{
			maxiHP = 55;
		}
		if (pokemonLevel == 14)
		{
			maxiHP = 65;
		}
	}
	if (starter == "Bulbasaur")
	{
		if (pokemonLevel == 10)
		{
			maxiHP = 50;
		}
		if (pokemonLevel == 11)
		{
			maxiHP = 52;
		}
		if (pokemonLevel == 12)
		{
			maxiHP = 54;
		}
		if (pokemonLevel == 13)
		{
			maxiHP = 54;
		}
		if (pokemonLevel == 14)
		{
			maxiHP = 60;
		}
	}

	if (starter == "Charmander")
	{
		if (pokemonLevel == 10)
		{
			maxiHP = 45;
		}
		if (pokemonLevel == 11)
		{
			maxiHP = 47;
		}
		if (pokemonLevel == 12)
		{
			maxiHP = 50;
		}
		if (pokemonLevel == 13)
		{
			maxiHP = 53;
		}
		if (pokemonLevel == 14)
		{
			maxiHP = 55;
		}
	}
	return maxiHP;
}
int battle::maxHP()
{
	if (starter == "Squirtle")
	{
		if (pokemonLevel == 10)
		{
			HP = 50;
		}
		if (pokemonLevel == 11)
		{
			HP = 52;
		}
		if (pokemonLevel == 12)
		{
			HP = 54;
		}
		if (pokemonLevel == 13)
		{
			HP = 55;
		}
		if (pokemonLevel == 14)
		{
			HP = 65;
		}
	}
	if (starter == "Bulbasaur")
	{
		if (pokemonLevel == 10)
		{
			HP = 50;
		}
		if (pokemonLevel == 11)
		{
			HP = 52;
		}
		if (pokemonLevel == 12)
		{
			HP = 54;
		}
		if (pokemonLevel == 13)
		{
			HP = 54;
		}
		if (pokemonLevel == 14)
		{
			HP = 60;
		}
	}

	if (starter == "Charmander")
	{
		if (pokemonLevel == 10)
		{
			HP = 45;
		}
		if (pokemonLevel == 11)
		{
			HP = 47;
		}
		if (pokemonLevel == 12)
		{
			HP = 50;
		}
		if (pokemonLevel == 13)
		{
			HP = 53;
		}
		if (pokemonLevel == 14)
		{
			HP = 55;
		}
	}
	return HP;
}
int battle::tackleDamage()
{
	int dmg;
	if (starter == "Squirtle")
	{
		if (pokemonLevel == 10)
		{
			dmg = 10;
			if (tailWhip == true)
			{
				dmg *= 2;
			}
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
		if (pokemonLevel == 11)
		{
			if (tailWhip == true)
			{
				dmg *= 2;
			}
			dmg = 12;
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
		if (pokemonLevel == 12)
		{
			dmg = 14;
			if (tailWhip == true)
			{
				dmg *= 2;
			}
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
		if (pokemonLevel == 13)
		{
			dmg = 16;
			if (tailWhip == true)
			{
				dmg *= 2;
			}
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
		if (pokemonLevel == 14)
		{
			dmg = 20;
			if (tailWhip == true)
			{
				dmg *= 2;
			}
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
	}
	if (starter == "Bulbasaur")
	{
		if (pokemonLevel == 10)
		{
			dmg = 10;
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
		if (pokemonLevel == 11)
		{
			dmg = 12;
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
		if (pokemonLevel == 12)
		{
			dmg = 14;
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
		if (pokemonLevel == 13)
		{
			dmg = 16;
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
		if (pokemonLevel == 14)
		{
			dmg = 20;
			if (isFightingRock == true)
			{
				dmg /= 2;
			}
		}
	}
	return dmg;

}

int battle::scratchDamage()
{
	int dmg;
	if (pokemonLevel == 10)
	{
		dmg = 12;
	}
	if (pokemonLevel == 11)
	{
		dmg = 14;
	}
	if (pokemonLevel == 12)
	{
		dmg = 18;
	}
	if (pokemonLevel == 13)
	{
		dmg = 20;
	}
	if (pokemonLevel == 14)
	{
		dmg = 24;
	}
	return dmg;
}

int battle::bubbleDamage()
{
	int dmg;
	if (pokemonLevel == 10)
	{
		dmg = 25;
	}
	if (pokemonLevel == 11)
	{
		dmg = 27;
	}
	if (pokemonLevel == 12)
	{
		dmg = 29;
	}
	if (pokemonLevel == 13)
	{
		dmg = 32;
	}
	if (pokemonLevel == 14)
	{
		dmg = 34;
	}
	return dmg;
}

int battle::waterGunDamage()
{
	int dmg;
	if (pokemonLevel == 10)
	{
		dmg = 40;
	}
	if (pokemonLevel == 11)
	{
		dmg = 42;
	}
	if (pokemonLevel == 12)
	{
		dmg = 44;
	}
	if (pokemonLevel == 13)
	{
		dmg = 46;
	}
	if (pokemonLevel == 14)
	{
		dmg = 48;
	}
	return dmg;
}

int battle::vineWhipDamage()
{
	int dmg;
	if (pokemonLevel == 10)
	{
		dmg = 40;
	}
	if (pokemonLevel == 11)
	{
		dmg = 42;
	}
	if (pokemonLevel == 12)
	{
		dmg = 44;
	}
	if (pokemonLevel == 13)
	{
		dmg = 46;
	}
	if (pokemonLevel == 14)
	{
		dmg = 48;
	}
	return dmg;
}

int battle::emberDamage()
{
	int dmg;
	if (pokemonLevel == 10)
	{
		dmg = 20;
		if (isFightingRock == true)
		{
			dmg /= 2;
		}
	}
	if (pokemonLevel == 11)
	{
		dmg = 22;
		if (isFightingRock == true)
		{
			dmg /= 2;
		}
	}
	if (pokemonLevel == 12)
	{
		dmg = 24;
		if (isFightingRock == true)
		{
			dmg /= 2;
		}
	}
	if (pokemonLevel == 13)
	{
		dmg = 26;
		if (isFightingRock == true)
		{
			dmg /= 2;
		}
	}
	if (pokemonLevel == 14)
	{
		dmg = 28;
		if (isFightingRock == true)
		{
			dmg /= 2;
		}
	}
	return dmg;
}
void battle::displayXP()
{
	cout << "Level:" << pokemonLevel << endl;
}

void battle::attackTackle(bool defenseCurl)
{
	if (defenseCurl == true)
	{
		TraHP = TraHP - (tackleDamage()/2);
		defenseCurl = false;
	}
	if (isFightingRock == true)
	{
		TraHP = TraHP - (tackleDamage() / 2);
		defenseCurl = false;
	}
	else
	{
		TraHP = TraHP - tackleDamage();
	}
}

void battle::displayTackleDmg()
{
	if (defenseCurl == true)
	{
		cout << "                                                                                Squirtle Used Tackle! It dealt "<<tackleDamage() << " Damage\n";
	}
	else 
	{
		cout << "                                                                                Squirtle Used Tackle! It dealt " << tackleDamage() << " Damage\n";
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
		cout << "                                                                                Charmander Used Scratch! It dealt "<<scratchDamage()<<" Damage\n";
	}
	else if (isFightingRock == true)
	{
		cout << "                                                                                Charmander Used Scratch!It's not very effective! It dealt " << scratchDamage() << " Damage\n";
	}
	else
	{
		cout << "                                                                                Charmander Used Scratch! It dealt "<<scratchDamage() <<" Damage\n";
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
		HP -= 15 * ifGrowlIsTrue();
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
	std::cout << "                                                                                                  Diglett used Scratch! It dealt 15 damage!"<<std::endl;
	HP -= 15;
}

void battle::geoDudeMoveSet()
{
	int moveNum;
	moveNum = rand() % 4 + 1;
	if (moveNum == 2 || moveNum == 3 || moveNum == 4)
	{
		std::cout << "                                                                                              Geodude used Tackle! It dealt "<< 15* ifGrowlIsTrue() << " Damage" << std::endl;
		HP -= 15 * ifGrowlIsTrue();
	}
	if (moveNum == 1)
	{
		std::cout << "                                                                                              Geodude used Defense Curl!" << std::endl;
		Sleep(1500);
		std::cout << "                                                                                       Geodude's defense rose!" << std::endl;
		defenseCurl = true;
	}
}

void battle::onixMoveSet()
{
	int moveNum;
	moveNum = rand() % 4 + 1;
	if (moveNum == 2 || moveNum == 3 || moveNum == 4)
	{
		if (starter == "Charmander")
		{
			std::cout << "                                                                                             Onix used Rock Throw!It dealt " << 35 * ifGrowlIsTrue() << " Damage" << std::endl;
			std::cout << "                                                                                              It's super effective!" << std::endl;
			HP -= 35 * ifGrowlIsTrue();
		}
		else 
		{
			std::cout << "                                                                                             Onix used Rock Throw!It dealt " << 25 * ifGrowlIsTrue() << " Damage" << std::endl;
			HP -= 25 * ifGrowlIsTrue();
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

void battle::drawPlayerNBrock()
{
	std::ifstream draw("Player N Brock.txt");
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
		maxHP();
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
						tailWhip = false;
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
					TraHP = TraHP - waterGunDamage();
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt "<< waterGunDamage()<<" Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						tailWhip = false;
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
					TraHP = TraHP - bubbleDamage();
					drawSquirtleNSandShrew();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt "<<bubbleDamage() <<" Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						tailWhip = false;
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
					tailWhip = true;
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
						tailWhip = false;
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
		drawSquirtleNSandShrew();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
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
		Sleep(1000);
		system("pause");
	}

	if (starter == "Bulbasaur")
	{
		maxHP();
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
				
				drawBulbasaurNSandshrew();
				textBox();
				displayHP();
				attackTackle(defenseCurl);
				displayTrainerHP();
				cout << "                                                                                         Bulbasaur Used Tackle! It dealt "<<tackleDamage()<<" damage!\n";
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
					defenseCurl=false;
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
					defenseCurl = false;
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
				cout << "                                                                                         Bulbasaur Used Growl!Sandshrew's attack fell!\n";
				growl = true;
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
					defenseCurl = false;
					growl = false;
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
					defenseCurl = false;
					growl = false;
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
		drawBulbasaurNSandshrew();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
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
		maxHP();
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
						defenseCurl = false;
						growl = false;
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
					TraHP = TraHP - emberDamage();
					drawCharmanderNSandshrew();
					textBox();
					displayHP();
					displayTrainerHP();
					cout << "                                                                                Charmander Used Ember!It dealt"<< emberDamage() << "Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						growl = false;
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
					cout << "                                                                                    Charmander Used Growl! Sandshrew's attack fell! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						growl = false;
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
					cout << "                                                                                   Charmander Used Dragon Rage! It dealt 40 damage!\n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						growl = false;
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
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
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
		maxHP();
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
						growl = false;
						tailWhip = false;
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
					TraHP = TraHP - waterGunDamage();
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt " << waterGunDamage() << " Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						growl = false;
						tailWhip = false;
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
					TraHP = TraHP - bubbleDamage();
					drawSquirtleNDiglett();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt " << bubbleDamage() << " Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						growl = false;
						tailWhip = false;
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
						growl = false;
						tailWhip = false;
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
		drawSquirtleNDiglett();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
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
		maxHP();
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
				attackTackle(defenseCurl);
				drawBulbasaurNDiglett();
				textBox();
				displayHP();
				displayTrainerHP();
				cout << "                                                                                         Bulbasaur Used Tackle! It dealt " << tackleDamage() << " damage!\n";
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
					growl = false;
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
					growl = false;
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
				cout << "                                                                                         Bulbasaur Used Growl!Diglett's attack fell!\n";
				growl = true;
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
					growl = false;
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
					growl = false;
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
		drawBulbasaurNDiglett();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawBulbasaurNCamper();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Camper James! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawBulbasaurNCamper();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                          You've gained 30 experience points, your pokemon is now level 12! " << std::endl;std::cout << "                                                                                                          Alright, you pass. " << std::endl;
		Sleep(1000);
		system("pause");
	}

	if (starter == "Charmander")
	{
		maxHP();
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
						growl = false;
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
					cout << "                                                                                Charmander Used Ember!It dealt" << emberDamage() << "Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						growl = false;
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
					cout << "                                                                                    Charmander Used Growl!Diglett's attack fell! \n";
					growl = true;
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
						growl = false;
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
					cout << "                                                                                   Charmander Used Dragon Rage!It dealt 40 damage!\n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						break;
						growl = false;
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
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
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
		pokemonLevel = pokemonLevel + 1;
		Sleep(1000);
		system("pause");
	}
}
void battle::battle3()
{
	maxHP();
	isFightingRock = true;
	PlaySound("Pokemon RedBlueYellow - Battle! Gym Leader Music (HQ).wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	drawPlayerNBrock();
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
						defenseCurl = false;
						growl = false;
						tailWhip = false;
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
					TraHP = TraHP - waterGunDamage();
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Squirtle Used Water Gun! It was super effective and dealt " << waterGunDamage() << " Damage! \n";
					Sleep(2500);

					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						growl = false;
						tailWhip = false;
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
					TraHP = TraHP - bubbleDamage();
					drawSquirtleNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt " << bubbleDamage() << " Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						growl = false;
						tailWhip = false;
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
					tailWhip = true;
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
						defenseCurl = false;
						growl = false;
						tailWhip = false;
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
		system("CLS");
		drawSquirtleNGeodude();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		HP += 2;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawSquirtleNOnix();
		textBox();
		cout << "                                                                                                             Gym Leader Brock sent out Sandshrew!\n";
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
						defenseCurl = false;
						growl = false;
						tailWhip = false;
						break;
					}
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					onixMoveSet();
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
					TraHP = TraHP - waterGunDamage();
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
						defenseCurl = false;
						growl = false;
						tailWhip = false;
						break;
					}
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					onixMoveSet();
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
					drawSquirtleNOnix();
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
					TraHP = TraHP - bubbleDamage();
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Squirtle Used Bubble! It was super effective and dealt " << bubbleDamage() << " Damage! \n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						growl = false;
						tailWhip = false;
						break;
					}
					system("CLS");
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					onixMoveSet();
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
					tailWhip = true;
					Sleep(2500);
					system("CLS");
					drawSquirtleNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					onixMoveSet();
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
						defenseCurl = false;
						tailWhip = false;
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
		drawSquirtleNOnix();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawSquirtleNBrock();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Gym Leader Brock! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawSquirtleNBrock();
		textBox();
		std::cout << "                                                                                                          Alright, here's the boulderbadge. " << std::endl;
		Sleep(1000);
		system("CLS");
		system("pause");
		Sleep(3000);
		youWin();
		system("pause");
		exit(0);
	}

	if (starter == "Bulbasaur")
	{
		maxHP();



		drawBulbasaurNGeodude();
		textBox();
		cout << "                                                                                                               Go Bulbasaur!\n";
		Sleep(2000);
		system("CLS");
		drawBulbasaurNGeodude();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		bulbasaurMoveSet();
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
					cout << "                                                                                         Bulbasaur Used Tackle! It dealt " << tackleDamage() << " damage!\n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
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
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Bulbasaur used Leech Seed! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
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
					bulbasaurMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Bulbasaur Used Growl!Geodude's Attack fell!\n";
					Sleep(2500);
					growl = true;
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						growl = false;
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
					bulbasaurMoveSet();
				}

				else if (move4 == true)
				{
				    TraHP -= 40;
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Bulbasaur Used Vine Whip! It's super effective!\n";
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						break;
					}
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
					move4 = false;
					system("CLS");
					drawBulbasaurNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					bulbasaurMoveSet();
				}


			}
		}
		system("CLS");
		drawBulbasaurNGeodude();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		HP += 2;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawBulbasaurNOnix();
		textBox();
		cout << "                                                                                                             Gym Leader Brock sent out Onix!\n";
		Sleep(2000);
		system("CLS");
		drawBulbasaurNOnix();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
		bulbasaurMoveSet();
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
					cout << "                                                                                         Bulbasaur Used Tackle! It dealt " << tackleDamage() << " damage!\n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						break;
					}
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					onixMoveSet();
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
					bulbasaurMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - 5;
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Bulbasaur Used Leech Seed! It was super effective and dealt 30 Damage! \n";
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						break;
					}
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					onixMoveSet();
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
					bulbasaurMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                    Bulbasaur used Growl!Onix's attakc fell! \n";
					growl = true;
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
					onixMoveSet();
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
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					bulbasaurMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					TraHP -=40 ;
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Bulbasaur used Vine Whip! It's super Effective!!\n";
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						break;
					}
					Sleep(2500);
					system("CLS");
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					onixMoveSet();
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
					drawBulbasaurNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					bulbasaurMoveSet();
				}


			}
		}
		cout << HP << "            " << TraHP;
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawBulbasaurNOnix();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawBulbasaurNBrock();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Gym Leader Brock! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawBulbasaurNBrock();
		textBox();
		std::cout << "                                                                                                          Alright, here's the boulderbadge. " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		youWin();
		Sleep(3000);
		system("pause");
		exit(0);

	}
	if (starter == "Charmander")
	{
		maxHP();



		drawCharmanderNGeodude();
		textBox();
		cout << "                                                                                                               Go Charmander!\n";
		Sleep(2000);
		system("CLS");
		drawCharmanderNGeodude();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
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
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
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
						defenseCurl = false;
						break;
					}
					drawCharmanderNGeodude();
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
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					charmanderMoveSet();

				}

				else if (move3 == true)
				{
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Charmander used Growl! Geodude's attack fell!\n";
					growl = true;
					Sleep(2500);
					system("CLS");
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						growl = false;
						break;
					}
					drawCharmanderNGeodude();
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
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					charmanderMoveSet();
				}

				else if (move2 == true)
				{
					system("CLS");
					TraHP = TraHP - emberDamage();
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Charmander Used Ember!It dealt " << emberDamage() << " Damage! \n";
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
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					charmanderMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					TraHP -= 40;
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Charmander used Dragon Rage!It dealt 40 damage!\n";
					Sleep(2500);
					if (TraHP <= 0)
					{
						move1 = false;
						move2 = false;
						move3 = false;
						move4 = false;
						TraHP = 50;
						defenseCurl = false;
						break;
					}
					system("CLS");
					drawCharmanderNGeodude();
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
					move4 = false;
					system("CLS");
					drawCharmanderNGeodude();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					charmanderMoveSet();
				}


			}
		}
		system("CLS");
		drawCharmanderNGeodude();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		HP += 2;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawCharmanderNOnix();
		textBox();
		cout << "                                                                                                             Gym Leader Brock sent out Onix!\n";
		Sleep(2000);
		system("CLS");
		drawCharmanderNOnix();
		textBox();
		displayHP();
		displayTrainerHP();
		displayXP();
		displayTrainerLevel();
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
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
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
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					onixMoveSet();
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
					charmanderMoveSet();

				}

				else if (move2 == true)
				{
					system("CLS");
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Charmander used Growl! Onix's attack fell!\n";
					Sleep(2500);
					growl = true;
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
					onixMoveSet();
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
					charmanderMoveSet();
				}

				else if (move3 == true)
				{
					system("CLS");
					TraHP = TraHP - emberDamage();
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                Charmander Used Ember!It dealt" << emberDamage() << "Damage! \n";
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
					onixMoveSet();
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
					charmanderMoveSet();
				}

				else if (move4 == true)
				{
					system("CLS");
					TraHP -= 40;
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					cout << "                                                                                   Charmander Used Dragon Rage!It dealt 40 damage!\n";
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
					onixMoveSet();
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
					drawCharmanderNOnix();
					textBox();
					displayHP();
					displayTrainerHP();
					displayXP();
					displayTrainerLevel();
					charmanderMoveSet();
				}


			}
		}
		cout << HP << "            " << TraHP;
		PlaySound(NULL, 0, 0);
		system("CLS");
		drawCharmanderNOnix();
		textBox();
		pokemonLevel = pokemonLevel + 1;
		std::cout << "                                                                                                 Your Pokemon Leveled Up! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawCharmanderNBrock();
		textBox();
		std::cout << "                                                                                                         Trainer Ash defeated Gym Leader Brock! " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		drawCharmanderNBrock();
		textBox();
		std::cout << "                                                                                                          Alright, here's the boulderbadge. " << std::endl;
		Sleep(1000);
		system("pause");
		system("CLS");
		youWin();
		Sleep(3000);
		system("pause");
		exit(0);
	}
}
