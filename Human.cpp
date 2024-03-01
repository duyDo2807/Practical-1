#include "Human.h"

#include <iostream>
using namespace std;

Human::Human(string playerName) : name(playerName) {}

char Human::makeMove() {
  cout << "Enter move: ";
  char move;
  cin >> move;
  return move;
}

string Human::getName() { return name; }