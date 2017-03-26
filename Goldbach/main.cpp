#include "Goldbach.h"

#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	Goldbach g1(6,20000000);
	g1.GoldbachValid();
	g1.GoldbachEnum();
	return 0;
}
