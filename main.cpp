int main() {
  play.readAnimals(filename);
  menus.welcome();
  play.playChallenges();
  //if all the scores are 5 or more, allow user to play elephant challenge
  play.ElephantChallenge();
}
