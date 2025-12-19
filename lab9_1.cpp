#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,interestRate,payment,Total,NewBalance,Interest;
	int i= 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interestRate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;	

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	while(NewBalance > 0){
		Interest = (loan*interestRate/100.0);
		Total = loan + Interest;
		if(Total < payment){
				payment = Total;
		}
		NewBalance = Total - payment;
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";
		loan = NewBalance;	
		i++;

	}
	return 0;
}

