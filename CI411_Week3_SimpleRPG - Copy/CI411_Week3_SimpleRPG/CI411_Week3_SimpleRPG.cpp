// CI411_Week3_SimpleRPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;



#include <windows.h>
//introduction screen.
int main() {




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
		return 0;


	}
}
