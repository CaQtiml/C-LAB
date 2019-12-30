//#pragma once
//#include "person.h"
template <class T>
class accum
{
private:
	T total;
public:
	accum(T start) : total(start){}
	T operator+=(T const& t) {return total=total+t;}
	T GetTotal() const {return total;}
};

//--------------------------------------------template specialization
template<> //don't forget this line
class accum<Person>
{
private:
	int total;
public:
	accum(int start) : total(start){}
	int operator+=(Person const& t){return total=total+t.getNumber();}
	int GetTotal() const {return total;}
};
//--------------------------------------------------------------------