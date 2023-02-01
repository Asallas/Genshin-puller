#include <iostream>
#include <string>
#include "rules.h"
using namespace std;

void rules() {
	string temp;
	cout << "Well hello! I hope your day is going well." << endl;
	cout << "Mainly because it's about to get a lot worse.\n" << endl;
	cout << "This is a gambling game disguised as a gacha system.\n";
	cout << "There are three things you can get from this : \n" << "1. A common\n" << "2. A rare\n"
		<< "3. A legendary\n" << endl;
	cout << "Naturally commons happen all the time, rares sometimes happen, and legendaries are very rare\n";
	cout << "But fear not comrade. There is a pity system to help you.\n";
	cout << "Every time you pull a common you gain a point of pity towards a rare and legendary.\n";
	cout << "Every ten pulls ensures a rare and every 90 pulls ensures a legendary.\n";
	cout << "Legendaries have a base chance 0f 0.6%. Rares have a base chance of 5%\n";
	cout << "However, word of warning, the pity resets should you pull a rare or legendary\n";
	cout << "Good luck!\n\nYou're going to need it." << endl;
	cout << "Press enter to continue.";
	getline(cin, temp);
	
	return;
}