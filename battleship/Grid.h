#pragma once
#include <string>
#include <vector>
#include <sstream>
#include "Ship.h"


#define GRID_SIZE 20

class Grid
{
public:
	Grid();
	~Grid();

	std::string printGrid() const;
private:
	char gridArea[GRID_SIZE][GRID_SIZE];
	std::vector<Ship> ships;
};

