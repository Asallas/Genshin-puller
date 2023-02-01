#include <iostream>
#include <string>
#include "rules.h"
#include "gachaTime.h"
using namespace std;

int main() {

	int array[3];
	int totalPulls = 0;
	string userID;

	array[0] = 0;
	array[1] = 0;
	array[2] = 0;
	cout << "Hey! Welcome to the pity gambling gacha system. Bad name I know but it's a work in progress.\n";
	cout << "But enough about that, what's your name: ";
	getline(cin, userID);
	rules();
	system("cls");
	totalPulls = gachaTime(array);
	system("cls");
	cout << "Alright " << userID << ". Let's see your results\n";
	cout << "You pulled " << totalPulls << " times. In total, you got: " << endl;
	cout << "1. " << array[0] << " Commons" << endl << "2. " << array[1] << " Rares" << endl
		<< "3. " << array[2] << " Legendaries\n" << endl;
	if (array[2] == 1) {
		cout << "Congrats you got " << array[2] << " Legendary. Go treat yourself to some candy.\n";
	}
	else if (array[2] > 1) {
		cout << "Congrats you got " << array[2] << " Legendaries. Treat yourself to at least " << array[2] << " things.\n";
	}
	if (array[1] == 1) {
		cout << "Damn you got " << array[1] << " Rare. Go outside a couple of minutes breath in the fresh air.\n";
	}
	else if (array[1] > 1) {
		cout << "Damn you got " << array[1] << " Rares. Go do like " << array[1] << " pushups to stay healthy.\n";
	}
	cout << "You got " << array[0] << " Commons. Sorry no prizes here. Everyone gets these\n";
	cout << "Come back again soon\n" << "===========================\n";

	return 0;
}