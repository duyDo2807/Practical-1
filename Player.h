#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
 public:
  virtual char makeMove();
  virtual string getName();
};

#endif