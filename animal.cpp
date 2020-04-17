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
    cout << animals[i].getObedience() << endl;
    cout << animals[i].getSpeaking() << endl;
    cout << animals[i].getNavigation() << endl;
    cout << animals[i].getFighting() << endl;
    cout << animals[i].getAgility() << endl;
    cout << animals[i].getRescue() << endl;
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
