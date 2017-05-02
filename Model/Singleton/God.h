#ifndef God_H
#define God_H
#include"Thing.h"
#include<string>
using namespace std;
class God {
private:
protected:
public:
	God();
	~God();
	static Thing* createThings(string sms);
};

#endif

