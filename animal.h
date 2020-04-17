#include <iostream> 
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

Class Animal{
    private:
        static const int SIZE = 6;
        string animalName;
        string animalType;
        int obedience, speaking, navigation, fighting, agility, rescue;

        
    public:
        void setAnimal(string);
        void setObedience(int);
        void setSpeaking(int);
        void setNavigation(int);
        void setFighting(int);
        void setAgility(int);
        void setRescue(int);
        void setAnimalName (string);
        void increaseSkillLevel(int, int, bool); //takes position in matrix and bool if they finished the challenge
        string getAnimalName();
        void getStats(); //get animals current stats 
        void getAllAnimalStats(string); // we write animal stats to a file once a user finishes with that animal, this will read that file when the user wants to see its stats
        bool sufficientSkillLevel(int, int);

};