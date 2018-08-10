#pragma once
#include <string>
class Course {
public:
	std::string* details;
	bool equals();
	Course(std::string c, std::string d, std::string t, std::string p, std::string l);
	~Course();
	bool operator==(const Course& c2) const;
private:
	/*
	std::string course;
	std::string date;
	std::string time;
	std::string prof;
	std::string loc;
	*/
};