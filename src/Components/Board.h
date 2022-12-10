#include "../Inception-Engine/_config.h"
#include "../Inception-Engine/Entity.h"
#include <iostream>

/// <summary>
/// The board class, deals with drawing the full board out for the game.
/// </summary>
class Board : public Entity
{
public:
	/// <summary>
	/// Board constructor
	/// </summary>
	Board();

	/// <summary>
	/// Board destructor
	/// </summary>
	~Board() {};

	/// <summary>
	/// Draw the full board to the window
	/// </summary>
	/// <param name="window"></param>
	void DrawBoard(sf::RenderWindow& window);

private:
	const int BOARD_SIZE = 2;
	const int BOARD_WIDTH = 180;
	const int BOARD_HEIGHT = 140;
	const int BOARD_SCALE = 124;

	sf::Texture boardTexture;
	sf::Sprite boardSprite;

	void Draw(sf::RenderWindow& window);
};