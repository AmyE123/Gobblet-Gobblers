#include "Gobblet.h"

Gobblet::Gobblet()
{
	SetSize(0);

	SetBoardPosition(0,2);

	Sprite::SetAssetDirectory(spriteName);
}

Gobblet::~Gobblet()
{
	Sprite::~Sprite();
}

void Gobblet::SetBoardPosition(int xOffset, int yOffset)
{
	//300, 210 = left top
	//432, 342 = mid mid

	// X DIFF = 132
	// Y DIFF = 132

	Sprite::SetPosition(300 + (132 * xOffset), 210 + (132 * yOffset));
}

void Gobblet::SetSize(int sizeIndex)
{
	gobbletSize = sizeIndex;

	std::string name = "size_" + std::to_string(sizeIndex);
	std::string fileExt = ".png";
	spriteName = name + fileExt;
}

int Gobblet::GetSize()
{
	return gobbletSize;
}