#pragma once
class DrawGym
{
public:
	void drawGym();
	void movement();
private:
	char map[100][100] = { '.' };
	int row, col;


};
