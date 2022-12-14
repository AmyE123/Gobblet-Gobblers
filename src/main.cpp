#include <SFML/Graphics.hpp>
#include <iostream>
#include "Inception-Engine/_config.h"
#include "Components/Board.h"
#include "Components/Gobblet.h"

int main()
{
    Board _board;
    Gobblet _gobblet;

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(config::window_size[0], config::window_size[1]), config::window_title);

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(config::default_font_file_route))
        return EXIT_FAILURE;
    sf::Text text(config::window_title, font, config::default_font_size);
    text.setPosition(50, 650);

    // Set the logo for the game
    sf::Image image;
    if (!image.loadFromFile(config::textures_file_route + "logo.png"))
        return EXIT_FAILURE;
    window.setIcon(image.getSize().x, image.getSize().y, image.getPixelsPtr());

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Clear screen
        window.clear(sf::Color(236, 240, 241, 255));

        _board.DrawBoard(window);

        _gobblet.DrawSprite(window);

        // Draw the string
        window.draw(text);
        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}