#include <iostream>
#include <fstream>//im using this for importing txt files
#include <string>
#include <windows.h>//im using this to change the default window size
#include <stdlib.h>//allows you to clear the screen
#include <iomanip>
#include <Mmsystem.h>//allows you to use mciSendString
#include <mciapi.h>//allows you to use mciSendString
#include <conio.h>//allows you to use getch() which will allow keyboard input
#include "DrawGym.h"
#include "Battle.h"
#undef max

#pragma comment(lib, "winmm.lib")//you need need for music

bool starterChosen(false);
bool adviceComplete(false);
bool inOverWorld(true);
int starter;
int advice;


int main(int argc, char* argv[])
{



	int x;



	system("CLS");//this clears the screen
	//set console window size
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 1800, 2000, TRUE);
	std::string line;

	//The Title Screen

	PlaySound("Pokemon Blue Version - Title Screen.wav", NULL, SND_FILENAME |SND_LOOP| SND_ASYNC);//SND_LOOP loops the music, SND_ASYNC lets you play the music while the thing is displaying
	std::ifstream myfile("text logo.txt");//open text file
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			std::cout << line << "\n";
		}
		myfile.close();
	}

	else std::cout << "unable to open file" << std::endl;
	
	system("pause");
	system("CLS");
	PlaySound(NULL, 0, 0);//Stops the music from playing
	//Introduction text
	PlaySound("Pokemon BlueRed - Route 24 & 25.wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);

	std::ifstream profOak("Oak.txt");
	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}

	else std::cout << "unable to open file" << std::endl;

	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout<< "                                                                                               Hello there, it's so very nice to see you!"<<std::endl;


	system("pause");
	system("CLS");

	profOak.open("Oak.txt", std::ios::in);
	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}

	else std::cout << "unable to open file" << std::endl;

	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "                                                                                              Welcome to the world of Pokemon!" << std::endl;


	system("pause");
	system("CLS");

	profOak.open("Oak.txt", std::ios::in);

	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}

	else std::cout << "unable to open file" << std::endl;

	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "                                                                                              My name is Professor Oak." << std::endl;


	system("pause");
	system("CLS");

	while (adviceComplete == false)
	{
		profOak.open("Oak.txt", std::ios::in);//open the text file

		if (profOak.is_open())
		{
			while (getline(profOak, line))
			{
				std::cout << line << "\n";
			}
			profOak.close();
		}

		else std::cout << "unable to open file" << std::endl;

		std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
		std::cout << "                                            Before I can go any further, is this your first adventure? If need any advice, I'm certainly capable of giving it." << std::endl;
		std::cout << "                                                                            [1]Control Info  [2]Adventure Info [3]No Info Needed" << std::endl;
		while (!(std::cin >>std::noskipws >> advice))//noskipws skips whitespace as input
		{
			system("CLS");
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			profOak.open("Oak.txt", std::ios::in);

			if (profOak.is_open())
			{
				while (getline(profOak, line))
				{
					std::cout << line << "\n";
				}
				profOak.close();
			}

			std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
			std::cout << "                                            Before I can go any further, is this your first adventure? If need any advice, I'm certainly capable of giving it." << std::endl;
			std::cout << "                                                                            [1]Control Info  [2]Adventure Info [3]No Info Needed" << std::endl;
		}
		if (advice == 1)
		{
			system("CLS");
			std::cout << "Movement Controls: \n  W: Move Up \n  A: Move Left \n  D: Move Right \n  S: Move Down \n" << std::endl;
			system("pause");
		}
		//adventure instructions screen
		if (advice == 2)
		{
			system("CLS");
			std::cout << "You are about to leave your home and live your new life travelling far and wide to become a Pokemon master." << std::endl << "Your goal in this new world is to defeat all the gym trainers and beat Brock, the Rock Gym Leader. " << std::endl;
			system("pause");
		}

		if (advice == 3)
		{
			adviceComplete = true;
		}
		system("CLS");
	}

	profOak.open("Nidorino.txt", std::ios::in);

	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}

	else std::cout << "unable to open file" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	mciSendString("open \"Pok�mon - Nidorino (Cry).mp3\" type mpegvideo alias mp3", NULL, 0, NULL);//I used this so that this sound effect can be played over the music//Play Sound doesn't allow to play two sound simataneuosly
	mciSendString("play mp3", NULL, 0, NULL);
	//Sleep(800);
	//PlaySound("Pokemon BlueRed - Route 24 & 25.wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	std::cout << "                                                                                      This world is inhabited by creatures called Pokemon." << std::endl;

	system("pause");
	system("CLS");

	profOak.open("Nidorino.txt", std::ios::in);

	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}


	else std::cout << "unable to open file" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "                                                                                   For some people,Pokemon are pets. Some use them for battles." << std::endl;

	system("pause");
	system("CLS");
	
	profOak.open("Nidorino.txt", std::ios::in);

	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}

	else std::cout << "unable to open file" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "                                                                                   I on the other hand, study Pokemon as a profession." << std::endl;

	system("pause");
	system("CLS");

	profOak.open("Oak.txt", std::ios::in);

	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}

	else std::cout << "unable to open file" << std::endl;

	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "                                                                                              Ash!" << std::endl;

	system("pause");
	system("CLS");

	profOak.open("Oak.txt", std::ios::in);

	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}

	else std::cout << "unable to open file" << std::endl;

	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "                                                                                             Your very own Pokemon legend is about to unfold!" << std::endl;


	system("pause");
	system("CLS");

	profOak.open("Oak.txt", std::ios::in);

	if (profOak.is_open())
	{
		while (getline(profOak, line))
		{
			std::cout << line << "\n";
		}
		profOak.close();
	}

	else std::cout << "unable to open file" << std::endl;

	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "                                                                             A world full of hopes and dream with Pokemon awaits! Let's go!" << std::endl;


	system("pause");
	system("CLS");
	PlaySound(NULL, 0, 0);
	//Pick a Starter Screen
	PlaySound("Pokemon HeartGold and SoulSilver - Safari Zone Gate (8-Bit).wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	while (starterChosen == false)
	{
		std::ifstream starterPokemon("starterPokemon.txt");
		if (starterPokemon.is_open())
		{
			while (getline(starterPokemon, line))
			{
				std::cout << line << "\n";
			}
			starterPokemon.close();
		}

		std::cout << "Pick a Starter:" << std::endl;
		while (!(std::cin >> std::noskipws >> starter))
		{
			system("CLS");
			std::ifstream starterPokemon("starterPokemon.txt");
			if (starterPokemon.is_open())
			{
				while (getline(starterPokemon, line))
				{
					std::cout << line << "\n";
				}
				starterPokemon.close();
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Pick a Starter:" << std::endl;
		}
		if (starter == 1|| starter == 2|| starter == 3)
		{
			starterChosen = true;

		}
		system("CLS");
	}

	PlaySound(NULL, 0, 0);


	if (starter == 1)
	{
		PlaySound("Pok�mon RedBlueYellow - Pok�mon Capture - Sound Effect.wav", NULL, SND_FILENAME| SND_ASYNC);
		std::cout << "You choose Squirtle!"<<std::endl;
		x = 1;

	}

	if (starter == 2)
	{
		PlaySound("Pok�mon RedBlueYellow - Pok�mon Capture - Sound Effect.wav", NULL, SND_FILENAME | SND_ASYNC);
		std::cout << "You choose Bulbasaur!" << std::endl;
		x = 2;
	
	}

	if (starter == 3)
	{
		PlaySound("Pok�mon RedBlueYellow - Pok�mon Capture - Sound Effect.wav", NULL, SND_FILENAME | SND_ASYNC);
		std::cout << "You choose Charmander!" << std::endl;
		x = 3;
		
	}


	system("pause");

/*
	status starter;
	
	{
		starter.pokemon();
	}

	
	*/
//Battle Stuff
	//battle()




	












//OverWorld stuff
	system("CLS");
	DrawGym gym;
	if (inOverWorld == true)
	{
		system("CLS");
		
		gym.display(x);

		


	}
	
	
//while(inOverworld)
	//char var(0);
	//var=getch();
	//switch(var)
	// {
	//   case:
	//      wasd;
	// }

	system("pause");
	return 0;
}

// Test