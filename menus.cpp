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
    "the steps of pet ownership and training, with three levels of animals, " << endl <<
    "challenges and trials. We will start with the first tier, where you will" <<
    " pick your animal to navigate these challenges and trials, increasing their" << endl <<
    " skill level until you have tamed them. Each animal will have a different " <<
    "skillset, so depending on what animal you pick you will be completing a " << endl <<
    "different number of levels within each challenge." << endl << endl <<
    "So, lets pick your first animal. << endl;
    
    
    cout << "Here is a list of animals and their skill levels, take your pick!" << endl;
    
    string tier1 = Menus.animalMenuTier1();
    animal.setAnimalType(tier1);
    
    cout << tier1 << " is a great choice! What would you like to name them?" << endl;
    string str;
    cin >> str;
    animal.setanimalName(str);
    
    cout << "You are set to begin the challenges!" << endl;
}

String Menus :: animalMenuTier1( ) 
{
    for (int i = 0; i <= 3; i++)
    {
        cout << animals[i].getAnimalType() << endl;
        cout << animal.printStats(i) << endl;
    }
    //3 animal options for tier 1, displays stats
    string str;
    cin >> str;
    // cout and cin user choice for animal
    return str;
    // returns the animal
}

String Menus :: animalMenuTier2( )
{
    
    for (int i = 4; i <= 7; i++)
    {
        cout << animals[i].getAnimalType() << endl;
        cout << animal.printStats(i) << endl;
    }
    //3 animal options for tier 2, displays stats
    string str;
    cin >> str;
    // cout and cin user choice for animal
    return str;
    // returns the animal
}

Int Menus :: challengeMenu1( )
{
    //displays levels (including what is completed and what isn’t)
    cout << "Welcome to the obedience challenge! Enter which level you would like to do." << endl;
    cout << "Level 1" << endl; //also print out completed or not
    cout << "Level 2" << endl;
    cout << "Level 3" << endl;
    cout << "Level 3" << endl;
    cout << "Level 4" << endl;
    cout << "Level 5" << endl;
    // cout and cin user choice for what level they want to play
    int userChoice;
    cin >> userChoice;
    //if user picks a level they've already done, ask them if they're sure they want to do it
    //if user picks a level and they haven't completed the level before it, say they can't do it
    //edge cases, loop back either of them are true
  
    return userChoice;
    // returns the level user chooses
}

// these do the same as challengeMenu1
Int Menus :: challengeMenu2( )
{
    //displays levels (including what is completed and what isn’t)
    cout << "Welcome to the speaking challenge! Enter which level you would like to do." << endl;
    cout << "Level 1" << endl; //also print out completed or not
    cout << "Level 2" << endl;
    cout << "Level 3" << endl;
    cout << "Level 3" << endl;
    cout << "Level 4" << endl;
    cout << "Level 5" << endl;
    // cout and cin user choice for what level they want to play
    int userChoice;
    cin >> userChoice;
    //if user picks a level they've already done, ask them if they're sure they want to do it
    //if user picks a level and they haven't completed the level before it, say they can't do it
    //edge cases, loop back either of them are true
  
    return userChoice;
    // returns the level user chooses
}

Int Menus :: challengeMenu3( )
{
    //displays levels (including what is completed and what isn’t)
    cout << "Welcome to the navigation challenge! Enter which level you would like to do." << endl;
    cout << "Level 1" << endl; //also print out completed or not
    cout << "Level 2" << endl;
    cout << "Level 3" << endl;
    cout << "Level 3" << endl;
    cout << "Level 4" << endl;
    cout << "Level 5" << endl;
    // cout and cin user choice for what level they want to play
    int userChoice;
    cin >> userChoice;
    //if user picks a level they've already done, ask them if they're sure they want to do it
    //if user picks a level and they haven't completed the level before it, say they can't do it
    //edge cases, loop back either of them are true
  
    return userChoice;
    // returns the level user chooses
}

Int Menus :: challengeMenu4( )
{
    //displays levels (including what is completed and what isn’t)
    cout << "Welcome to the fighting challenge! Enter which level you would like to do." << endl;
    cout << "Level 1" << endl; //also print out completed or not
    cout << "Level 2" << endl;
    cout << "Level 3" << endl;
    cout << "Level 3" << endl;
    cout << "Level 4" << endl;
    cout << "Level 5" << endl;
    // cout and cin user choice for what level they want to play
    int userChoice;
    cin >> userChoice;
    //if user picks a level they've already done, ask them if they're sure they want to do it
    //if user picks a level and they haven't completed the level before it, say they can't do it
    //edge cases, loop back either of them are true
  
    return userChoice;
    // returns the level user chooses
}

Int Menus :: challengeMenu5( )
{
    //displays levels (including what is completed and what isn’t)
    cout << "Welcome to the agility challenge! Enter which level you would like to do." << endl;
    cout << "Level 1" << endl; //also print out completed or not
    cout << "Level 2" << endl;
    cout << "Level 3" << endl;
    cout << "Level 3" << endl;
    cout << "Level 4" << endl;
    cout << "Level 5" << endl;
    // cout and cin user choice for what level they want to play
    int userChoice;
    cin >> userChoice;
    //if user picks a level they've already done, ask them if they're sure they want to do it
    //if user picks a level and they haven't completed the level before it, say they can't do it
    //edge cases, loop back either of them are true
  
    return userChoice;
    // returns the level user chooses
}

Int Menus :: challengeMenu6( )
{
    //displays levels (including what is completed and what isn’t)
    cout << "Welcome to the rescue challenge! Enter which level you would like to do." << endl;
    cout << "Level 1" << endl; //also print out completed or not
    cout << "Level 2" << endl;
    cout << "Level 3" << endl;
    cout << "Level 3" << endl;
    cout << "Level 4" << endl;
    cout << "Level 5" << endl;
    // cout and cin user choice for what level they want to play
    int userChoice;
    cin >> userChoice;
    //if user picks a level they've already done, ask them if they're sure they want to do it
    //if user picks a level and they haven't completed the level before it, say they can't do it
    //edge cases, loop back either of them are true
  
    return userChoice;
    // returns the level user chooses
}

Int Menus :: endOfTierMenu( )
{
    cout << "Congratulations! You have tamed the " << animal.getAnimalType() 
    << "and " << animal.getAnimalName() << " is now your very own. What would you like to do next?" << endl;
    /* When user finishes with an animal, displays menu to quit, keep playing
    levels for the first animal, or move on to the next animal. */
    cout << "---- Menu ----" << endl;
    cout << "1. Keep working with my current animal" << endl;
    cout << "2. Move on to the next tier of animals" << endl;
    cout << "3. Save and quit playing" << endl;
    int userChoice;
    cin >> userChoice;
    // returns user choice
    return userChoice;
}
