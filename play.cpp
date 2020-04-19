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
			cout << "Let's work on your pet's speaking!" << endl;
			while (score < 5) 
			{
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
						if (animal.getSpeaking() == 5)
						{
							break;
						}
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
					if (animal.getSpeaking() == 5)
					{
						break;
					}
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
						if (animal.getSpeaking() == 5)
						{
							break;
						}
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
						if (animal.getSpeaking() == 5)
						{
							break;
						}
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
						if (animal.getSpeaking() == 5)
						{
							break;
						}
					}
					else if (choice == 2)
					{
						cout << "Maggie says 'YOU KNOW ME SO WELL OMG' and they order chick-fil-a" <<
						" straight away, she couldn't wait to eat it." << endl;
						animal.setSpeaking(animal.getSpeaking()+2);
						if (animal.getSpeaking() == 5)
						{
							break;
						}
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
				animal.printStats();
				if (animal.getSpeaking() < 5)
				{
					cout << "It looks like your pet's speaking score is less than 5, you must" << endl
					<< "repeat the challenge until you reach 5!" << endl;
				}
			}
			break;
		}
			
		case 3: //navigation - glass
		{
			while (animal.getNavigation() < 5) 
			{
				cout << "You venture to the Swiss Alps for the winter with your pet, bringing only a" << endl <<
				" Backpack and a whole lot of excitement. Your pet brings a sack of treats and a" << endl <<
				"toothbrush, and is ready for the journey of a lifetime.” << endl;
				cout << "You decide to hitch a ride on a boat sailing from Boston as you are low on " << endl <<
				"money. On the second night at sea, the headwinds ramp up and wake everyone up from " << endl <<
				"their slumber. The captain's compass loses direction and the boat sways to the side " << endl <<
				"in the harsh waves, the captain not knowing where the boat is going. What do you do?” << endl;
				cout << "---- Options ----" << endl << "1. Ask your pet to climb to the top of the post and " <<
				"look for a sign of land or direction." << endl << "2. Take control of the boat and guess" <<  
				"where to go" << endl << "3. Leave it to the captain" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Your pet climbs to the highest point on the boat, and sees an island. " << endl <<
					" nearby. He tells the captain to steer the boat sharply to the right, and you " << endl
					<< "dock the boat safely at the beach for the night.” << endl;
					animal.setNavigation(animal.getNavigation()+1);
					if (animal.getSpeaking() == 5)
					{
						break;
					}
				}
				else if (choice == 1)
				{
					cout << "You take control of the boat but soon get lost as dark clouds come " << endl <<
					"rolling in, water floods the boat but you luckily make it to a nearby " << endl <<
					"island where you lodge the boat into the side of a cliff. You hang there " << endl <<
					"for the night, and depart the next morning with luckily minimal damage " << endl <<
					"to the boat." << endl;
					if (animal.getNavigation() >=1)
					{
						animal.setNavigation(animal.getNavigation()-1);
					}
				}
				else 
				{
					cout << "The captain safely takes the boat to a calm patch where the compass" << endl << 
					"regains direction and everyone goes back to sleep. The headwinds set you back" << endl << 
					"on your journey a day, but at least you’re all safe." << endl;
				}
				cout << "The rest of the journey is smooth sailing, and after a beautiful and calm ride" << endl <<
				"through the River Rhine, you make it to Switzerland. You look for a train to Zurich as" << endl <<
				"you heard the hot chocolate and views are amazing there, but can’t find it. What do you do?” << endl;
				cout << "---- Options ----" << endl << "1. Stay where you are and set up a tent, it’s pretty there anyway" << endl 
				<< "2. Ask your pet if they can help find the train station" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "You set up a tent and sleep under the stars, until midnight when your" << endl <<
					"pet sees the North Star shining bright. You pack everything up, and your pet" << endl <<
					"takes you both to Zurich on foot through the night. By dawn you arrive in" << endl <<
					"Zurich, and accompany breakfast with a classic swiss hot chocolate." << endl;
					animal.setNavigation(animal.getNavigation()+2);
					if (animal.getSpeaking() == 5)
					{
						break;
					}
				}
				else
				{
					cout << "You ask your pet to help find the train station, but they" << endl <<
					"get confused and ends up getting hit by a local Swiss on a bike and gets" << endl <<
					"discouraged. You spend a quarter of your budget on a hotel room for the night" << endl <<
					"but end up making a friend there that gives you a ride to Zurich in the morning." << endl;
					animal.setNavigation(animal.getNavigation()-1);
				}
				cout << "The next day, you hike up to the slopes with your skis, ready to take in" << endl <<
				"the mountain air and shred the gnar. Swiss ski resorts are a bit dangerous, so" << endl <<
				"you must learn quickly and act like a local to stay safe. Once you lift to the" << endl <<
				"top of the slopes, you have the option to go right or left. Which do you choose?" << endl;
				cout << "1. Left" << endl << "2. Right" << endl;
				cin >> choice;
				if (choice == left)
				{
					cout << “"Uh oh, you found yourself in the triple diamond glades, and neither" << endl; 
					"of you have skied a day in your life. What do you do?" << endl;
					cout << "---- Options ----" << endl << "1. Hike back up to the top" << endl << 
					"2. Send it. Life’s too short to not fly down a Switzerland ski mountain with no experience." << endl;
					cin >> choice;

					if (choice == 1)
					{
						cout << "You both get scared once you get back to the top about what" << endl
						<< "could be on the right side, so you take the ski lift down." << endl;
						if (animal.getNavigation() >=1)
						{
							animal.setNavigation(animal.getNavigation()-1);
						}
					}
					if (choice == 2)
					{
						cout << "On the count of 3 you both take a leap of faith of the first" << endl << 
						"cliff. Your pet flawlessly navigates through cliffs, jumps, and" << endl <<
						"avalanches, and you follow having the time of your life." << endl <<
						"It’s an experience you’ll never forget." << endl;
						animal.setNavigation(animal.getNavigation()+3);
						if (animal.getSpeaking() == 5)
						{
							break;
						}
					}
				}
				If (choice == right)
				{
					cout << "You chose the bunny hill. Fun, but not sendy. You had a long day of" << endl 
					<< "skiing and eating fries at the scenic restaurant at the top!" << endl;
				}
				
				cout << "Your pet drives a boat back to America, asking a fare from the 50 people" << endl
				<< "that hitched a ride to get the money back. Your pet successfully navigated" << endl << 
				"Switzerland and the financial world." << endl;
				animal.setNavigation(animal.getNavigation()+1);
				if (animal.getNavigation() == 5)
				{
					break;
				}
				animal.printStats();
				if (animal.getNavigation() < 5)
				{
					cout << "It looks like your pet's navigation score is less than 5, you must" << endl
					<< "repeat the challenge until you reach 5!" << endl;
				}
			}
			break;
		}

			
		case 4: //fighting - hendricks
			
		case 5: //agility - glass
		{
			while (animal.getAgility() < 5)
			{
				
			}
			break;
		}
				
			
		case 6: //rescue - hendricks
		
			
			
	// 3. Switch for the different levels within the challenge
	// 4. each switch case will play through the levels
	// calls increaseSkillLevel from animal.h
}
	

