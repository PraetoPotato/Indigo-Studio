#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

int main() {
	//set console window size
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 1800, 1000, TRUE);
	std::string line;

	//open text file
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

	return 0;
}