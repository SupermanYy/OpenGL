#pragma once
#include "Maze.h"
class Boom
{
public:
	Boom();
	virtual ~Boom();
	int x, y;
	bool borderCheck(int, int);	//�߽���
	void Destroy();
	void explose(int  ,int );
	Maze* maze;
};

