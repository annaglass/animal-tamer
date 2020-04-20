#include <iostream>
#include <string>
#include <fstream>
#include "Menus.h"
using namespace std;

Menus :: Menus()
{
    userInput = 0;
}

Void Menus :: welcome()
{
    cout << "Welcome to Animal Tamer, the game designed to take you through " << endl << 
    "the steps of pet ownership and training, with three levels of animals, " << endl <<
    "challenges and trials. We will start with the first tier, where you will" << endl << 
    " pick your animal to navigate these challenges and trials, increasing their" << endl <<
    " skill level until you have tamed them. Each animal will have a different " << endl << 
    "skillset, so depending on what animal you pick you will be completing a " << endl <<
    "different number of levels within each challenge." << endl << endl <<
    "So, lets pick your first animal. << endl;
    
    
    cout << "Here is a list of animals and their skill levels, take your pick!" << endl;
    
    string animalChoice = animalMenu();
    animal.setAnimalType(animalChoice);
    
    cout << animalChoice << " is a great choice! What would you like to name them?" << endl;
    string str;
    cin >> str;
    animal.setanimalName(str);
    
    cout << "You are set to begin the challenges!" << endl;
}

String Menus :: animalMenu() 
{
    for (int i = 0; i <= 6; i++)
    {
        cout << animals[i].getAnimalType() << endl;
        cout << animal.printStats() << endl;
    }
    //3 animal options for tier 1, displays stats

    string str;
    cin >> str;
    // cout and cin user choice for animal
    return str;
    // returns the animal
}

Int Menus :: endOfTierMenu()
{
    cout << "Congratulations! You have tamed the " << animal.getAnimalType() 
    << "and " << animal.getAnimalName() << " is now your very own. What would you like to do next?" << endl;
    /* When user finishes with an animal, displays menu to quit, keep playing
    levels for the first animal, or move on to the next animal. */
    cout << "---- Menu ----" << endl;
    cout << "1. Keep working with my current animal" << endl;
    cout << "2. Move on to the next tier of animals" << endl;
    cout << "3. Save and quit playing" << endl;
    cin >> userInput;
    // returns user choice
    return userInput;
}

Int Menus :: endOfChallenge()
{
    animal.printStats();
    cout << "==== MENU ====" << endl << "1. Do challenges" << endl << "2. Save and quit" << endl;
    cin >> userInput;
    if (userInput == 1)
    {
        animal.findChallenge();
        cout << "Which challenge would you like to do? Make sure you pick one you haven't done yet!" << endl;
        int challengeChoice;
        cin >> challengeChoice;
        return challengeChoice;
    }
    else
    {
        return 0;
    }
}






