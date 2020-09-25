#pragma once
#include <vector>
#include "ShipPart.h"
#include <string>

class Ship
{
public:
	Ship(int, char, std::string);
	~Ship();

	bool sunk() const;
	char getDirection() const;
	int getLength() const;
	std::string getName() const;
private:
	std::vector<ShipPart> parts;
	char direction;
	std::string name;
};

