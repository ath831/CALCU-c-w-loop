#include <iostream>
	using namespace std;

int main(){
//Declare Variables
	int Num1, Num2, Operation;

//Input 	
	cout << "CALCULATOR\n";

	cout << "\nEnter first number: ";
	cin >> Num1;
	
	//Loop
	
	do {		
		cout << "\n[1] Add\n";
		cout << "[2] Subtract\n";
		cout << "[3] Multiply\n";
		cout << "[4] Divide\n";
		cout << "[5] Exit\n";
	
		cout << "\nChoose Operation (1-5): ";
		cin >> Operation;
	
			if (Operation != 5){
				cout << "Enter another number: ";
				cin >> Num2;
			}

	//Computation
		if (Operation == 1) {
			Num1 = Num1 + Num2;
			cout << "\nTotal is " << Num1 << endl;
		}else if (Operation == 2){
			Num1 = Num1 - Num2;
			cout << "\nTotal is " << Num1 << endl;
		}else if (Operation == 3){
			Num1 = Num1 * Num2;
			cout << "\nTotal is " << Num1 << endl;
		}else if (Operation == 4){
			Num1 = Num1 / Num2;
			cout << "\nTotal is " << Num1 << endl;
		}else if (Operation == 5){
			cout << "\nThank you!";
		}else
			cout << "INVALID CHOICE";
	
	}while (Operation != 5);
		
	return 1;
}