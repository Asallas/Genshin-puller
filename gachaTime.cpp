#include <iostream>
#include "gachaTime.h"
#include <chrono>
#include <random>
#include <thread>
using namespace std;

int gachaTime(int array[]) {
	int userRolls, legPity, purpPity, totalPulls;
	int random;
	char choice, choice2;
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	minstd_rand0 generator(seed);
	cout << "Well you're here now. ";
	purpPity = 0;
	legPity = 0;
	totalPulls = 0;
	int crazy = 0;

	do {
		cout << "\n=============================================\n";
		cout << "So how many times do you want to pull: ";
		cin >> userRolls;
		while (userRolls < 0) {
			cout << "Bitch enter a positive number. How the fuck you gonna pull " << userRolls << " times."
				<< "Try again." << endl;
			cout << "Enter number of pulls: ";
			cin >> userRolls;
		}
		cout << "So you want to pull " << userRolls << " times.\n";
		cout << "Alright here we go!!!" << "\n=============================================\n\n";
		chrono::seconds dura(1);
		this_thread::sleep_for(dura);
		system("cls");
		this_thread::sleep_for(dura);
		cout << "Here are the results\n";
		cout << "===========\n";
		for (int i = 0; i < userRolls; i++) {
			random = generator();
			if (purpPity > 9 || legPity > 89) {
				crazy = 1;
			}
			if (purpPity == 9 && legPity == 89) {
				legPity = 0;
				cout << "Legendary!!!!" << endl;
				array[2] += 1;
			}
			else if (purpPity == 9) {
				purpPity = 0;
				legPity += 1;
				cout << "Rare!" << endl;
				array[1] += 1;
			}
			else if (legPity == 89) {
				legPity = 0;
				purpPity += 1;
				cout << "Legendary!!!" << endl;
				array[2] += 1;
			}
			else if (legPity > 72) {
				switch (legPity) {
				case 73:
					if (random >= 107374184 && random <= 120259056) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 74:
					if (random >= 107374184 && random <= 227663269) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 75:
					if (random >= 107374184 && random <= 335007452) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 76:
					if (random >= 107374184 && random <= 442381635) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 77:
					if (random >= 107374184 && random <= 548755819) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 78:
					if (random >= 107374184 && random <= 657130003) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 79:
					if (random >= 107374184 && random <= 764504186) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 80:
					if (random >= 107374184 && random <= 871878370) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 81:
					if (random >= 107374184 && random <= 979252553) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 82:
					if (random >= 107374184 && random <= 1086626736) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 83:
					if (random >= 107374184 && random <= 1194000919) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 84:
					if (random >= 107374184 && random <= 1301375102) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 85:
					if (random >= 107374184 && random <= 1408749285) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 86:
					if (random >= 107374184 && random <= 1516123468) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 87:
					if (random >= 107374184 && random <= 1623497651) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				case 88:
					if (random >= 107274184 && random <= 1730871834) {
						cout << "Legendary!!!" << endl;
						legPity = 0;
						purpPity += 1;
						array[2] += 1;
					}
					else {
						legPity += 1;
						purpPity += 1;
					}
					break;
				default:
					cout << "Legendary!!!" << endl;
					legPity = 0;
					purpPity += 1;
					array[2] += 1;
					break;
				}
				if (legPity != 0) {
					if (purpPity == 9) {
						cout << "Rare!" << endl;
						purpPity = 0;
						array[1] += 1;
					}
					else if (random >= 1 && random <= 107374183) {
						purpPity = 0;
						cout << "Rare!" << endl;
						array[1] += 1;
					}
					else {
						cout << "Common" << endl;
						array[0] += 1;
					}
				}
			}
			else if (random >= 1 && random <= 107374183) {
				purpPity = 0;
				legPity += 1;
				cout << "Rare!" << endl;
				array[1] += 1;
			}
			else if (random >= 107374184 && random <= 120259056) {
				purpPity += 1;
				legPity = 0;
				cout << "Legendary!!!" << endl;
				array[2] += 1;
			}
			else {
				purpPity += 1;
				legPity += 1;
				cout << "Common" << endl;
				array[0] += 1;
			}
			totalPulls += 1;
			if (totalPulls % 10 == 0) {
				chrono::milliseconds pop(500);
				this_thread::sleep_for(pop);
				cout << "===========\n";
			}
			
			chrono::milliseconds yay(650);
			this_thread::sleep_for(yay);
		}
		this_thread::sleep_for(dura);
		cout << "Would you like to check pity? Y/N ";
		cin >> choice2;
		if (choice2 == 'Y' || choice2 == 'y') {
			cout << "Rare pity: " << purpPity << endl;
			cout << "Legendary pity: " << legPity << endl;
		}
		if (crazy == 1) {
			cout << "I guess it does happen from time to time";
		}
		cout << "You have pulled " << totalPulls << " times. Would you like to keep going? " << endl;
		cout << "Enter Y/N: ";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	return totalPulls;
}