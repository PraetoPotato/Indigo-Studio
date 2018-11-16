#include "DrawGym.h"
#include <iostream>

void DrawGym::display()
{
	system("CLS");
	drawGym(x, y);
	for (;;)
	{
		movement();
	}
	
}
void DrawGym::drawGym(int charX,int charB)
{
	for (int row = 0;row < 25;row++)
	{
		for (int col = 0;col < 25;col++)
		{
			map[col][row] = '.';
			map[12][0] = '$';
			map[0][5] = 'O';
			map[charX][charB] = '@';

			std::cout << map[col][row];
			
		}
		std::cout << std::endl;
	}
	
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
	