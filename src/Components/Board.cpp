#include "Board.h"

Board::Board()
{
    if (!boardTexture.loadFromFile(config::textures_file_route + "grid_section.png"))
    {
        std::cout << "Error loading board sprite. (Board.cpp)" << "\n";
        return;
    }

    boardSprite.setTexture(boardTexture);
}

void Board::DrawBoard(sf::RenderWindow& window)
{
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            sf::Vector2u size = boardTexture.getSize();
            boardSprite.setOrigin(size.x / 2, size.y / 2);

            boardSprite.setPosition(BOARD_WIDTH + (i * BOARD_SCALE), BOARD_HEIGHT + (j * BOARD_SCALE));
            Draw(window);
        }
    }
}

void Board::Draw(sf::RenderWindow& window)
{
    Entity::Draw(window, boardSprite);
}