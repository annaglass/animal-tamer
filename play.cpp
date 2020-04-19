#include <iostream>
#include <string>
#include "Play.h"
#include "split.cpp"
using namespace std;

Play :: Play()
{
	//constructor
}

void Play :: readAnimals(string filename);
{
	ifstream project3;
	project3.open(filename);
	string str[7];
	string line;
	int count = 0;
	
	while (getline(project3, line))
    {
    	split(line, ",", str, 7);
    	animals[count].setAnimalType(str[0]);
    	animals[count].setObedience(stoi(str[1]));
    	animals[count].setSpeaking(stoi(str[2]));
    	animals[count].setNavigation(stoi(str[3]));
    	animals[count].setFighting(stoi(str[4]));
    	animals[count].setAgility(stoi(str[5]));
    	animals[count].setRescue(stoi(str[6]));
    	count++;
    }
}

Void playChallenges()
{
	// 1. call menu for the levels
	int challenge = animal.findChallenge();
	// 2. use return value for a switch statement
	switch (challenge)
	{
		
		case 1: //obedience
			while(score < 5){
				cout << "Time to work on your pet's obedience." << endl;
				cout << "You're walking with your pet when they leave your side to go chase a frog" << endl;
				cout << "You can't find them anywhere, what do you do?" << endl;
				cout << "Options:  1. Call their name, 2. Whistle for them, 3. Cry" << endl;
				cout << "" << endl;
				
			}
		
				
				
				
				
		
		case 2: //speaking 
		{
			int score = animal.getSpeaking();
			while (score < 5) {
				cout << "Let's work on your pet's speaking!" << endl;
				cout << "Your friend comes to the door and knocks, and you want to know who it is." << endl;
				cout << "What do you ask your pet to say?" << endl;
				cout << "---- Options ----" << endl << "1. Who's there?" << endl 
				<< "2. Ayo what's up who are you?" << endl << "3. Nothing, I'll get the door" << endl;
				int choice;
				cin >> choice;
				if (choice == 1)
				{
					cout << "
				}
		}
			
		case 3:
			
		case 4:
			
		case 5:
			
		case 6:
		
			
			
	// 3. Switch for the different levels within the challenge
	// 4. each switch case will play through the levels
	// calls increaseSkillLevel from animal.h
}
	

