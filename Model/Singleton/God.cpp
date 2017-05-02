#include "God.h"
#include"Sun.h"
#include"Moon.h"
#include "Star.h"
#include "Space.h"	
#include<cstring>
#include<string>
using namespace std;

God::God() {
	
	
}

God::~God() {
	
}

Thing* God::createThings(string thing){
	if(strcmp("Space",thing.c_str()) == 0)
		return Space::GetSpace();
	if(strcmp("Sun",thing.c_str()) == 0)
		return Sun::GetSun();
	else if(strcmp("Moon",thing.c_str()) == 0)
		return Moon::GetMoon();
	else if(strcmp("Star",thing.c_str()) == 0)
		return new Star();
	else
		return NULL;
}
