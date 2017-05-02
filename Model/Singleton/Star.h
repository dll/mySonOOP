#ifndef STAR_H
#define STAR_H
#include<iostream>

#include "Thing.h"

class Star : public Thing{
private:
protected:
public:
	Star();
	~Star();
	void show();
	inline unsigned RandUnsignedInt(const unsigned min, const unsigned max);
};

#endif

