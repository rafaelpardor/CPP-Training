#include <iostream>

class Bulb{
    private:
        // Class Variables
        static int TotalBulbCount;

        // Instance Variables
        bool isOn;
    public:
        // Constructor
        Bulb();

        // Class Method
        static int getBulbCount();

        // Instance Method
        virtual void turnOn();
        virtual void turnOff();
        virtual bool isOnFun();
};

Bulb::Bulb(){
    isOn = false;
    TotalBulbCount++;
}

int Bulb::getBulbCount(){
    return TotalBulbCount;
}

void Bulb::turnOn(){
    isOn = true;
}

void Bulb::turnOff(){
    isOn = false;
}

bool Bulb::isOnFun(){
    return isOn;
}

