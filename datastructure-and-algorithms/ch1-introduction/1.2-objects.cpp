class Bulb{
    private:
        bool isOn;
    public:
        // Constructor
        Bulb();

        // Instance Method
        virtual void turnOn();
        virtual void turnOff();
        virtual bool isOnFun();
}

