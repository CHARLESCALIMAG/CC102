#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//declaretions
	double x1,x2,y1,y2,distance;
	cout << "Please put the x1 coordinates: ";
	cin >> x1;
	cout << "Please put the x2 coordinates: "; 
	cin >> x2;
	cout << "Please put the y1 coordinates: ";
	cin >> y1;
	cout << "Please put the y2 coordinates: ";
	cin >> y2;
	//formula
	distance = sqrt (pow(x2 - x1,2) + pow(y2 - y1,2));
	
	cout << "The distance between X and Y coordinates are: " << distance << endl;
	
	return 0;
}