#include "Human.h"

#include <iostream>
using namespace std;

Human::Human(string playerName) : name(playerName) {}

char Human::playMove() {
  cout << "Enter move: ";
  char move;
  cin >> move;
  return move;
}

string Human::getName() { return name; }