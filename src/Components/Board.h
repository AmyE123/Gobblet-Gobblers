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
	sf::Texture boardTexture;
	sf::Sprite boardSprite;
};