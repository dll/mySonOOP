#include "Sun.h"
using namespace std;

Sun* Sun::m_pSun = nullptr;

Sun::Sun() {
	cout<< "I am a Sun..." << endl;
}

Sun::~Sun() {
//	delete m_pSun;
//	m_pSun = nullptr;
//	cout<< "Destroy..." << endl;
}

