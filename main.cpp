#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;

int main() {
  Human humanPlayer("Mei");
  Computer computerPlayer;
  Referee referee;

  Player* winner = referee.result(&humanPlayer, &computerPlayer);

  if (winner == nullptr) {
    cout << "It's a Tie." << endl;
  } else {
    cout << winner->getName() << " Wins." << endl;
  }

  return 0;
}