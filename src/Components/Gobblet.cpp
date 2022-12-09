#include "Gobblet.h"

Gobblet::Gobblet()
{
	//TESTS
	SetSize(1);
	SetBoardPosition(0,2);

	Sprite::SetAssetDirectory(_spriteName);
}

Gobblet::~Gobblet()
{
	Sprite::~Sprite();
}

void Gobblet::SetBoardPosition(int xOffset, int yOffset)
{
	Sprite::SetPosition(BOARD_X + (PADDING_SIZE * xOffset), BOARD_Y + (PADDING_SIZE * yOffset));
}

void Gobblet::SetSize(int sizeIndex)
{
	_gobbletSize = sizeIndex;

	std::string name = GOBBLET_FILE_PREFIX + std::to_string(sizeIndex);
	std::string fileExt = ".png";
	_spriteName = name + fileExt;
}

int Gobblet::GetSize()
{
	return _gobbletSize;
}