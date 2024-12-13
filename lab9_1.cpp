#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loan, rate, pay;

    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> pay;

    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";
    cout << fixed << setprecision(2);
    
    double balance = loan;
    int year = 1;
    
    while (balance > 0) {
        double interest = balance * (rate / 100);
        double total = balance + interest;
        double payment = (pay > total) ? total : pay;
        double newBalance = total - payment;
        cout << setw(13) << left << year;
        cout << setw(13) << left << balance;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << newBalance;
        cout << "\n";
        balance = newBalance;
        year++;
        if(newBalance ==0)break;
        
    }

    return 0;
}
