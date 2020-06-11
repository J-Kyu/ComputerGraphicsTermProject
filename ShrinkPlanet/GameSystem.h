#pragma once

#include "Rigidbody3D.h"

#include <vector>
#include <iostream>
#include <set>

using namespace std;

class GameSystem{

public:
	GameSystem() {
		towerBlock = 0;
	}
	static GameSystem* GetInstance();
	int GetTowerBlock();

	void AddTowerBlock(int a);
	void SetInitBlock(dGeomID);
	dGeomID GetInitBlockGeom();

	void SetGroundGeom(dGeomID);
	dGeomID GetGroundGeom();
	void CollideCheck(dGeomID, dGeomID);

private:
	bool CheckDeadBlock(dGeomID);
	static GameSystem* instance;
	dGeomID initiBlock;
	dGeomID ground;
	set<dGeomID> deadBlock;
	int towerBlock;


};


