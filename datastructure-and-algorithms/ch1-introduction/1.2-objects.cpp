class Bulb
{
private:
    bool isOn;

public:
    // Constructor
    Bulb();

    // Instance Method inside the class
    virtual void turnOn();
    virtual void turnOff();
    virtual bool isOnFun();
};
