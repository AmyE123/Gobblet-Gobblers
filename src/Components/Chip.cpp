#include "Chip.h"

Chip::Chip()
{
	Sprite::SetAssetDirectory(spriteName);

	chipSprite = Sprite::GetSprite();

	SetChipPosition(0,0);
}

Chip::~Chip()
{
	Sprite::~Sprite();
}

void Chip::SetChipPosition(int xOffset, int yOffset)
{
	Sprite::SetPosition(335 + (125 * xOffset), 250 + (120 * yOffset));
}