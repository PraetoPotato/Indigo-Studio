#include "DrawGym.h"
#include <iostream>

void DrawGym::drawGym()
{
	for (int row = 0;row < 100;row++)
	{
		for (int col = 0;col < 100;col++)
		{
			map[col][row] = '.';
		}
		std::cout << std::endl;
	}
}