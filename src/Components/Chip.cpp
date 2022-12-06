#include "Chip.h"

Chip::Chip()
{
	Sprite::SetAssetDirectory(spriteName);

	chipSprite = Sprite::GetSprite();

	SetChipPosition();
}

Chip::~Chip()
{
	Sprite::~Sprite();
}

void Chip::SetChipPosition()
{
	//chipSprite.setPosition(10, 10);
}