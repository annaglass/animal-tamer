#include <iostream>
#include <string>
#include <fstream>
#include "Menus.h"
using namespace std;

Menus :: Menus()
{
    //constructor
}

Void Menus :: welcome()
{
    cout << "Welcome to Animal Tamer, the game designed to take you through " <<
    "the steps of pet ownership and training, with three levels of animals, " << 
    "challenges and trials. We will start with the first tier, where you will" <<
    " pick your animal to navigate these challenges and trials, increasing their" <<
    " skill level until you have tamed them. Each animal will have a different " <<
    "skillset, so depending on what animal you pick you will be completing a " <<
    "different number of levels within each challenge." << endl << endl <<
    "So, lets pick your first animal. But first, what is your name?" << endl;
    
    string str;
    cin >> str;
    username = user;
    
    cout << "Great " << str << ", here is a list of animals" <<
    "and their skill levels, take your pick!" << endl;
    
    string tier1 = Menus.animalMenuTier1();
    animalType = tier1;
    
    cout << str << " is a great choice! What would you like to name them?" << endl;
    cin >> str;
    animalName = str
    
    cout << "You are set to begin the challenges!" << endl;
}

String Menus :: animalMenuTier1( ) 
{
    //3 animal options for tier 1, displays stats
    // cout and cin user choice for animal
    // returns the animal
}

String Menus :: animalMenuTier2( )
{
    //3 animal options for tier 2, displays stats
    // cout and cin user choice for animal
    // returns the animal
}

Int Menus :: challengeMenu1( )
{
    //displays levels (including what is completed and what isn’t)
    // cout and cin user choice for what level they want to play
    // returns the level user chooses
}

// these do the same as challengeMenu1
Int Menus :: challengeMenu2( )
{
    
}

Int Menus :: challengeMenu3( )
{
    
}

Int Menus :: challengeMenu4( )
{
    
}

Int Menus :: challengeMenu5( )
{
    
}

Int Menus :: challengeMenu6( )
{
    
}

Int Menus :: endOfTierMenu( )
{
    //When user finishes with an animal, displays menu to quit, keep playing
    //levels for the first animal, or move on to the next animal
    // returns user choice
}