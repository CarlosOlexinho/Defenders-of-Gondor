#include <iostream>

struct IAttack
{
    virtual void attack() = 0;
};

struct Human
    : IAttack
{
    void attack() override { std::cout << "Spear goes brrr" << std::endl; }
};

struct Dragon
    : IAttack
{
    void attack() override { std::cout << "Fire goes brrr" << std::endl; }
};

struct Bear
    : IAttack
{
    void attack() override { std::cout << "Claw goes brrr" << std::endl; }
};

struct FrostWyvern
    : IAttack
{
    void attack() override { std::cout << "Ice goes brrr" << std::endl; }
};

struct Polymorph
    : IAttack
{
    void attack() override
    {
        if( form )
        {
            form->attack();
        }
        else
        {
            std::cout << "I have no form, I am defenseless!" << std::endl;
        }
    }
    void changeForm( IAttack* attack ) { form = attack; }

private:
    IAttack* form = nullptr;
};

int main()
{
    Polymorph polymorph;
    polymorph.attack();

    Dragon dragon;
    polymorph.changeForm(&dragon);

    polymorph.attack();


    return EXIT_SUCCESS;
}