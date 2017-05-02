#include<iostream>
#include"Sun.h"
#include"Moon.h"
#include"Star.h"
#include"God.h"
#include"Space.h"
using namespace std;

int main (int argc, char *argv[]) {
	Space *space=nullptr;
	Thing *thing=nullptr;
	thing=God::createThings("Space");
	space=Space::GetSpace();
	thing=God::createThings("Sun");
	space->setSun(dynamic_cast<Sun*>(thing));
	thing=God::createThings("Moon");
	space->setMoon(dynamic_cast<Moon*>(thing));
	space->setStars(new Star[NSTAR]);
	space->show();
	
	return 0;
}
