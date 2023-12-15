#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double PrevBalance, per,total ,Payment, NewBalance, Interest;
    int i = 1;
	cout << "Enter initial loan: "; 
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(PrevBalance>0){
    NewBalance=(PrevBalance+(PrevBalance*(per/100)))-Payment;
    Interest = PrevBalance*(per/100);
    total = PrevBalance+Interest;
	cout << fixed << setprecision(2);
	if(NewBalance<0){
	    Payment=total;
	    NewBalance = 0;
	}
	cout << setw(13) << left << i; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";
	i++;
	PrevBalance=NewBalance;
	}
	return 0;
}