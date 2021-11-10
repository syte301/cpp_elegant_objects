#pragma once

class Gguess {
public:
  Gguess() {
    rand();
  }
  Gguess(int n) {
    this->num = n;
  }
  ~Gguess() {}
  int number() {
    return this->num;
  }  
private: 
  int num;
};
