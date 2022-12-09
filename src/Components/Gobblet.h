#include "Sprite.h"

/// <summary>
/// The gobblet class, used to place on the board.
/// </summary>
class Gobblet : public Sprite
{
public:
	/// <summary>
	/// The gobblet's constructor
	/// </summary>
	Gobblet();

	/// <summary>
	/// The gobblet's destructor
	/// </summary>
	~Gobblet();

	/// <summary>
	/// Sets the gobblet's position to a coordinate on the board
	/// </summary>
	/// <param name="xOffset">the x coordinate</param>
	/// <param name="yOffset">the y coordinate</param>
	void SetBoardPosition(int xOffset, int yOffset);

	/// <summary>
	/// Sets the gobblet's size between the 3 sizes of a gobblet
	/// </summary>
	/// <param name="sizeIndex">A size from 0 being smallest to 2 being biggest</param>
	void SetSize(int sizeIndex);

	/// <summary>
	/// Gets the size of the gobblet
	/// </summary>
	/// <returns>The size of the gobblet</returns>
	int GetSize();
private:
	const int PADDING_SIZE = 132;
	const int BOARD_X = 300;
	const int BOARD_Y = 210;
	const std::string FILE_EXT = ".png";
	const std::string GOBBLET_FILE_PREFIX = "size_";
	
	sf::Sprite _gobbletSprite;
	sf::String _spriteName;
	int _gobbletSize = 0;
};