#include "DrawGym.h"
#include "Battle.h"
#include <iostream>
#include <windows.h>
#pragma comment(lib, "winmm.lib")
void DrawGym::display(int starterNum)
{
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
	