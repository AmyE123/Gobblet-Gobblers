#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
public:
	/// <summary>
	/// Update function
	/// </summary>
	virtual void update() {};

	/// <summary>
	/// Draws the entity to the window
	/// </summary>
	/// <param name="window">The window to be drawn to</param>
	/// <param name="sprite">The sprite to be drawn</param>
	virtual void Draw(sf::RenderWindow& window, sf::Sprite& sprite);

	/// <summary>
	/// Entity deconstructor
	/// </summary>
	virtual ~Entity() {};
};