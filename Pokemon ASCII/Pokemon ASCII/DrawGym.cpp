#include "DrawGym.h"
#include "Battle.h"
#include <iostream>
#include <windows.h>
#pragma comment(lib, "winmm.lib")
void DrawGym::display(int starterNum)
{
	PlaySound("28 Poke�mon Gym.wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	battle fight(starterNum);
	system("CLS");
	drawGym(x, y);

	for (;;)
	{
		
		movement();
		
		if (map[14][15] == '@'|| map[13][15] == '@'|| map[12][15] == '@' || map[11][15] == '@' || map[10][15] == '@' || map[9][15] == '@' || map[8][15] == '@')
		{
			
			if (playerWin == false)
			{
				std::cout << "                                                                Hah! do you think you can beat Brock you chump?" << std::endl;
				system("pause");
                system("CLS");
				PlaySound("Trainer Battle intro.wav", NULL, SND_FILENAME | SND_ASYNC);
				Sleep(3000);
                fight.battle1();
				playerWin = true;
				PlaySound("28 Poke�mon Gym.wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
			}
	
		}
		
		if (map[14][5] == '@' || map[13][5] == '@' || map[12][5] == '@' || map[11][5] == '@' || map[10][5] == '@' || map[9][5] == '@' || map[8][5] == '@')
		{

			if (playerWin2 == false)
			{
				std::cout << "                                                                You do not want to play me. I am a very angry man." << std::endl;
				system("pause");
				system("CLS");
				PlaySound("Trainer Battle intro.wav", NULL, SND_FILENAME | SND_ASYNC);
				Sleep(3000);
				fight.battle2();
				playerWin2 = true;
				PlaySound("28 Poke�mon Gym.wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
			}
			
			//system("pause");
			//system("CLS");
			//fight.battle1();
		}
		
		
		if (map[12][1] == '@' )
		{

			if (playerWin3 == false)
			{
				std::cout << "                                                          I am Brock and as the Pewter City Gym Leader, I accept your challenge." << std::endl;
				system("pause");
				system("CLS");
				PlaySound("Pokemon RedBlueYellow - Battle! Gym Leader Music Intro (HQ).wav", NULL, SND_FILENAME | SND_ASYNC);
				Sleep(3100);
				fight.battle3();
				playerWin3 = true;
				PlaySound("28 Poke�mon Gym.wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
			}
			
			//system("pause");
			//system("CLS");
			//fight.battle1();
		}
		
	}
}

void DrawGym::drawGym(int charX,int charB)
{
	for (int row = 0;row < 25;row++)
	{
		for (int col = 0;col < 25;col++)
		{
			map[col][row] = '.';//all the rows and columns are dots
			map[12][0] = '$';
			map[0][5] = 'O';
			map[15][15] = 'O';
			map[charX][charB] = '@';

			std::cout << map[col][row];
			
		}
		std::cout << std::endl;
		
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	
}

void DrawGym::movement()
{

	char input = 0;
	input = _getch();//used to read a character from screen without using enter
	switch (input)
	{
	case 'w':
		system("CLS");
		//std::cout << "W was pressed \n";
		//break;
		if (y - 1 >= 0)
		{
			y--;
			drawGym(x, y);
		}
		break;
	case 'a':
		system("CLS");
		if (x - 1 >= 0)
		{
			x--;
			drawGym(x, y);
		}
		break;
	case 's':
		system("CLS");
		if (y + 1 <=24)
		{
			y++;
			drawGym(x, y);
		}
		break;
		//drawGym(x, y);
		//break;
	case 'd':
		system("CLS");
		if (x + 1 <=24)
		{
			x++;
			drawGym(x, y);
		}
		break;
	default:
		system("CLS");
		drawGym(x, y);
	}
}

//here's a thing
	