#include "../Inception-Engine/_config.h"
#include "../Inception-Engine/Entity.h"
#include <iostream>

class Board : public Entity
{
public:
	Board();
	void DrawBoard(sf::RenderWindow& window);
	void Draw(sf::RenderWindow& window);

private:
	const int BOARD_SIZE = 2;
	const int BOARD_WIDTH = 180;
	const int BOARD_HEIGHT = 140;
	const int BOARD_SCALE = 124;

	sf::Texture boardTexture;
	sf::Sprite boardSprite;
};