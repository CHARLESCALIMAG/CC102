#include <iostream>

using namespace std;

int main()
{
	int temp;
	
	cout << "What is the current temperature? ";
	cin >> temp;	
	
	if (temp < 32 ) {
		cout << "Please Bring a Heavy Jacket!";
	}else if (temp >= 32 && temp <= 50) {
		cout << "Please Bring a Light Jacket!";
	}else { 
		cout << " Do not Bring Jacket!";
	}
	return 0;
}