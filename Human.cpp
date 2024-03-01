#include "Human.h"

#include <iostream>

Human::Human(std::string name) : name(name) {}

char Human::makeMove() {
  char play;
  std::cout << "Enter move: ";
  std::cin >> play;
  return play;
}

std::string Human::getName() { return name; }