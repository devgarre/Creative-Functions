// Creative Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string GetTextFromUser();
string GetNumbersFromUser();

int main()
{
	string number;
	string name;
	bool weapon = false;
	bool finished = false;
	cout << "Welcome to Destiny: the Text Adventure\n";
	cout << "To begin, please enter your name: ";
	name = GetTextFromUser();
	cout << "\nYou awake to a small robot floating in front of your face.\n'Wake up, " << name << ",' it says. 'You've been dead for a long time. No time for discussion though, we should get moving.'\n";
	cout << "\n1. Look around\n2. Do nothing\n";
	number = GetNumbersFromUser();
	if (number == "1")
	{
		cout << "Looking around, you see a path leading away in front of you and a cliff dropping off to your right.\n";
	}
	if (number == "2")
	{
		cout << "You decide to continue sitting on the ground. \nBefore long you hear a weapon charging up behind you before your world goes black.\nYou are dead.\n";
		finished = true;
	}
	while (finished == false) 
	{
		cout << "The robot continues to float in front of your face.\n";
		cout << "\n1. Walk along path\n2. Check Inventory\n3. Sit around\n4. Jump off cliff\n";
		number = GetNumbersFromUser();
		if (number == "1")
		{
			cout << "After walking for a brief time, you come across a group of humanoid aliens brandishing weapons.\n";
			if (weapon == true) 
			{
				cout << "\n1. Shoot them\n2. Wave hello\n3. Rush them\n";
				number = GetNumbersFromUser();
				if (number == "1") 
				{
					cout << "You dispatch the aliens with relative ease. You are sure that this is only the first step on a long journey of interstellar heroism.\n";
					finished = true;
				}
				if (number == "2")
				{
					cout << "The aliens raise their weapons. You are shot and killed.\n";
					finished = true;
				}
				if (number == "3")
				{
					cout << "The aliens raise their weapons. You are shot and killed before you can even get close to them.\n";
					system("pause");
					return 0;
				}
				else 
				{
					cout << "Please enter a valid number.\n";
				}
			}
			if (weapon == false) 
			{
				cout << "\n1. Wave hello\n2. Rush them\n";
				number = GetNumbersFromUser();
				if (number == "1")
				{
					cout << "The aliens raise their weapons. You are shot and killed.\n";
					finished = true;
				}
				if (number == "2")
				{
					cout << "The aliens raise their weapons. You are shot and killed before you can even get close to them.\n";
					finished = true;
				}
				else
				{
					cout << "Please enter a valid number.\n";
				}
			}
		}
		if (number == "2")
		{
			cout << "You seem to be carrying a Khvostov 7G-02 assault rifle. It's somewhat worn due to centuries of disuse, but it seems to still be able to fire.\n";
			cout << "\n1. Equip weapon\n2. Leave it unequiped\n";
			number = GetNumbersFromUser();
			if (number == "1")
			{
				cout << "You decide you'd rather not walk through this unknown place with out any defense.\n";
				weapon = true;
			}
			if (number == "2")
			{
				cout << "You decide that violence does not suit you.\n";
				weapon = false;
			}
		}
		if (number == "3")
		{
			cout << "You hear a weapon charging up behind you before your world goes black.\nYou are dead.\n";
			finished = true;
		}
		if (number == "4")
		{
			cout << "You careen towards the ground at high speeds before hitting it with a sickening crunch. \nYou are dead.\nWhat did you think would happen?\n";
			finished = true;
		}
	}
	system("pause");
    return 0;
}

string GetTextFromUser()
{
	string name;
	cin >> name;
	return name;
}

string GetNumbersFromUser()
{
	string number;
	cin >> number;
	return number;
}