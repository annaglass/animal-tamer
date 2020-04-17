#include "animal.cpp"
#include <iostream> 
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

Class Play{
	Private:
		Int userChoice;
		Animals animals[7];
	Public:
		void readAnimals(string);
		void playChallenge1(int);
			// call menu for the levels
			// cout << enter a level << endl;
			// cin >> level
			// user that cin value for the switch statement
			// change challenges matrix based on if they finished the level or not
		void playChallenge2( );
		void playChallenge3( );
		void playChallenge4( );
		void playChallenge5( );
		void playChallenge6( );
};