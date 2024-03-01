#include "Referee.h"

Player* Referee::result(Player* player1, Player* player2) {
  char play1 = player1->makeMove();
  char play2 = player2->makeMove();

  if (play1 == play2) {
    return nullptr;  // It's a tie
  } else if ((play1 == 'R' && play2 == 'S') || (play1 == 'S' && play2 == 'P') ||
             (play1 == 'P' && play2 == 'R')) {
    return player1;
  } else {
    return player2;
  }
}