#include <iostream>

using namespace std;

int main()
{
	int age;
	
	cout << "what is your age:" 
	;
	cin >> age;
	
	if (age < 16) {
		cout << "Your to young to drive." << endl;
	} 
	else if (age == 16){
		cout << "Better get out the way." ;
	} 
	else {
		cout << "You are getting pretty old." ;
	}
	
	return 0;
}
