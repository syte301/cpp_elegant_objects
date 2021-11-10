#pragma once
#include "Secret.cpp"
#include "Gguess.cpp"

class Diff {
public:
  Diff(Secret s, Gguess g) {
    this->secret = s;
    this->guess = g;
  }
  ~Diff() {}
  int number() {
    return this->secret.number() - this->guess.number();
  }  
private: 
  Secret secret;
  Gguess guess;
};
