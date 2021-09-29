//DO NOTE MODIFY THIS FILE!!!!!!

#ifndef GUESS_H
#define GUESS_H

namespace cpe {
  enum class Result {
    SMALL,
    LARGE,
    CORRECT
  };

  Result guess(int num);
  void genRandomNum();
}

#endif
