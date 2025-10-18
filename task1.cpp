#include <iostream>
using namespace std;

int main() {
    int choice;
    int withdrawMoney, depositMoney;
    int checkBalance = 1000;  // initial balance

    do {
        cout << "\n=============================\n";
        cout << "         ATM MENU            \n";
        cout << "=============================\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "0. Exit\n";
        cout << "-----------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "-----------------------------\n";

        switch (choice) {
            case 1:
                cout << "💰 Your Current Balance: " << checkBalance << " PKR\n";
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> depositMoney;
                if (depositMoney > 0) {
                    checkBalance += depositMoney;
                    cout << "✅ Successfully Deposited " << depositMoney << " PKR\n";
                } else {
                    cout << "⚠️ Invalid deposit amount.\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> withdrawMoney;
                if (withdrawMoney > checkBalance) {
                    cout << "❌ Transaction failed! Insufficient balance.\n";
                } else if (withdrawMoney <= 0) {
                    cout << "⚠️ Invalid withdrawal amount.\n";
                } else {
                    checkBalance -= withdrawMoney;
                    cout << "✅ Successfully Withdrawn " << withdrawMoney << " PKR\n";
                }
                break;

            case 0:
                cout << "👋 Thank you for using our ATM!\n";
                break;

            default:
                cout << "⚠️ Invalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
