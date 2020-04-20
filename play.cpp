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

Void Play :: playChallenges()
{
	// 1. call menu for the levels
	int obedienceOption1, obedienceOption2, obedienceOption3, obedienceOption4, obedienceOption5;
	int speakingOption1, speakingOption2, speakingOption3, speakingOption4, speakingOption5;
	int navigationOption1, navigationOption2, navigationOption3, navigationOption4, navigationOption5;
	int fightingOption1, fightingOption2, fightingOption3, fightingOption4, fightingOption5;
	int agilityOption1, agilityOption2, agilityOption3, agilityOption4, agilityOption5;
	int rescueOption1, rescueOption2, rescueOption3, rescueOption4, rescueOption5;
	
	// 2. use return value for a switch statement
	
	do
	{
		int challenge=menus.endOfChallenge();
		switch (challenge)
		{
			case 0:
				animal.writeAnimalStats;
				break;
			case 1:
			{
			int score = animal.getObedience();
			while(score<5)
			{
				cout << "Time to work on your pet's obedience." << endl << "You're walking with your pet when they leave your side to go chase a frog" << endl;
				cout << "You can't find them anywhere, what do you do?" << endl << "Pick 1,2 or 3:  1. Call their name, 2. Whistle for them, 3. Keep searching" << endl;
				cin >> obedienceOption1;
				switch(obedienceOption1)
				{
					case 1:
					    score+=1;
						cout << "Your pet doesn't come, you: 1. Call again  2. Start searching for them " << endl;
						cin >> obedienceOption2;
						switch (obedienceOption2)
						{
							case 1:
							    score+=1;
								cout << "Your pet comes! How do you greet them? 1. Pet them and put a leash on them  2. Scorn them " << endl;
								cin >> obedienceOption3;
								switch (obedienceOption3)
								{
								    case 1:
								        cout << "They feel accomplished and now know how to be obedient!" << endl;
								        score+=3;
									animal.setObedience(5);
								        break;
								        
								    case 2:
								        cout << "They now know not to run away from you any more" << endl;
								        score +=3;
									animal.setObedience(5);
								        break;
								}
								
								
							case 2:
							    cout << "You find your pet chasing the frog, you: 1. Chase them down  2. Whistle loud and tell them to come" << endl;
							    cin >> obedienceOption4;
							    switch (obedienceOption4)
								{
								    case 1:
								        cout << "You caught up to them so you: 1. Put them on a leash  2. Tell them to sit" << endl;
								        cin >> obedienceOption5;
								        switch(obedienceOption5)
								        {
								            case 1:
								                cout << "Your pet is happy to be back with you! They increase their obedience to you. They show how loyal they are to you so you can feel comfortable to take the leash off" << endl;
								                animal.setObedience(5);
										score+=4;
								                break;
								                
								            case 2:
								                cout << "Your pet sits on your command and learns to not to run away from you." << endl;
										animal.setObedience(5);
								                score+=4;
								                break;
								        }
								        
								    case 2: 
								        cout << "They hear you and obediently come to you! You pet now knows how to come at the sound of your whistle." << endl;
									animal.setObedience(5);
								        score +=3;
								        break;
								}	
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


			case 4: //fighting
			cout << "You and your pet are going on a hike in the mountains together. " << endl << "All of a sudden, a pack of rabid raccoons comes and starts angrily squeaking at you." << endl << "There's too many of them for you to defend yourself so you think you might need your pets help." << endl;
			cout << "What command do you give to your pet?" << endl << "---- Options ----" << endl << "1. Help me fight them off!" << endl << "2. Run away!" << endl << "3. Don't move!" << endl;
			cin >> fightingOption1;
			switch(fightingOption1)
			{
				case 1: // Help me fight them off
					score+=1;
					cout << "Your pet looks to you reassuringly and ready to follow your lead" << endl;
					cout << "What do you point them to do?" << endl;
					cout << "---- Options ----" << endl << "1. Go after the least vicious raccoons" << endl << "2. Go after the leader of the raccoon pack" << endl;
					cin >> fightingOption2;
					switch(fightingOption2)
					{
						case 1:
							cout << "Your pet heeds your command. They courageously attack the vicous raccoons before they could get to you. " << endl;
							cout << "Your pet does enough damage to the raccoons so the rest of them are afraid to attack and you are now safe" << endl;
							animal.setFighting(5);
							score +=5;
							break;
						case 2:
							cout << "Your pet goes after the leader of the pack" << endl;
							cout << "Your pet struggles to fight the raccoon and you get scared that your pet might loose " << endl;
							cout << "How do help your animal?" << endl;
							cout << "---- Options ----" << endl << "1. Tell them to go for the raccoon's eyes" << endl << "2. Help him fight the pack leader" << endl;
							cin >> fightingOption3;
							switch(fightingOption3)
							{
								case 1:
									cout << "Your pet follows your command and goes for the raccoon's weak spot: the eyes" << endl;
									cout << "It works and your pet successfully beats the pack leader!" << endl;
									cout << "Your pet's fighting abilities scare off the other raccoons and you leave the mountains and get to safety." << endl;
									animal.setFighting(5);
									score +=5;
									break;
								case 2:
									cout << "You back up your pet and help him defeat the pack leader" << endl;
									cout << "Your pet sees your fighting skills and learns from you how to fight" << endl;
									cout << "Your defense skills scare off the other raccoons and you leave the mountains and get to safety." << endl;
									animal.setFighting(5);
									score +=5;
									break;
							}
					}
				case 2: // Run away
					cout << "You and your pet take off but the raccoons chase after you!" << endl;
					cout << "Your pets agility has not been properly trained so they start to fall behind" << endl;
					cout << "Before you know it, the raccoons have caught up with your animal and you need to defend yourselves" << endl;
					cout << "What do you say to your pet?" << endl;
					cout << "---- Options ----" << endl << "1. Go after the least vicious raccoons" << endl << "2. Go after the leader of the raccoon pack" << endl;
					cin >> fightingOption2;
					switch(fightingOption2)
					{
						case 1:
							cout << "Your pet heeds your command. They courageously attack the vicous raccoons before they could get to you. " << endl;
							cout << "Your pet does enough damage to the raccoons so the rest of them are afraid to attack and you are now safe" << endl;
							animal.setFighting(5);
							score +=5;
							break;
						case 2:
							cout << "Your pet goes after the leader of the pack" << endl;
							cout << "Your pet struggles to fight the raccoon and you get scared that your pet might loose " << endl;
							cout << "How do help your animal?" << endl;
							cout << "---- Options ----" << endl << "1. Tell them to go for the raccoon's eyes" << endl << "2. Help him fight the pack leader" << endl;
							cin >> fightingOption3;
							switch(fightingOption3)
							{
								case 1:
									cout << "Your pet follows your command and goes for the raccoon's weak spot: the eyes" << endl;
									cout << "It works and your pet successfully beats the pack leader!" << endl;
									cout << "Your pet's fighting abilities scare off the other raccoons and you leave the mountains and get to safety." << endl;
									animal.setFighting(5);
									score +=5;
									break;
								case 2:
									cout << "You back up your pet and help him defeat the pack leader" << endl;
									cout << "Your pet sees your fighting skills and learns from you how to fight" << endl;
									cout << "Your defense skills scare off the other raccoons and you leave the mountains and get to safety." << endl;
									animal.setFighting(5);
									score +=5;
									break;
							}
					}
					
				case 3: //dont move
					cout << "You stand still with your pet. The raccoons stay where they are and continue to growl at you" << endl;
					cout << "Slowly, the leader of the pack of the raccoons comes forward and gets into attacking position" << endl;
					cout << "What you you tell your pet?" << endl;
					cout << "---- Options ----" << endl << "1. Let's fight them off!" << endl << "2. Run away!" << endl;
					cin >> fightingOption2;
					switch(fightingOption2)
					{
						case 1:
							score+=1;
							cout << "Your pet looks to you reassuringly and ready to follow your lead" << endl;
							cout << "What do you point them to do?" << endl;
							cout << "---- Options ----" << endl << "1. Go after the least vicious raccoons" << endl << "2. Go after the leader of the raccoon pack" << endl;
							cin >> fightingOption3;
							switch(fightingOption3)
							{
								case 1:
									cout << "Your pet heeds your command. They courageously attack the raccoons before they could get to you. " << endl;
									cout << "Your pet does enough damage to the raccoons so the rest of them are afraid to attack and you are now safe" << endl;
									animal.setFighting(5);
									score +=5;
									break;
								case 2:
									cout << "Your pet goes after the leader of the pack" << endl;
									cout << "Your pet struggles to fight the raccoon and you get scared that your pet might loose " << endl;
									cout << "How do help your animal?" << endl;
									cout << "---- Options ----" << endl << "1. Tell them to go for the raccoon's eyes" << endl << "2. Help him fight the pack leader" << endl;
									cin >> fightingOption4;
									switch(fightingOption4)
									{
										case 1:
											cout << "Your pet follows your command and goes for the raccoon's weak spot, the eyes" << endl;
											cout << "It works and your pet successfully beats the pack leader!" << endl;
											cout << "Your pet's fighting abilities scare off the other raccoons and you leave the mountains and get to safety." << endl;
											animal.setFighting(5);
											score +=5;
											break;
										case 2:
											cout << "You back up your pet and help him defeat the pack leader" << endl;
											cout << "Your pet sees your fighting skills and learns from you how to fight" << endl;
											cout << "Your defense skills scare off the other raccoons and you leave the mountains and get to safety." << endl;
											animal.setFighting(5);
											score +=5;
											break;
									}
							}
						case 2:
							cout << "You and your pet take off but the raccoons chase after you!" << endl;
							cout << "Your pets agility has not been properly trained so they start to fall behind" << endl;
							cout << "Before you know it, the raccoons have caught up with your animal and you need to defend yourselves" << endl;
							cout << "What do you say to your pet?" << endl;
							cout << "---- Options ----" << endl << "1. Go after the least vicious raccoons" << endl << "2. Go after the leader of the raccoon pack" << endl;
							cin >> fightingOption2;
							switch(fightingOption2)
							{
								case 1:
									cout << "Your pet heeds your command. They courageously attack the vicous raccoons before they could get to you. " << endl;
									cout << "Your pet does enough damage to the raccoons so the rest of them are afraid to attack and you are now safe" << endl;
									animal.setFighting(5);
									score +=5;
									break;
								case 2:
									cout << "Your pet goes after the leader of the pack" << endl;
									cout << "Your pet struggles to fight the raccoon and you get scared that your pet might loose " << endl;
									cout << "How do help your animal?" << endl;
									cout << "---- Options ----" << endl << "1. Tell them to go for the raccoon's eyes" << endl << "2. Help him fight the pack leader" << endl;
									cin >> fightingOption3;
									switch(fightingOption3)
									{
										case 1:
											cout << "Your pet follows your command and goes for the raccoon's weak spot: the eyes" << endl;
											cout << "It works and your pet successfully beats the pack leader!" << endl;
											cout << "Your pet's fighting abilities scare off the other raccoons and you leave the mountains and get to safety." << endl;
											animal.setFighting(5);
											score +=5;
											break;
										case 2:
											cout << "You back up your pet and help him defeat the pack leader" << endl;
											cout << "Your pet sees your fighting skills and learns from you how to fight" << endl;
											cout << "Your defense skills scare off the other raccoons and you leave the mountains and get to safety." << endl;
											animal.setFighting(5);
											score +=5;
											break;
									}
							}
					}
			}

			case 5: //agility - glass
				cout << "You take your animal to the forest for the day, and you stumble upon a" << endl <<
				"high ropes course and an agility course. This is the perfect place to work on your animal’s" << endl <<
				"agility! “There are hundreds of other animals practicing and racing on the courses, and" << endl <<
				"your animal sees his friend and goes to play with them." << endl;

				int agilityCourse = 1;
				switch (agilityCourse):
					case 1: // slalom poles
						cout << "Welcome to the slalom poles! This will test your animal's intelligence" << endl <<
						"and speed! Your pet’s friend starts, whizzing through the poles and making it" << endl <<
						"through all 20 in 5 seconds. Your pet follows, what do they do?" << endl;
						cout << "---- Options ----" << endl << "1. Follows and does it in the same amount <<
						"of time, first try." << endl << "2. Follows and misses a couple of poles" << endl << 
						"3. Refuses to do the course" << endl;
						cin >> choice;

						if (choice == 1)
						{
							cout << "Your pet tries to go full speed through the course, and" << endl <<
							"ends up hurting himself and isn’t able to continue working on the poles." << endl;
							if (animal.getAgility() >= 1)
							{
								animal.setAgility(animal.getAgility()-1);
							}
						}
						else if (choice == 2)
						{
							Cout << "Your pet follows and exceeds your expectations by getting" << 
							"every Pole with a top 5 time." << endl;
							animal.setAgility(animal.getAgility() + 2);
						}
						else
						{
							Cout << "Your pet sits by the fence of the agility course, hurting his" <<
							"reputation and confidence in his agility." << endl;
							If (animal.getAgility() >= 2)
							{
								animal.setAgility(animal.getAgility() - 2);
							}
						}

					case 2: // hoops
						cout << "Welcome to the moving hoops. These hoops fly and spin, making it a very difficult to master" << endl;
						int score = 0;
						cout << "There are 7 hoops. For each hoop, call out which direction your animal" << endl << 
						"should Jump! Type ‘1’ for left, ‘2’ for right, and ‘3’ for straight up." << endl;
						cout << "Hoop 1: " << endl;
						cin >> choice;
						if  (choice == 1)
						{
							cout << "Hit!" << endl;
							score++;
						}
						else
						{
							cout << "Miss!" << endl;
						}
						cout << "Hoop 2: " << endl;
						cin >> choice;
						if  (choice == 3)
						{
							cout << "Hit!" << endl;
							score++;
						}
						else
						{
							cout << "Miss!" << endl;
						}
						cout << "Hoop 3: " << endl;
						cin >> choice;
						if  (choice == 2)
						{
							cout << "Hit!" << endl;
							score++;
						}
						else
						{
							cout << "Miss!" << endl;
						}
						cout << "Hoop 4: " << endl;
						cin >> choice;
						if  (choice == 2)
						{
							cout << "Hit!" << endl;
							score++;
						}
						else
						{
							cout << "Miss!" << endl;
						}
						cout << "Hoop 5: " << endl;
						cin >> choice;
						if  (choice == 1)
						{
							cout << "Hit!" << endl;
							score++;
						}
						else
						{
							cout << "Miss!" << endl;
						}
						cout << "Hoop 6: " << endl;
						cin >> choice;
						if  (choice == 3)
						{
							cout << "Hit!" << endl;
							score++;
						}
						else
						{
							cout << "Miss!" << endl;
						}
						cout << "Hoop 7: " << endl;
						cin >> choice;
						if  (choice == 3)
						{
							cout << "Hit!" << endl;
							score++;
						}
						else
						{
							cout << "Miss!" << endl;
						}

						cout << "Score: " << score << endl;
						if (score >= 5 && <= 7)
						{
							cout << "Your animal gained 3 agility points!" << endl;
							animal.setAgility(animal.getAgility + 3);
						}
						else if (score >= 3 && score <= 4)
						{
							cout << "Your animal gained 2 agility points!" << endl;
							animal.setAgility(animal.getAgility + 2);
						}
						else if (score > 0 && score <= 2)
						{
							cout << "Your animal gained 1 agility point!" << endl;
							animal.setAgility(animal.getAgility + 1);
						}
						else
						{
							cout << "Your animal gained no agility points." << endl;
						}
						cout << "Congrats! You finished the practice round. Now onto the high 
						ropes race!" << endl;

					Case 3: //race
						double time = 0;
						cout << "Welcome to the high ropes race course! It’s your animal against two" << endl <<
						"others, try to make it to the end with the fastest time possible!" << endl;
						cout << "GET IN POSITION: READY, SET, GO!" << endl;
						cout << "Quick! Does your animal climb up the ladder or the rope?" << endl;
						cin >> choice;
						if (toLower(choice) == "ladder")
						{
							cout << "They leap up the ladder, take a sharp left, and stop at the" << endl <<
							"end of a ledge. In front of them is a zipline and a paraglider." << endl <<
							"Which one do you choose?" << endl;
							cin >> choice;
							if (toLower(choice) == "zipline")
							{
								cout << "The animal in front of them beats them to it, so they" << endl << 
								"have to reel the handles back in. They lose some time, but" << endl <<
								"flies down the zipline and dives into the lake at the bottom." << endl << 
								"Which stroke do they do to get across?" << endl;
								cout << "---- Options ----" << endl << "1. Butterfly"
								<< endl << "2. Freestyle" << endl << "3. Backstroke" << endl;
								cin >> choice;
								if (choice == 1)
								{
									cout << "Everyone knows butterfly is impossible! Your" << 
									"animal flaps frantically and struggles to stay afloat," << endl <<
									"and lose a bit of time, but makes it to the finish line." << endl;
									time = 180;
								}
								else if (choice == 2)
								{
									cout << "Good choice! Your animal is the fastest across" <<
									"the lake, and gets to the finish line in okay time." << endl;
									time = 130;
								}
								else if (choice == 3)
								{
									cout << "Animals can’t really do backstroke, but it was" <<
									"a good idea! They end up doing an awkward torpedo" << endl <<
									"motion to get to the end, kinda cool but hurt their time a bit." << endl;
									time = 160;
								}
							else if (toLower(choice == "paraglider")
							{
								cout << "You fly over the zipline and the lake, going directly" <<
								"to the end. You won the race!" << endl;
								time = 60;
							}
						}
						else if (toLower(choice == "rope")
						{
							cout << "Your animal shuffles up the rope, at the top a tire swing" << endl << 
							"to the left, and a set of monkey bars to the right. At the end" << 
							"of both is a net, which do you pick?" << endl;
							cin >> choice;
							if (toLower(choice) == "tire swing")
							{
								cout << "The tire swing is too short to reach the net, so your" << endl <<
								"animal takes a leap of faith and thankfully makes it to the" << endl <<
								"bottom of the net, barely. But they have to climb up to the" << endl <<
								"top, which adds some time. At the top is a large downhill ramp," << endl <<
								"with a mini jeep and a skateboard. Which do you pick?" << endl;
								cin >> choice;
								if (toLower(choice) == "jeep")
								{
									cout << "Your animal accelerates to the top speed, going" <<
									"over bumps and potholes flawlessly. They drive right" <<  
									"straight to the finish line." << endl;
									time = 140;
								}	
								else if (toLower(choice) == "skateboard")
								{
									cout << "Your animal flies down at top speed, but hits a" <<
									"bump and flies off the board, landing just before" << endl <<
									"the finish line. They are so hurt they have to" << 
									"crawl to the finish line." << endl;
									time = 200;
								}
							}
							else if (toLower(choice) == "monkey bars")
							{
								cout << "At the end of the monkey bars, the drop to the net is" << endl <<
								"really far, so your animal gets scared. You call out to them saying" << endl
								<< "they can do it, and eventually they jump but at the cost of" << endl <<
								"lost time. At the bottom, there’s a mountain biking course." << endl
								<< "Which bike do you pick?" << endl;
								cout << "---- Options ----" << endl << "1. The blue cruiser" << endl 
								<< "2. The Yellow Mountain Bike" << endl;
								cin >> choice;
								if (choice == 1)
								{
									cout << "Though comfortable, the tire pops and your" <<  
									"animal ends up sprinting through the course with the bike" << endl
									<< "on their back. They make it to the end, but barely." << endl;
									time = 180;
								}
								else 
								{
									cout << "The bike serves your animal well, you fly through" <<
									"the course making every turn perfectly, and make a great time." << endl;
									time = 130;
								}
							}
						}
						cout << "Your animal’s time: " << time/60.0 << endl;
						animal.setAgility(animal.getAgility()+2);	
						break;	

			case 6: //rescue 
				cout << "You are on a walk through the jungle with your pet when all of a sudden, you fall into a pit of quicksand" << endl;
				cout << "You need to get help from your pet fast or else you'll suffocate in the sand!" << endl;
				cout << "What do you tell your pet to do?" << "---- Options ----" << endl << "1. Get a tree brach to pull me out" << endl << "2. Tell them to go get help" << endl;
				cin >> rescueOption1;
				switch(rescueOption1)
				{
					case 1:
						cout << "Your pet runs and get a long stick and reaches it out to you" << endl;
						cout << "They struggle to pull you out because you're so heavy. You need to motivate them to pull you out" << endl;
						cout << "What do you say to encourage them?" << endl << "---- Options ----" << endl << "1. Plant your feet in the ground! You're so close!" << endl << "2. You suck!! Try harder!" << endl;
						cin >> rescueOption2;
						switch(rescueOption2)
						{
							case 1:
								cout << "Your pet feels encouraged and finally lifts you out of the sand pit!" << endl;
								animal.setRescue(5);
								score+=5;
								break;
							case 2:
								cout << "Oh no! Your pet doesn't feel encouraged and starts to loose his grip what do you say?" << endl;
								cout << "---- Options ----" << endl << "1. Plant your feet in the ground! You're so close!" << endl << "2. You can do it! Dont give up! " << endl;
								cin >> rescueOption3;
								switch(rescueOption3)
								{
									case 1:
										cout << "Your pet finally feels encouraged and is able to pull you out of the pit and save you!" << endl;
										animal.setRescue(5);
										score+=5;
										break;
									case 2:
										cout << "Your pet finally feels encouraged and is able to pull you out of the pit and save you!" << endl;
										animal.setRescue(5);
										score+=5;
										break;
								}
						}
					case 2:
						cout << "Your pet goes for help and comes back with a tortoise named Billy who is willing to help" << endl;
						cout << "Billy says to go into the sand pit to dig you out but your pet says to find a stick to pull you out with" << endl;
						cout << "Who are you going to side with?" << endl; 
						cout << "---- Options ----" << endl << "1. Billy" << endl << "2. Your pet" << endl;
						cin >> rescueOption3;
						switch(rescueOption3)
						{
							case 1:
								cout << "Oh no! Billy tried to help you out and now he is sinking in the sand too!" << endl;
								cout << "Your last option is to try your pet's idea" << endl;
								cout << "Your pet runs and get a long stick and saves Billy. He then reaches the stick out to you" << endl;
								cout << "They struggle to pull you out because you're so heavy. You need to motivate them to pull you out" << endl;
								cout << "What do you say to encourage them?" << endl << "---- Options ----" << endl << "1. Plant your feet in the ground! You're so close!" << endl << "2. You suck!! Try harder!" << endl;
								cin >> rescueOption4;
								switch(rescueOption4)
								{
									case 1:
										cout << "Your pet feels encouraged and finally lifts you out of the sand pit!" << endl;
										animal.setRescue(5);
										score+=5;
										break;
									case 2:
										cout << "Oh no! Your pet doesn't feel encouraged and starts to loose his grip what do you say?" << endl;
										cout << "---- Options ----" << endl << "1. Plant your feet in the ground! You're so close!" << endl << "2. You can do it! Dont give up! " << endl;
										cin >> rescueOption5;
										switch(rescueOption5)
										{
											case 1:
												cout << "Your pet finally feels encouraged and is able to pull you out of the pit and save you!" << endl;
												animal.setRescue(5);
												score+=5;
												break;
											case 2:
												cout << "Your pet finally feels encouraged and is able to pull you out of the pit and save you!" << endl;
												animal.setRescue(5);
												score+=5;
												break;
										}
								}
							case 2:
								cout << "Your pet runs and get a long stick and reaches it out to you" << endl;
								cout << "They struggle to pull you out because you're so heavy. You need to motivate them to pull you out" << endl;
								cout << "What do you say to encourage them?" << endl << "---- Options ----" << endl << "1. Plant your feet in the ground! You're so close!" << endl << "2. You suck!! Try harder!" << endl;
								cin >> rescueOption2;
								switch(rescueOption2)
								{
									case 1:
										cout << "Your pet feels encouraged and finally lifts you out of the sand pit!" << endl;
										score+=5;
										break;
									case 2:
										cout << "Oh no! Your pet doesn't feel encouraged and starts to loose his grip what do you say?" << endl;
										cout << "---- Options ----" << endl << "1. Plant your feet in the ground! You're so close!" << endl << "2. You can do it! Dont give up! " << endl;
										cin >> rescueOption3;
										switch(rescueOption3)
										{
											case 1:
												cout << "Your pet finally feels encouraged and is able to pull you out of the pit and save you!" << endl;
												animal.setRescue(5);
												score+=5;
												break;
											case 2:
												cout << "Your pet finally feels encouraged and is able to pull you out of the pit and save you!" << endl;
												animal.setRescue(5);
												score+=5;
												break;
										}
								}
						}
				}
}
while (challenge !=0);
			
	// 3. Switch for the different levels within the challenge
	// 4. each switch case will play through the levels
	// calls increaseSkillLevel from animal.h
}
							 
							 
Void Play :: elephantGame
							 
cout << "Welcome to the final challenge young grasshopper. In this challenge, you'll be solving" << endl <<
"20 increasingly difficult problems and riddles to prove yourself to Great Princess Diana the Elephant III." << endl <<
//https://www.mentalfloss.com/article/55640/7-behaviors-prove-elephants-are-incredibly-smart
"Elephants are some of the most intelligent and beautiful creatures on Earth. They have the largest brain of" << endl <<
"of any land animal, with 3x as many neurons as humans. Did you know they can even identify languages?" << endl <<
"Only the most intellegent man on Earth can tame Princess Diana. When you finish the 20 questions, your score" << endl <<
"will decide if you are worthy enough to tame her." << endl;

cout << "-----------------------------------------------------------------------------------------------------" << endl;
cout << "Let's get started with the questions." << endl;
							 
