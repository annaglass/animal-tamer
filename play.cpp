#include <iostream>
#include <string>
#include "Play.h"
#include "split.cpp"
using namespace std;

Play :: Play()
{
	//constructor
}

void Play :: readAnimals(string filename);
{
	ifstream project3;
	project3.open(filename);
	string str[7];
	string line;
	int count = 0;
	
	while (getline(project3, line))
    {
    	split(line, ",", str, 7);
    	animals[count].setAnimalType(str[0]);
    	animals[count].setObedience(stoi(str[1]));
    	animals[count].setSpeaking(stoi(str[2]));
    	animals[count].setNavigation(stoi(str[3]));
    	animals[count].setFighting(stoi(str[4]));
    	animals[count].setAgility(stoi(str[5]));
    	animals[count].setRescue(stoi(str[6]));
    	count++;
    }
}

Void playChallenges()
{
	// 1. call menu for the levels
	int challenge = animal.findChallenge();
	// 2. use return value for a switch statement
	switch (challenge)
	{
		
		case 1: //obedience
			while(score < 5){
				cout << "Time to work on your pet's obedience." << endl;
				cout << "You're walking with your pet when they leave your side to go chase a frog" << endl;
				cout << "You can't find them anywhere, what do you do?" << endl;
				cout << "Options:  1. Call their name, 2. Whistle for them, 3. Cry" << endl;
				cout << "" << endl;
				
			}
		
				
				
				
				
		
		case 2: //speaking 
		{
			int score = animal.getSpeaking();
			while (score < 5) {
				cout << "Let's work on your pet's speaking!" << endl;
				cout << "Your friend comes to the door and knocks, and you want to know who it is." << endl;
				cout << "What do you ask your pet to say?" << endl;
				cout << "---- Options ----" << endl << "1. Who's there?" << endl 
				<< "2. Ayo what's up who are you?" << endl << "3. Nothing, I'll get the door" << endl;
				int choice;
				cin >> choice;
				//make sure to check if they have 5
				if (choice == 1)
				{
					cout << "You ask your pet to say 'who's there?'" << endl 
					<< "Your pet runs away." << endl;
					cout << "Now what?" << endl;
					cout << "---- Options ----" << endl << "1. Console them and ask them again" << endl 
					<< "2. Ignore them and go to the door to see your friend" << endl;
					cin >> choice
					if (choice == 1)
					{
						cout << "You comfort your pet and ask them to greet the visitor again." << endl;
						cout << "They open the door and welcome in your friend with your help." << endl;
						animal.setSpeaking(animal.getSpeaking()+1);
					}
					else
					{
						cout << "After greeting your friend, you go to look for your pet. " <<
						endl << "You find them in the attic, they don't want to speak to you." << endl
						if (animal.getSpeaking() >= 1)
						{
							animal.setSpeaking(animal.getSpeaking()-1);
						}
						cout << "Your friend and you offer the pet a toy, they take it and nods " <<
						" their head to the door. You leave him alone." << endl;
					}
				}
				else if (choice == 2)
				{
					cout << "You ask your pet to say 'ayo what's up who are you?'" << endl;
					cout << "Your pet doesn't know what that means." << endl;
					cout << "You explain what slang is and they happily walk over to the front door" <<
					" to greet the guest. << endl;
					cout << "Your friend laughs and pets " << animal.getAnimalName() << "." << endl;
					animal.setSpeaking(animal.getSpeaking()+2);
				}
				else
				{
					cout << "You choose to get the door yourself. Your pet never meets your friend" <<
					"and now doesn't care to, they refuse to speak to them." << endl;
					if (animal.getSpeaking() >= 1)
					{
						animal.setSpeaking(animal.getSpeaking()-1);
					}
				}
				cout << "You send your pet to the store to get some ice cream, but they get lost and " << endl
				"need to ask someone for directions. What do they do?" << endl;
				cout << "---- Options ----" << endl << "1. Ask the nice man sitting on the park bench" << endl 
				<< "2. Try to find it on their own" << endl << "3. Go home" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Your pet asks the man, who is at first is terrified that an animal can speak."
					<< endl << "He asks why your pet needs to go to the store. How do they respond?" << endl;
					cout << "---- Options ----" << endl << "1. I wanted some ice cream" << endl 
					<< "2. None of your business " << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "The nice man takes your pet to the store and buys the ice cream " <<
						"for them." << endl;
						animal.setSpeaking(animal.getSpeaking()+2);
					}
					else
					{
						cout << "The man tells your pet to go away. Your pet runs home sulking, " 
						<< "and vows to never go to the store again." << endl;
						if (animal.getSpeaking() >= 1)
						{
							animal.setSpeaking(animal.getSpeaking()-1);
						}
					}
				}
				else if (choice == 2)
				{
					cout << "Your pet gets lost in the nearby woods, and sees a family walking by." <<
					" what do they do?" << endl;
					cout << "---- Options ----" << endl << "1. Ask for help" << endl 
					<< "2. Take a nap by a tree" << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "Your pet asks for help, and the family includes them on their "
						<< "walk and they talk until they get to the store." << endl;
						animal.setSpeaking(animal.getSpeaking()+2);
					}
					else
					{
						cout << "You send out a helicoptor search party for your pet, but your " << 
						"pet is so scared they refuse to answer any questions on the way home."<< endl;
						if (animal.getSpeaking() >= 1)
						{
							animal.setSpeaking(animal.getSpeaking()-1);
						}
					}
				}
				else
				{
					cout << "Your pet comes home feeling defeated and discouraged, you tell them " <<
					"it'll be okay and they can try next week." << endl;
					if (animal.getSpeaking() >= 1)
					{
						animal.setSpeaking(animal.getSpeaking()-1);
					}
				}
				cout << "Your pet has their friend Maggie over, and they need some advice. Your pet is" <<
				endl << "new to this but wants to help as much as they can. Maggie is sad that her" << endl
				<< " owner is gone at work all day, and wants to know what she can do to spend more " << endl
				<< "time with her owner. What does your pet tell her?" << endl;
				cout << "---- Options ----" << endl << "1. Your owner should stop working so they can" <<
				" be at home with you all day!" << endl << "2. Why don't you ask if your owner wants to " <<
				"eat breakfast with you every morning before they go to work?" << endl "3. You could come" <<
				" here instead and hangout with me!" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Maggie says her owner needs to work or they won't have any money to buy" <<
					" her treats." << endl << "She get's sad at the thought of not having treats." << endl;
				}
				else if (choice == 2)
				{
					cout << "Maggie says she loves breakfast and decides she will make breakfast" <<
					" for her whole family the next morning, and you start looking up recipes together."
					<< endl " What do you suggest?" << endl;
					cout << "---- Options ----" << endl << "1. Crepes with nutella and bananas" << endl
					<< "2. Chick-fil-a fries and the special sauce" << endl << "3. Cocoa Puffs" << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "Maggie says that sounds amazing and she would love to make a " <<
						"buffet with a plethora of toppings!" << endl;
						animal.setSpeaking(animal.getSpeaking()+1);
					}
					else if (choice == 2)
					{
						cout << "Maggie says 'YOU KNOW ME SO WELL OMG' and they order chick-fil-a" <<
						" straight away, she couldn't wait to eat it." << endl;
						animal.setSpeaking(animal.getSpeaking()+2);
					}
					else
					{
						cout << "Maggie says 'my family banned cocoa puffs, it's a touchy subject.'"
						<< endl;
						animal.setSpeaking(animal.getSpeaking()-1);
					}
				}
				else
				{
					cout << "Maggie says she'd love to and they spend all day together." << endl <<
					"Her owner calls and says Maggie missed father-daughter day at work. You break" <<
					" the news and Maggie cries." << endl << " Your pet tries to comfort her but " <<
					"she ends up going home." << endl;
					animal.setSpeaking(animal.getSpeaking()-2);
				}
			}
		}
			
		case 3: //navigation - glass
			
		case 4: //fighting - hendricks
			
		case 5: //agility - glass
			
		case 6: //rescue - hendricks
		
			
			
	// 3. Switch for the different levels within the challenge
	// 4. each switch case will play through the levels
	// calls increaseSkillLevel from animal.h
}
	

