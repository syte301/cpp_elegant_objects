#pragma once

class Secret {
public:
  Secret() {
    rand();
  }
  Secret(int n) {
    this->num = n;
  }
  ~Secret() {}
  int number() {
    return this->num;
  }  
private: 
  int num;
};
