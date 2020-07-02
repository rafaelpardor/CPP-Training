// Error 'undefined reference to Bulb::Bulb()'

#include <iostream>

class BulbInterface{
    public:
        virtual void turnOn() = 0;
        virtual void turnOff() = 0;
        virtual bool isOnFun() = 0;
};

// Implementing interface
class Bulb : public BulbInterface{
    private:
        bool isOn;
    public:
        Bulb();
        virtual void turnOn();
        virtual void turnOff();
        virtual bool isOnFun();
};

int main(){
    Bulb b;
    std::cout<<"bulb is on return: "<<b.isOnFun()<<std::endl;
    b.turnOn();
    std::cout<<"bulb is on return: "<<b.isOnFun()<<std::endl;
    return 0;
}
