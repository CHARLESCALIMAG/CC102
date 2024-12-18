#include <iostream>

using namespace std;

int main(){
	
	//declarations
	int sugarOp,riceOp,sardinesOp,coffeeOp,milkOp;
	int sugarQty,riceQty,sardinesQty,coffeeQty,milkQty;
	float dollarE,pesoE,PoundE;
	float sugarCiD,RiceCiP,sardinesCiP,coffeCiD,milkCiD;
	float totalDs,totalPr,totalsar,totalDc,totalDm,total;
	
	cout << "*****************************************************\n";
	cout << "Please Enter the Price of Sugar: ";
	cin >> sugarOp;
	cout << "Please Enter the Amount of Sugar: ";
	cin >> sugarQty;
	cout << "*****************************************************\n";
	cout << "Please Enter the Price of Rice: ";
	cin >> riceOp;
	cout << "Please Enter the Amount of Rice: ";
	cin >> riceQty;
	cout << "*****************************************************\n";
	cout << "Please Enter the Price of Sardines: ";
	cin >> sardinesOp;
	cout << "Please Enter the Amount of Sardines: ";
	cin >> sardinesQty;
	cout << "*****************************************************\n";
	cout << "Please Enter the Price of Coffee: ";
	cin >> coffeeOp;
	cout << "Please Enter the Amount of Coffee: ";
	cin >> coffeeQty;
	cout << "*****************************************************\n";
	cout << "Please Enter the Price of Milk: ";
	cin >> milkOp;
	cout << "Please Enter the Amount of Milk: ";
	cin >> milkQty;
	cout << "*****************************************************\n";
	cout << "Please put the DOLLAR TO PESOS Conversion rate: ";
	cin >> dollarE;
	cout << "Please put the POUND TO PESOS Conversion rate: ";
	cin >> PoundE;
	cout << "*****************************************************\n"; 
	
	//Formula
	sugarCiD = sugarOp * sugarQty;
	RiceCiP = riceOp * riceQty;
	sardinesCiP = sardinesOp * sardinesQty;
	coffeCiD = coffeeOp * coffeeQty;
	milkCiD = milkOp * milkQty;
	
	//Part2
	totalDs = dollarE * sugarCiD;
	totalPr = PoundE * RiceCiP;
	totalsar = PoundE * sardinesCiP;
	totalDc = dollarE * coffeCiD;
	totalDm = dollarE * milkCiD;
	
	//part3
	total = totalDc + totalPr + totalsar + totalDc + totalDm;
	cout << "The Original Total of Sugar in DOLLAR is " <<  sugarCiD << " DOLLAR" << endl; 
	cout << "The Original Total of Rice in POUND is " << RiceCiP << " POUND" << endl; 
	cout << "The Original Total of Sardines in POUND is " << sardinesCiP << " POUND"<< endl;
	cout << "The Original Total of Coffee in DOLLAR is " << coffeCiD << " DOLLAR"<< endl;
	cout << "The Original Total of Milk in DOLLAR is " <<milkCiD << " DOLLAR" << endl;
	
	cout << "Thank You need to pay of " << total << " PESOS. Please come again";
	
	return 0;
}