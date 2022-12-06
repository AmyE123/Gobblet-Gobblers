#include "Sprite.h"

class Chip : public Sprite
{
public:
	Chip();
	~Chip();

	void SetChipPosition(int xOffset, int yOffset);

	void SetChipSize(int sizeIndex);

	int GetChipSize();
private:
	sf::String spriteName = "size_";
	sf::Texture chipTexture;
	sf::Sprite chipSprite;
	int chipSize = 3;
};