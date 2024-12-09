#include <iostream>

using namespace std;

int main() 
{
    int age;
    double money;
    bool parent;
    string PrintShow, PrintMoney;
    cout << "Enter age: ";
    cin >> age;
    if (age < 13) {
        cout << "With parents? ";
        cin >> parent;
        PrintShow = parent ? "PG, G show." : "G show.";
    } 
	else if (age < 16) {
        cout << "With parent? ";
        cin >> parent;
        PrintShow = parent ? "G, PG, R show." : "G, PG show.";
    } 
	else {
        PrintShow = "R, PG, G show.";
    }
    cout << "Enter money: ";
    cin >> money;
    PrintMoney = money < 7.5 ? "Not enough money." :
                    money < 10.5 ? "Can go to matinee show." :
                    "Can go evening & matinee show.";
    cout << PrintShow << endl;
    cout << PrintMoney << endl;
    
	return 0;
}