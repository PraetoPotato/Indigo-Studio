#include<conio.h>
#pragma once

class DrawGym
{
public:
	void display(int);
	void drawGym(int,int);//function for drawing the gym
	void movement();//function responsible for movement in the gym
private:
	char map[25][25] = {'.'};
	int row, col;
	int x=12, y=24;
	int starterChosen;
	bool trainerEncounter1Complete = false;//bool statement for each trainer encounter
	bool trainerEncounter2Complete = false;
	bool trainerEncounter3Complete = false;
	bool gymEncounter = false;
	bool playerWin = false;
};
