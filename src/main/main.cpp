#include <iostream>

struct IMovable
{
    virtual void move(std::int64_t x, std::int64_t y) = 0;
};

class Food;
struct IConsumer
{
    virtual void consume(Food*) = 0;
};

struct Food
{
    virtual ~Food() = default;
    std::string name;

    std::uint64_t calories = 0;
    std::uint64_t vitaminC = 0;
    std::uint64_t vitaminD = 0;
    std::uint64_t vitaminE = 0;
    std::uint64_t vitaminA = 0;
    std::uint64_t vitaminB = 0;
};

struct Cyanide
    : Food
{
    std::uint64_t amount = 0;
};

struct HealthPotion
    : Food
{
    std::uint64_t healPower = 0;
};

class Animal
    : public IMovable, public IConsumer
{
public:
    void move(std::int64_t x, std::int64_t y) override
    {
        m_position = {x, y};
    }
    void consume(Food* food) override
    {
        Cyanide* cyanide = dynamic_cast<Cyanide*>(food);
        if( cyanide )
        {
            if( cyanide->amount / mass > 0.1f)
                health = 0;
        }

        HealthPotion* healthPotion = dynamic_cast<HealthPotion*>(food);
        if( healthPotion )
        {
            health = 100;
        }
    }

public:
    std::int64_t health = 100;
    std::uint64_t mass = 0;
    std::pair<std::int64_t, std::int64_t> m_position{0,0};
};

class Dog
    : public Animal
{
public:
    Dog() { mass = 20; }
};
class Cat
    : public Animal
{
public:
    Cat() { mass = 6; }
};
class Human
    : public Animal
{
public:
    Human() { mass = 80; }
public:
    void consume(Food* food) override
    {
        HealthPotion* healthPotion = dynamic_cast<HealthPotion*>(food);
        if( healthPotion )
        {
            health = healthPotion->healPower;
        }
    }
};
class Cow
    : public Animal
{
public:
    Cow() { mass = 200; }
};
class Falcon
    : public Animal
{
public:
    Falcon() { mass = 10; }
};

int main()
{
    HealthPotion healthPotion;
    healthPotion.healPower = 40;

    Dog dog_1;
    dog_1.health = 40;
    Cat cat_1;
    cat_1.health = 50;
    Cow cow_1;
    cow_1.health = 70;

    Human human;
    human.health = 10;

    std::cout << "Health of creatures: " << dog_1.health << cat_1.health << cow_1.health << human.health << std::endl;

    dog_1.consume(&healthPotion);
    cat_1.consume(&healthPotion);
    cow_1.consume(&healthPotion);

    human.consume(&healthPotion);

    std::cout << "Health of creatures: " << dog_1.health << cat_1.health << cow_1.health << human.health << std::endl;

    return EXIT_SUCCESS;
}