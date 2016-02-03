// linear search.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//main method
int main()
{

	//declaring the array cars that will store strings
	//the string doesn't hold any value in position 0 because the user chose a position from 1 to 6
	string cars[7] = { "","BMW","Jaguar","Rover","Ferrari","Volkswagen","Alfa Romeo" };
	//declaring the variable that will be used
	int i, key;
	//prompt the user to enter a number between 1 and 6
	cout << "Please enter a number from 1 to 6" << endl;
	//store that number in variable key;
	cin >> key;

	while (key != 1000)
	{
		//if statement that is used to perform the linear search check in case the user has entered a number from 1 to 6
		if (key >= 1 && key <= 6)
		{
			//if the number is between 1 and 6 the program will execute the linear search
			for (i = 1; i <= 6; i++)
				//program will find the value hold on the position required
				if (i == key)
					//program will display that value on the screen
					cout << "The name of the car that is hold on the position " << key << " is: " << cars[i] << endl;
		}
		//if the number entered is not between 1 and 6 then the user will be asked to enter another one correctly
		else
			cout << "Please enter ONLY numbers from 1 to 6!" << endl;
		//the new entered number will be stored in the variable key
		cin >> key;
	}
	_getch();
}
