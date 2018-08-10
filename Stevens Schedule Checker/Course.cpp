#include "Course.h"
bool Course::equals()
{
	return true;
}

Course::Course(std::string c, std::string d, std::string t, std::string p, std::string l)// : course(c), date(d), time(t), prof(p), loc(l)
{
	details = new std::string[5];
	details[0] = c;
	details[1] = d;
	details[2] = t;
	details[3] = p;
	details[4] = l;
}

Course::~Course()
{
	delete[] details;
}

bool Course::operator==(const Course & c2) const
{
	for (int i = 0; i < 5; i++)
		if (details[i] != c2.details[i])
			return false;

	return true;
}
