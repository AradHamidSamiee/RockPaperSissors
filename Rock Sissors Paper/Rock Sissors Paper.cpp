// Rock Sissors Paper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
/*this include is about random operations . */

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int r, mod, p, s1 = 0, s2 = 0, x;
	/* "r"   is rounds to play . */
	/* "mod" is remaining number of rand() . */
	/* "p"   is players choise . */
	/* "s1"  is players  score . */
	/* "s2"  is machines score . */
	const char* a = "Sissors";
	const char* b = "Rock";
	const char* c = "Paper";
	cout << "		---WELCOME TO THE CLASSIC ROCK, PAPER & SISSIORS---\n" << endl;
	again: cout << "how many rounds do you wish to play?" << endl;
	cin >> r;
	cout << "times to play : " << r << endl;
	cout << " 1 = Rock" << endl << " 2 = Paper" << endl << " 3 = Sissors" << endl;
	cout << "game is about to begin ";
	for (int i = 0; i < 75 * r; i++)
		cout << ".";
	/* "i"   is just a counter (probably for nothing) . */
	srand(r);
	for (int R = 1; R <= r; R++)
	{
		/* "R" is a counter for Rounds . */
		cout << "\nit's your turn : ";

		cin >> p;
		if (p == 1)
			cout << "\n player  : " << b;
		else if (p == 2)
			cout << "\n player  : " << c;
		else if (p == 3)
			cout << "\n player  : " << a;

		mod = rand() % 3;

		if (mod == 0)
			cout << "\n machine : " << b << endl;
		else if (mod == 1)
			cout << "\n machine : " << c << endl;
		else if (mod == 2)
			cout << "\n machine : " << a << endl;

		if (p == mod + 1)
			cout << "player  = " << s1 << endl << "machine = " << s2;

		/* table of  donating scores */

		if (p == 1 && mod + 1 == 2)
		{
			s2 = s2++;
			cout << "player  = " << s1 << endl << "machine = " << s2;
		}
		else if (p == 1 && mod + 1 == 3)
		{
			s1 = s1++;
			cout << "player  = " << s1 << endl << "machine = " << s2;
		}
		else if (p == 2 && mod + 1 == 1)
		{
			s1 = s1++;
			cout << "player  = " << s1 << endl << "machine = " << s2;
		}
		else if (p == 2 && mod + 1 == 3)
		{
			s2 = s2++;
			cout << "player  = " << s1 << endl << "machine = " << s2;
		}
		else if (p == 3 && mod + 1 == 1)
		{
			s2 = s2++;
			cout << "player  = " << s1 << endl << "machine = " << s2;
		}
		else if (p == 3 && mod + 1 == 2)
		{
			s1 = s1++;
			cout << "player  = " << s1 << endl << "machine = " << s2;
		}

	}

	cout << "\n\n\n SCORES : \n PLAYER  : " << s1 << endl << " MACHINE : " << s2 << endl;
	
	if (s1 > s2)
		 cout << "		AND THE WINNER IS : THE PLAYER\n" << endl;
	else if (s1 < s2)
		 cout << "		AND THE WINNER IS : THE MACHINE\n" << endl;
	else cout << "		WE HAVE NO WINNERS\n" << endl;

	cout << "do you wish to continue the game?" << endl;
	cout << "1=YES\n2=NO\n";
	cin >> x;
	/* in this case, "x" is just a value for YES or NO . */
	if (x = 2)
	{
		cout << "tnx for playing with me.\n\n\n";
		cout << "		---WE HOPE YOU ENJOYED---" << endl << "\n\npress ENTER to exit";
	}
	else if (x = 1)
		goto again;


	cin.get();
	cin.get();


	return 0;
}


