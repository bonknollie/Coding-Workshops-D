#pragma once
// -------------------------
// --- CI411 Week 5 - Func source file
#include <cmath>
#include <iostream>
#include "functions.h"
#include <windows.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Function Defintions

// main menu
void mainMenu() {
	int choice;
	do {
		std::cout << "=== Main Menu ===" << std::endl;
		std::cout << "1. " << std::endl;
		std::cout << "2. " << std::endl;
		std::cout << "3. " << std::endl;
		std::cout << "4. " << std::endl;
		std::cout << "5. " << std::endl;
		std::cout << "6. " << std::endl;
		std::cout << "7. " << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			std::cout << "" << std::endl;
			break;
		case 2:
			std::cout << "" << std::endl;
			break;
		case 3:
			std::cout << "" << std::endl;
			break;
		case 4:
			std::cout << "" << std::endl;
			break;
		case 5:
			std::cout << "" << std::endl;
			break;
		case 6:
			std::cout << "" << std::endl;
			break;
		case 7:
			std::cout << "" << std::endl;
			break;
		default:
			std::cout << "" << std::endl;
		}
	} while (choice != 3);
}


void newFunction()
{
	cout << "This Got Executed! \n\n";
}

void displayTimesTable(float table)
{
	cout << "\n\n " << "Times table \n";

	int x = 0;

	for (int i = 1; i <= 10; ++i)
	{
		cout << "\n" << table << " x " << i << " = " << table * i;
	}
}

float circleArea(float radius)
{
	float pi = 3.142;
	float area = radius * radius * pi;
	return area;
}



float rectangleArea(float length1, float length2)
{
	return (length1 * length2);
}

float rectanglePerimeter(float length1, float length2)
{
	return (2 * length1 + 2 * length2);
}

float Circumference(float pi, float radius)
{
	return (2 * pi * radius);
	
}

void calculations()
{
	float radius;
	float circumference;
	float area;

	cout << "Please enter the radius of a circle: ";
	cin >> radius;
	cout << "\n";

	circumference = 2 * 3.1416 * radius;
	area = 3.1416 * radius * radius;

	cout << "\n\n************************************" << "\n";
	cout << "\n\n*Area and Circumference of A Circle*" << "\n";
	cout << "\n\n************************************" << "\n";
	cout << "\tRadius= " << radius << "\n";
	cout << "\tArea= " << area << "\n";
	cout << "\tCircumference= " << circumference << "\n";

	cin.get();
}

void hypotenuse()
	{
	double side1, side2;

		
	std::cout << "\n\nEnter the length of the first side: ";
	std::cin >> side1;

	std::cout << "\n\nEnter the length of the second side: ";
	std::cin >> side2;

	
	double hypotenuse = std::sqrt(std::pow(side1, 2) + std::pow(side2, 2));

	std::cout << "The hypotenuse of the triangle is: " << hypotenuse << std::endl;

	return;
}


// end program
void endProgram() {
	std::cout << "=== End of Program ===" << std::endl;
	
}


void rpgGame()
{


	{




		{

			cout << "============== Game Start ================\n";
			Sleep(100);
			cout << "                             -|             |-\n";
			Sleep(100);
			cout << "         -|                  [-_-_-_-_-_-_-_-]                  |-\n";
			Sleep(100);
			cout << "         [-_-_-_-_-]          |             |          [-_-_-_-_-]\n";
			Sleep(100);
			cout << "          | o   o |           [  0   0   0  ]           | o   o |\n";
			Sleep(100);
			cout << "           |     |    -|       |           |       |-    |     |\n";
			Sleep(100);
			cout << "           |     |_-___-___-___-|         |-___-___-___-_|     |\n";
			Sleep(100);
			cout << "           |  o  ]              [    0    ]              [  o  |\n";
			Sleep(100);
			cout << "           |     ]   o   o   o  [ _______ ]  o   o   o   [     | ----___\n";
			Sleep(100);
			cout << "_____----- |     ]              [ ||||||| ]              [     |\n";
			Sleep(100);
			cout << "           |     ]              [ ||||||| ]              [     |\n";
			Sleep(100);
			cout << "       _-_-|_____]--------------[_|||||||_]--------------[_____|-_-_\n";
			Sleep(100);
			cout << "      ( (__________------------_____________-------------_________) )\n";
			Sleep(100);
			cout << "                                                                                   \n";
			Sleep(100);
			cout << "  @@@@@@@@@@@@@@    @@@@@               @@@        @@@@@@@@@@@@@      @@@@@@@@@@@@     \n";
			Sleep(100);
			cout << "  @@@@@@@@@@@@@@    @@@@@              @@@@@         @@@@@@@@@@@@@@   @@@@@@@@@@@@@@   \n";
			Sleep(100);
			cout << "  @@@@@@    @@@@    @@@@@             @@@@@@@@       @@@@@     @@@@@  @@@@@@           \n";
			Sleep(100);
			cout << "  @@@@@@@@@@@@@     @@@@@            @@@  @@@@@      @@@@@     @@@@@  @@@@@@@@@@@      \n";
			Sleep(100);
			cout << "  @@@@@@     @@@@@  @@@@@           @@@@@@@@@@@@     @@@@@     @@@@@  @@@@@@           \n";
			Sleep(100);
			cout << "  @@@@@@   @@@@@@@  @@@@@          @@@       @@@@    @@@@@   @@@@@@   @@@@@@@@@@@@@@@  \n";
			Sleep(100);
			cout << "  @@@@@@@@@@@@@@@@   @@@@@@@@@@@@ @@@@        @@@@   @@@@@@@@@@@@@    @@@@@@@@@@@@@@@@ \n";

			//Character select menu

			cout << "         ,     .\n";
			Sleep(100);
			cout << "        /(     )\               A			\n";
			Sleep(100);
			cout << "   .--.( `.___.' ).--.         /_\			\n";
			Sleep(100);
			cout << "   `._ `%_&%#%$_ ' _.'     /| <___> |\		\n";
			Sleep(100);
			cout << "      `|(@\*%%/@)|'       / (  |L|  ) \	\n";
			Sleep(100);
			cout << "       |  |%%#|  |       J d8bo|=    L		\n";
			Sleep(100);
			cout << "        \ \$#%/ /        | 8888| |8888 |	                                 CHOOSE YOUR CHARACTER:                                \n";
			Sleep(100);
			cout << "        |\|%%#|/|        J Y8P | | Y8P F	                                 1. GOBLIN                \n";
			Sleep(100);
			cout << "        | (. .) |         \ (  | |  ) /	                                 2. WIZARD                \n";
			Sleep(100);
			cout << "    ___.'  `-'  `.___      \|  |L|  |/		                         3. OGRE                  \n";
			Sleep(100);
			cout << "  .'#*#`-       -'$#*`.       / )| \		                         4. SOILDER               \n";
			Sleep(100);
			cout << " /#%^#%*_ *%^%_  #  %$%\    .J (__)				         5. ELF                   \n";
			Sleep(100);
			cout << " #&  . %%%#% ###%*.   *%\.-'&# (__)		\n";
			Sleep(100);
			cout << " %*  J %.%#_|_#$.\J* \ %'#%*^  (__)		\n";
			Sleep(100);
			cout << " *#% J %$%%#|#$#$ J\%   *   .--|(_)		\n";
			Sleep(100);
			cout << " |%  J\ `%%#|#%%' / `.   _.'   |L|			\n";
			Sleep(100);
			cout << " |#$%||` %%%$### '|   `-'      |L|			\n";
			Sleep(100);
			cout << " (#%%||` #$#$%%% '|            |L|			\n";
			Sleep(100);
			cout << " | ##||  $%%.%$%  |            |L|			\n";
			Sleep(100);
			cout << " |$%^||   $%#$%   |            |L|			\n";
			Sleep(100);
			cout << " |&^ ||  #%#$%#%  |            |L|			\n";
			Sleep(100);
			cout << " |#$*|| #$%$$#%%$ |\           |L|			\n";
			Sleep(100);
			cout << " ||||||  %%(@)$#  |\\          |L|			\n";
			Sleep(100);
			cout << " `|||||  #$$|%#%  | L|         |L|			\n";
			Sleep(100);
			cout << "      |  #$%|$%%  | ||l        |L|			\n";
			Sleep(100);
			cout << "      |  ##$H$%%  | |\\        |L|			\n";
			Sleep(100);
			cout << "      |  #%%H%##  | |\\|       |L|			\n";
			Sleep(100);
			cout << "      |  ##% $%#  | Y|||       |L|			\n";
			Sleep(100);
			cout << "      J $$#* *%#% L  |E/					\n";
			Sleep(100);
			cout << "      (__ $F J$ __)  F/					\n";
			Sleep(100);
			cout << "       J#%$ | |%%#%L						\n";
			Sleep(100);
			cout << "       |$$%#& & %%#|						\n";
			Sleep(100);
			cout << "       J##$ J % %%$F						\n";
			Sleep(100);
			cout << "       %#$ | |%#$%							\n";
			Sleep(100);
			cout << "      * #$%| | #$							\n";
			Sleep(100);
			cout << "    /$#' )   (  `%%\						\n";
			Sleep(100);
			cout << "   /#$# /     \ %$%\						\n";
			Sleep(100);
			cout << "  ooooO'      `Ooooo						\n";

			//Game Variables
			string chName;
			string weapon;
			float cooldown;
			float collision;
			float attack;
			float damage;
			int playerselection;

			cin >> playerselection;

			switch (playerselection)
			{
			case 1:
				//Goblin character
				chName = "GOBLIN";
				weapon = "MACE";
				damage = 48;
				cooldown = 30;
				break;

			case 2:
				//Wizard character
				chName = "WIZARD";
				weapon = "FIREBALL";
				damage = 99;
				cooldown = 80;
				break;

			case 3:
				//Ogre character
				chName = "OGRE";
				weapon = "BIG STICK";
				damage = 48;
				cooldown = 30;
				break;

			case 4:
				//soilder character
				chName = "SOLDIER";
				weapon = "AK47";
				damage = 70;
				cooldown = 40;
				break;

			case 5:
				//Elf character
				chName = "ELF";
				weapon = "CANDY CANE";
				damage = 10;
				cooldown = 8;
				break;

			default:
				//STICKMAN character (weak)
				chName = "STICKMAN";
				weapon = "stick arms";
				damage = 2;
				cooldown = 99;
			}

			cout << "\n\n=========== BOSS FIGHT ============\n\n\n";
			cout << chName << endl;
			cout << "Ever since the kindgom fallen and the radiation spread he has only been growing stronger, The almighty gorrila must be defeated to save humanity! This is your quest.\n";
			cout << weapon << endl;
			cout << "To slay this beast you must use your sword, so yield your weapon and fight!!\n";

			attack = damage * 5 * 1 / cooldown;
			cout << "\n\n " << chName << "attacks with" << weapon;
			cout << "\n Your attack power totals " << attack;

			//check if pc alive
			if (attack > 70)
			{
				cout << "\n YOU ARE VICTORIOUS!";
			}
			else
			{
				cout << "\n WASTED ";
			}

			//exit
			cout << "\n \n \n ============== GG ================= \n \n \n";
			return;


		}
	}
}