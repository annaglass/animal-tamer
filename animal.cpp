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


Void Animal :: setAnimal(string);
{
    // takes string and sets the animal type to this
}

Void Animal :: setAnimalName (string);
{
    // takes a string from user for what name they want to give their animal
}

Void Animal :: increaseSkillLevel(bool); 
{
    // 1. Takes bool as to whether they completed the level or not
    // 2. Increases skill level corresponding the the challenge
}

String Animal :: getAnimalName();
{
    //gets the set animal name
}


Void Animal :: getStats(); 
{
    // gets the current stats for the animal
    // will be used at the end of completing a level/challenge
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
