#include<conio.h>
#pragma once

class DrawGym
{
public:
	void display();
	void drawGym(int,int);
	void movement();
private:
	char map[25][25] = {'.'};
	int row, col;
	int x=12, y=24;

};
