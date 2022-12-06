#include "Sprite.h"

Sprite::Sprite()
{
	Init();
}

Sprite::~Sprite()
{

}

bool Sprite::IsValidSprite(std::string assetDirectory)
{
	if (!spriteTexture.loadFromFile(config::textures_file_route + assetDirectory))
	{
		std::cout << "Error loading sprite: " << assetDirectory << " @ (Sprite.cpp)" << "\n";
		return false;
	}
	return true;
}

void Sprite::SetAssetDirectory(std::string assetDirectory)
{
	if (IsValidSprite(assetDirectory))
	{
		spriteAssetDirectoryRoot = assetDirectory;
	}
	return;
}

void Sprite::SetSprite(std::string assetDirectory)
{
	if (IsValidSprite(assetDirectory))
	{
		sprite.setTexture(spriteTexture);
	}
	return;
}

void Sprite::Init()
{
	SetSprite(spriteAssetDirectoryRoot);
	SetOrigin();
	SetPosition();
}

void Sprite::DrawSprite(sf::RenderWindow& window)
{
	Entity::Draw(window, sprite);
}

void Sprite::SetOrigin()
{
	sf::Vector2u size = spriteTexture.getSize();
	std::cout << size.x / 2 << "," << size.y / 2;
	sprite.setOrigin(size.x / 2, size.y / 2);
}

void Sprite::SetPosition()
{
	// 250, 200 is in top lefthand corner
	sprite.setPosition(250, 200);
}

sf::Texture Sprite::GetTexture()
{
	return Sprite::spriteTexture;
}

sf::Sprite Sprite::GetSprite()
{
	return Sprite::sprite;
}