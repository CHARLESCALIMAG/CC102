#include <iostream>

using namespace std;

int main()
{
	string name,course,school;
	
	cout << "Nickname: ";
	cin >> name;
	cout <<  "Course-Year Level:";
	cin >> course;
	cout << "School:";
	cin >> school;
	
	cout << "Wow Congrats " << name << "! " << course <<  " is a nice course. And you are studying in " << school << " which is the one of the Center of Exellence in Tertiary Education" << endl;
	
	return 0;
}