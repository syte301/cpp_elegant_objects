#pragma once

class Secret {
// Скрытые поля
private:
    int num;
// Здесь располагаются функции-методы работы с данными
public:
    // Secret();
    Secret(int n);
    ~Secret() {}
    int number();
};