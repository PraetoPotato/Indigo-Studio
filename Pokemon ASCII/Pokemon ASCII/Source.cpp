#include <iostream>
#include <fstream>//im using this for importing txt files
#include <string>
#include <windows.h>//im using this to change the default window size
#include <stdlib.h>//allows you to clear the screen
#undef max
//#include <Mmsystem.h>//alows you play music
//#include <mciapi.h>//allows you to play music
#pragma comment(lib, "winmm.lib")

bool starterChosen(false);
int starter;

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
	//open text file
	PlaySound("Pokemon Blue Version - Title Screen.wav", NULL, SND_FILENAME |SND_LOOP| SND_ASYNC);//SND_LOOP loops the music, SND_ASYNC lets you play the music while the thing is displaying
	std::ifstream myfile("text logo.txt");
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
	PlaySound(NULL, 0, 0);//Stops the music from playing
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
		while (!(std::cin >> starter))
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
	system("pause");


	return 0;
}

// Test