#include "Sprite.h"

class Chip : public Sprite
{
public:
	Chip();
	~Chip();

	void SetChipPosition();
private:
	sf::String spriteName = "Chip.png";
	sf::Texture chipTexture;
	sf::Sprite chipSprite;
};