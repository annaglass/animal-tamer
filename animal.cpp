#include <iostream>
#include <string>
#include <fstream>
#include "animal.h"
using namespace std;

Animal :: Animal()
{
    animalType = "";
    animalName = "";
    for (int i; i < SIZE; i++)
    {
        scores[i] = 0;
    }
    obedience = 0;
    speaking = 0;
    navigation = 0;
    fighting = 0; 
    rescue = 0;
    agility = 0;
    //constructor, set all stats & animal characteristics to 0 or ""
}


Void Animal :: setAnimal(string type);
{
    animalType = type;
}

Void Animal :: setAnimalName (string name);
{
    // takes a string from user for what name they want to give their animal
    animalName = name;
}

void Animal :: readAnimals(string filename);
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

int Animal 

Void Animal :: increaseSkillLevel(bool); 
{
    // 1. Takes bool as to whether they completed the level or not
    // 2. Increases skill level corresponding the the challenge
}

String Animal :: getAnimalName();
{
    return animalName;
}


Void Animal :: printStats(int i); 
{
    cout << a
    cout << "Obedience: " << animals[i].getObedience() << endl;
    cout << "Speaking: " << animals[i].getSpeaking() << endl;
    cout << "Navigation: " << animals[i].getNavigation() << endl;
    cout << "Fighting: " << animals[i].getFighting() << endl;
    cout << "Agility: " << animals[i].getAgility() << endl;
    cout << "Rescuse: " << animals[i].getRescue() << endl;
    // gets the current stats for the animal
}

Void Animal :: writeAnimalStats(string);
{
    // when a user moves on to the next tier or chooses to quit, it writes
    // their stats to a file (essentially saving their data)
    
}

Bool Animal :: sufficientSkillLevel(int, int);
{
    // takes the position on the matrix 
    // checks if the animals skill level is high enough to move onto the next tier
}
