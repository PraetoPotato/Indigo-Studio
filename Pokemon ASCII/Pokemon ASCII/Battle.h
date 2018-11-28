#pragma once
#include<string>
class battle
{
public:
	battle(int);//supposed to be a constructor that gets the starter pokemon chosen and use it to initialize the starter being used in battles
	void textBox();    //the text box
	void battle1();    //trainer battle number 1
	void battle2();    //trainer battle number 2
	void battle3();    //the gym leader
	void keyBoardInput();
	void squirtleMoveSet();
	void bulbasaurMoveSet();
	void charmanderMoveSet();
	void sandShrewMoveSet();
	void drawPlayerNCamper();
	void drawSquirtleNSandShrew();
	void drawSquirtleNCamper();
	void drawPlayerNSandhrew();
	void drawPlayerNDiglett();
	void drawPlayerNGeoDude();
	void drawPlayerNBrock();
	void drawPlayerNOnix();
	void drawSquirtleNBrock();
	void drawCharmanderNCamper();
	void drawCharmanderNSandshrew();
	void drawCharmanderNDiglett();
	void drawCharmanderNGeodude();
	void drawCharmanderNBrock();
	void drawCharmanderNOnix();
	void drawBulbasaurNCamper();
	void drawBulbasaurNSandshrew();
	void drawBulbasaurNDiglett();
	void drawBulbasaurNGeodude();
	void drawBulbasaurNOnix();
	void drawBulbasaurNBrock();
	void displayHP();
	void displayTrainerHP();
	void attackTackle(bool);
	void attackScratch(bool);
	void displayTackleDmg();
private:
	std::string starter;
	bool move1=false;
	bool move2=false;
	bool move3=false;
	bool move4=false;
	bool playerTurn = true;
};