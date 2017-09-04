#ifndef _CLSTMPL_H
#define _CLSTMPL_H
#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
class Comparator{
public:
	Comparator(T x,T y);
	T max(void) const;
	T min(void) const;		
private:
	T m_x;
	T m_y;	
};
#include "clstmpl.cpp"
#endif //_CLSTEMPL_H
