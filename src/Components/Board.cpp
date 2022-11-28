#include "Board.h"

Board::Board()
{
    if (!boardTexture.loadFromFile(config::textures_file_route + "grid_section.png"))
    {
        std::cout << "Error loading board sprite" << "\n";
        return;
    }

    boardSprite.setTexture(boardTexture);
}

void Board::DrawBoard(sf::RenderWindow& window)
{
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            sf::Vector2u size = boardTexture.getSize();
            boardSprite.setOrigin(size.x / 2, size.y / 2);

            //50, 50 is top left corner
            boardSprite.setPosition(180 + (i * 124), 140 + (j * 124));
            Draw(window);
        }
    }
}

void Board::Draw(sf::RenderWindow& window)
{
    Entity::Draw(window, boardSprite);
}