#pragma once
#include <string>
#define Map_Size 200
class Map
{
public:

	Map();
	~Map();
	bool RemplirMatrice(std::string PathFile);
private:
	uint16_t Tab[Map_Size][Map_Size];
};

