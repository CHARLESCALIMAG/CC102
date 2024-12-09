#include <iostream>

using namespace std;

int main(){
	
	int age,money;
	char parent;
	
	cout << "Please enter your age: ";
	cin >> age;
	
	cout << "Are you with your parent?: Y/N: ";
	cin >> parent;
	
	cout << "Amount of money you have?: ";
	cin >> money;
	
	if (age < 13) {
        if (parent == 'Y') {
            cout << "You can watch G or PG movies." << endl;
        } else {
            cout << "You can only watch G movies." << endl;
        }
    } else if (age >= 13 && age < 16) {
        if (parent == 'Y') {
            cout << "You can watch G, PG, or R movies." << endl;
        } else {
            cout << "You can watch G, PG movies." << endl;
        }
    } else {
        cout << "You can watch G, PG, or R movies." << endl;
    }

    if (money < 7.50) {
        cout << "You don't have enough money for a matinee show." << endl;
    } else if (money < 10.50) {
        cout << "You can only watch a matinee show." << endl;
    } else {
        cout << "You can watch a matinee or evening show." << endl;
    }

    return 0;
}