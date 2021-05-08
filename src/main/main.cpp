#include <iostream>
#include <vector>

struct IMovable
{
    virtual void move(int x, int y) = 0;
};

struct IRefuable
{
    virtual void fillUpFuel (unsigned ) = 0;
};

struct IBioFuelRefuable
    : IRefuable
{

};

struct IBurnFuelRefuable
    : IRefuable
{

};

struct Car
    : IMovable
    , IBurnFuelRefuable
    , IBioFuelRefuable
{
    void move(int x, int y) override { }
    void fillUpFuel(unsigned amount) override { }
};

struct Dog
    : IMovable
    , IBioFuelRefuable
{
    void move(int x, int y) override { }
    void fillUpFuel(unsigned amount) override { }
    void jump() { }
};

int main()
{
    std::vector<IMovable*> objects{ };
    std::vector<IBioFuelRefuable*> refuableObjects{ };

    objects.emplace_back(new Car{ });
    objects.emplace_back(new Dog{ });

    for(auto* object : objects)
    {
        object->move(0,0);
    }

    return EXIT_SUCCESS;
}