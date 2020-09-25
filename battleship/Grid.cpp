#include "Grid.h"



Grid::Grid()
{

	//change these char initialisers
	for (int y(0); y < GRID_SIZE; ++y) {
		for (int x(0); x < GRID_SIZE; ++x) {
			gridArea[y][x] = '.';
		}
	}
}


Grid::~Grid()
{
}

std::string Grid::printGrid() const {
	
	std::stringstream os;

	for (int i(0); i < GRID_SIZE + 2; ++i)
		os << "#";
	for (int y(0); y < GRID_SIZE; ++y) {
		os << "\n#";
		for (int x(0); x < GRID_SIZE; ++x) {
			os << gridArea[y][x];
		}
		os << "#";
	}
	os << "\n";
	for (int i(0); i < GRID_SIZE + 2; ++i)
		os << "#";

	return os.str();
}


