#include "DrawGym.h"
#include <iostream>

void DrawGym::display()
{
	drawGym(x,y);
	movement();
}
void DrawGym::drawGym(int charX,int charB)
{
	for (int row = 0;row < 25;row++)
	{
		for (int col = 0;col < 25;col++)
		{
			map[col][row] = '.';
			map[12][0] = '$';
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
	for (;;)
	{
		switch (input)
		{
		case 'w':
			system("CLS");
			std::cout << "W was pressed \n";
			break;
			//if (y - 1 >= 0)
			//{
			//	y--;
			//	drawGym(x, y);
			//}
			//break;
		case 'a':
			system("CLS");
			std::cout << "A was pressed \n";
			break;
			//if (x - 1 >= 0)
			//{
			//	x--;
			//	drawGym(x, y);
			//}
			//break;
		case 's':
			system("CLS");
			std::cout << "S was pressed \n";
			break;
			//drawGym(x, y);
			//break;
		case 'd':
			system("CLS");
			std::cout << "D was pressed \n";
			break;
			//drawGym(x, y);
			//break;
		}
		
	}
	
}