#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Load a font (SFML requires a font to display text)
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cout << "Error loading font" << std::endl;
        return -1;
    }

    // Create a text object
    sf::Text text;
    text.setFont(font);            // Set the font
    text.setString("Hello, SFML!"); // Set the string (similar to cout)
    text.setCharacterSize(24);      // Set the character size
    text.setFillColor(sf::Color::White); // Set the text color

    // Main loop to keep the window open
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close(); // Close the window
        }

        // Clear the window
        window.clear(sf::Color::Black);

        // Draw the text
        window.draw(text);

        // Display everything on the window
        window.display();
    }

    return 0;
}
