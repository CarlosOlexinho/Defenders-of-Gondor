#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    sf::CircleShape circle(65, 6);
    circle.setFillColor(sf::Color(255, 0, 0));
    circle.setPosition({20, 20});
    sf::Texture texture;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(circle);
        window.display();
    }

    return EXIT_SUCCESS;
}