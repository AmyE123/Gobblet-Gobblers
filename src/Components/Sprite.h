#pragma once
#include "../Inception-Engine/_config.h"
#include "../Inception-Engine/Entity.h"
#include <iostream>

/// <summary>
/// For all 2D sprites in the game
/// </summary>
class Sprite : public Entity
{
public:
	/// <summary>
	/// The sprite constructor
	/// </summary>
	Sprite();

	/// <summary>
	/// The sprite deconstructor
	/// </summary>
	~Sprite();

	/// <summary>
	/// Draws the sprite
	/// </summary>
	/// <param name="window">The window to draw to</param>
	void DrawSprite(sf::RenderWindow& window);

	/// <summary>
	/// Sets the asset which we want to use for the sprite
	/// </summary>
	/// <param name="assetDir">The directory of the asset, if not set will be missing texture</param>
	void SetAssetDirectory(std::string assetDirectory);

	void SetPosition(int x, int y);

protected:
	sf::Texture GetTexture();

	sf::Sprite GetSprite();

private:
	sf::Texture spriteTexture;
	sf::Sprite sprite;
	sf::String spriteAssetDirectoryRoot = "MissingTexture.png";
	
	virtual void Init();
	bool IsValidSprite(std::string assetDirectory);
	virtual void SetSprite(std::string spriteFileName);
	void SetOrigin();
};