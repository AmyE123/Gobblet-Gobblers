#include "Chip.h"

Chip::Chip()
{
	SetChipSize(2);

	SetChipPosition(0,2);

	Sprite::SetAssetDirectory(spriteName);
}

Chip::~Chip()
{
	Sprite::~Sprite();
}

void Chip::SetChipPosition(int xOffset, int yOffset)
{
	//300, 210 = left top
	//432, 342 = mid mid

	// X DIFF = 132
	// Y DIFF = 132

	Sprite::SetPosition(300 + (132 * xOffset), 210 + (132 * yOffset));
}

void Chip::SetChipSize(int sizeIndex)
{
	chipSize = sizeIndex;

	std::string name = "size_" + std::to_string(sizeIndex);
	std::string fileExt = ".png";
	spriteName = name + fileExt;
}

int Chip::GetChipSize()
{
	return chipSize;
}