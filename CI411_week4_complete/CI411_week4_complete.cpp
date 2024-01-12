// CI411_Week2.cpp :
// Noah Kirvan-Cranfield 
// Week 2 
// CI411 

#include <iostream>
void menuu();
void ArithmeticOp();
void missle();
void Radiusfunction();
void gameHp();


//==========================================================================================================

int main(int argc, char** argv) {
	menuu();
	counting20();
	counting100();
	timestables();
}

void menuu()
{

	while (true)
	{
		int n1 = 1, n2 = 2, n3 = 3, n4 = 4, n5 = 5, n6 = 6, n7 = 7, n8 = 8;
		int menu;
		std::cout << "MENU" << std::endl;
		std::cout << "_______" << std::endl;
		std::cout << "5: Counting to 20" << std::endl;
		std::cout << "6: Counting down from 100 in 5s" << std::endl;
		std::cout << "7: Timestables up to 12" << std::endl;

		if (scanf_s("%d", &menu) > 5)


			if (menu == 1)       //first function
				ArithmeticOp();
		if (menu == 5)		//fifth function
			counting20();
		if (menu == 6)		//sixth function
			counting100();
		if (menu == 7)		//seventh function
			timestables();
		if (menu == 8) 		//eight function
			timestables2();
		else if (n1, n2, n3, n4, n5, n6, n7, n8)
		{
			std::cout << "Please press 1, 2, 3 or 4 for the differing programs." << std::endl;
			break;
		};


	}
}
//==========================================================================================================








void counting20()
{

	for (int num = 0; num < 20; num++)
	{
		std::cout << num << "\n";
	}
}

void counting100()
{
	for (int num2 = 100; num2 = 0; num2 + 5)
	{
		std::cout << num2 << "\n";
	}
}

void timestables()
{
	int num3 = 0;
	std::cin >> (num3);

	for (int count = 12; count = 0; count++)
	{
		int result = (num3 * count);
		std::cout << (result);
	}

}

void timestables2()

	char choice;
	bool over = false;
	while (over == false)
	{
		timestables();
		std::cout << "You want to repeat? | Y for yes | N for no";
		std::cin >> (choice);
		if (choice = "Y" || choice = "N"
		{
			over = true
		}
	}




void combatEncounter()
{
	bool gameOver = false;
	float pcHealth = 100;
	float npcHealth = 100;
	float pcAttack = 50;
	float npcAttack = 50;
	float pcAttackModifier = 0;
	float npcAttackModifier = 0;
	int playerChoice = 0;

	while (gameOver == false)
	{

		std::cout << "\n\n =================================================\n\n";
		std::cout << "\n Select an option below: \n";
		std::cout << "\n 1: Attack";
		std::cout << "\n 2: Defend";
		std::cout << "\n 3: Evade";
		std::cout << "\n\n choice: ";
		std::cin >> playerChoice;

		if (playerChoice == 1)
		{
			std::cout << "\n 1: Attack Selected \n";
			pcAttackModifier = rand() % 5 + 1;
		}
		else if (playerChoice == 2)
		{
			std::cout << "\n 2: Defend Selected \n";
			pcAttackModifier = rand() % 4 + 1;
		}
		else if (playerChoice == 3)
		{
			std::cout << "\n 3: Evade Selected \n";
			pcAttackModifier = rand() % 3 + 1;
		}
		else
		{
			std::cout << "\n Not a Valid Option \n";
			pcAttackModifier = 100;
		}

		npcAttackModifier = rand() % 4 + 1;


		std::cout << "\n PC Attack = " << pcAttack * 1 / pcAttackModifier;
		std::cout << "\n NPC Attacl = " << pcAttack * 1 / pcAttackModifier;

		npcHealth -= pcAttack * 1 / pcAttackModifier;
		pcHealth -= pcAttack * 1 / npcAttackModifier;

		std::cout << "\n\n";
		std::cout << "\n New PC Health : " << pcHealth;
		std::cout << "\n New NPC Health : " << npcHealth;

		if (pcHealth <= 0 || npcHealth <= 0)
		{
			gameOver = true;
		}

		std::cout << "\n\n=============================================\n\n";
		if (pcHealth <= 0)
		{
			std::cout << "\n You Lost";
		}
		else
		{
			std::cout << "\n You Won";
		}
	}
}
