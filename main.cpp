#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main() {
  Human human("Mei");
  Computer computer;
  Referee referee;

  Player* winner = referee.refGame(&human, &computer);

  if (winner == nullptr) {
    std::cout << "It's a Tie" << std::endl;
  } else {
    std::cout << winner->getName() << " Wins" << std::endl;
  }

  return 0;
}