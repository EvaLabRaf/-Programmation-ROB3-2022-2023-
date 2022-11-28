
//On créer la classe morse

class morse
{
private:
    int _pin;
public:
    morse(int pin);
    morse();
    ~morse();
    void dot();
    void dash();
    void space();
};

morse::~morse()
{
}
