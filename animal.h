#include <iostream> 
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

Class Animal{
    private:
        string animalName, animalType;
        int obedience, speaking, navigation, fighting, agility, rescue;

    public:
        Animal();    
        void setAnimalType(string);
        void setAnimalName (string);
        void setObedience(int);
        void setSpeaking(int);
        void setNavigation(int);
        void setFighting(int);
        void setAgility(int);
        void setRescue(int);
        int getObedience();
        int getSpeaking();
        int getNavigation();
        int getFighting();
        int get Agility();
        int getRescue();
        string getAnimalName();
        void printStats(); //get animals current stats 
        void findChallenge();
        void writeAnimalStats();
};
