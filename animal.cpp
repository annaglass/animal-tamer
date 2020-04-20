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

Void Animal :: setObedience(int level);
{
    obedience = level;
}

Void Animal :: setSpeaking(int level);
{
    speaking = level;
}

Void Animal :: setNavigation(int level);
{
    navigation = level;
}

Void Animal :: setAgility(int level);
{
    agility = level;
}

Void Animal :: setRescue(int level);
{
    rescue = level;
}

Void Animal :: getObedience(int level);
{
    return obedience;
}

Void Animal :: getSpeaking(int level);
{
    return speaking;
}

Void Animal :: getNavigation(int level);
{
    return navigation;
}

Void Animal :: getfighting(int level);
{
    return fighting;
}

Void Animal :: getAgility(int level);
{
    return agility;
}

Void Animal :: getRescue(int level);
{
    return rescue;
}

String Animal :: getAnimalName();
{
    return animalName;
}


Void Animal :: printStats(int i); 
{
    // gets the current stats for the animal
    cout << "Obedience: " << animals[i].getObedience() << endl;
    cout << "Speaking: " << animals[i].getSpeaking() << endl;
    cout << "Navigation: " << animals[i].getNavigation() << endl;
    cout << "Fighting: " << animals[i].getFighting() << endl;
    cout << "Agility: " << animals[i].getAgility() << endl;
    cout << "Rescuse: " << animals[i].getRescue() << endl;
}

Void Animal :: findChallenge(int i)
{
	if (animals[i].getObedience() < 5)
	{
		cout << "Challenge 1: Obedience (Incomplete)" << endl;
	}
	if (animals[i].getSpeaking() < 5)
	{
		cout << "Challenge 2: Speaking (Incomplete)" << endl;
	}
	if (animals[i].getNavigation() < 5)
	{
		cout << "Challenge 3: Navigation (Incomplete)" << endl;
	}
	if (animals[i].getFighting() < 5)
	{
		cout << "Challenge 4: Fighting (Incomplete)" << endl;
	}
	if (animals[i].getAgility() < 5)
	{
		cout << "Challenge 5: Agility (Incomplete)" << endl;
	}
	if (animals[i].getRescue() < 5)
	{
		cout << "Challenge 5: Agility (Incomplete)" << endl;
	}
}

Void Animal :: writeAnimalStats();
{
    // when a user moves on to the next tier or chooses to quit, it writes
    // their stats to a file (essentially saving their data)  
	ofstream project3("animalstats.txt);
	project3.open("animalstats.txt);
	
	project3 << getAnimalName() << getObedience() << "," << getSpeaking() "," << getNavigation()
	<< "," << getFighting() << "," << getAgility() << "," << getRescue();
		     	  
	project3.close();
	cout << "Your progress has been saved!" << endl;
	cout << "Thanks for playing Animal Tamer, we'll see you soon!" << endl;		  			  
}
