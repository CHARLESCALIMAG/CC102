#include <iostream>

using namespace std;

int main()
{
	
	int temp;
	
	cout << "What is the current temperature?:";
	cin >> temp; 
	
	if(temp < 32) {
		cout << "Please bring a heavy jacket!" <<endl;
	} 
	else if (temp >=32 && temp <= 50){
		cout << "Please to bring a light jacket!" <<endl;
	} 
	else
		{ cout << "dont not to bring any jacket!" <<endl;
	}
	return 0;
}