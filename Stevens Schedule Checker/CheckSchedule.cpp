#include "CheckSchedule.h"
#include <iostream>
#include <fstream>
#include "Course.h"
#include <vector>
using namespace std;

int CheckSchedule::sayHi()
{
	std::cout << "Hi";
	return 1;
}

System::Collections::ArrayList^ CheckSchedule::check(string f1, string f2)
{
	System::Collections::ArrayList^ arr = gcnew System::Collections::ArrayList();
	std::vector<Course*> person1;
	std::vector<Course*> person2;
	
	ifstream sched(f1);
	//ifstream sched2(f2);

	string line;
	string  course, date, time, prof, loc;
	//System::String ^ output;
	for (int k = 0; k < 2; k++)
	{
		if (k == 1)
		{
			sched.close();
			sched = ifstream(f2);
		}
		while (getline(sched, line))
		{
			if (line.find("SUMMARY") != line.npos)
			{
				course = line.substr(line.find(':') + 1);

				for (int j = 0; j < 4; j++)
					getline(sched, line);
				char chr = line[0];

				if (chr == 'E')
					break;

				try
				{
					date = line.substr(line.find(':') + 5);
					time = date.substr(5, 4);
					date = date.substr(0, 4);

					date = date.substr(0, 2) + "/" + date.substr(2);
					time = time.substr(0, 2) + ":" + time.substr(2);

					for (int j = 0; j < 3; j++)
						getline(sched, line);

					prof = line.substr(line.find(' ') + 1);

					getline(sched, line);
					loc = line.substr(line.find(':') + 1);
					chr = loc[0];
					if (chr == ' ')
						loc = loc.substr(1);

					Course* c = new Course(course, date, time, prof, loc);
					if (k == 0)
						person1.push_back(c);
					else
						person2.push_back(c);
				}
				catch (exception) {
				}
			}
		}
		sched.close();
	}

	for (Course* c1 : person1)
	{
		for (Course* c2 : person2)
			if (*c1 == *c2)
			{
				string* arr3 = c1->details;
				for (int i = 0; i < 5; i++)
					arr->Add(gcnew System::String(arr3[i].c_str()));
				arr->Add(gcnew System::String(""));
			}
		delete c1;
	}

	for (Course* c2 : person2)
		delete c2;

	//return "Hello" + System::Environment::NewLine;
	return arr;

}