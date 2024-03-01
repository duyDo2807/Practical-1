#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
 public:
  virtual char playMove();
  virtual string getName();
};

#endif