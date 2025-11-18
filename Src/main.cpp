#include <SFML/Graphics.hpp>
#include <header.h>

int main() {
    hello();
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "My window");

    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition({ 200, 200 });

    while (window.isOpen()) {
        
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }
}
