#include <iostream>
#include <fstream>//im using this for importing txt files
#include <string>
#include <windows.h>//im using this to change the default window size
#include <stdlib.h>//allows you to clear the screen
#include <iomanip>
#undef max
//#include <Mmsystem.h>//alows you play music
//#include <mciapi.h>//allows you to play music
#pragma comment(lib, "winmm.lib")//you need need for music

bool starterChosen(false);
bool adviceComplete(false);
int starter;
int advice;

int main(int argc, char* argv[])
{
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
		std::cout << "                                 Before I can go any further, is this your first adventure? If need any advice, I'm certainly capable of giving it." << std::endl;
		std::cout << "                                                                [1]Control Info  [2]Adventure Info [3]No Info Needed" << std::endl;
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
			std::cout << "                                 Before I can go any further, is this your first adventure? If need any advice, I'm certainly capable of giving it." << std::endl;
			std::cout << "                                                                [1]Control Info  [2]Adventure Info [3]No Info Needed" << std::endl;
		}
		if (advice == 1 || advice == 2 ||advice == 3)
		{
			adviceComplete = true;
		}
		system("CLS");
	}
	//Movement instructions screen
	if (advice == 1)
	{
		std::cout << "insert movement stuff here." << std::endl;
		system("pause");
	}

	if (advice == 2)
	{
		std::cout << "insert stuff here." << std::endl;
		system("pause");
	}

	PlaySound(NULL, 0, 0);
	system("CLS");

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
		std::cout << "You choose Squirtle!"<<std::endl;
	}

	if (starter == 2)
	{
		std::cout << "You choose Bulbasaur!" << std::endl;
	}

	if (starter == 3)
	{
		std::cout << "You choose Charmander!" << std::endl;
	}

	system("pause");


	return 0;
}

// Test