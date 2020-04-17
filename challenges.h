#include <iostream> 
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

Class Challenges{
    Private:
        Static const int COLUMNS;
        bool challenges[5][COLUMNS];
    Public:
        void setCompletedLevel(int, int); //set completed challenge at level
        void getCompletedLevels( );
        bool checkLevels(); //checks if all levels for a challenge are finished (so it won’t be offered in a menu anymore
        bool finishedChallenges(); //checks if all the challenges are finished (so we only give the user the option to quit or move on to the next tier)
};