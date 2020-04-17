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

Void playChallenge1()
{
	
	// 1. call menu for the levels
	// 2. use return value for a switch statement
	// 3. Switch for the different levels within the challenge
	// 4. each switch case will play through the levels
	// calls increaseSkillLevel from animal.h
}
	
// all of these functions will do the same thing as playChallenge1, 
// with different levels (though has the same number of levels)
Void playChallenge2( )
{
	
}

Void playChallenge3( )
{
	
}

Void playChallenge4( )
{
	
}

Void playChallenge5( )
{
	
}

Void playChallenge6( )
{
	
}
