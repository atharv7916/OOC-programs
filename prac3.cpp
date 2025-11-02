#include <iostream>
#include <string>
using namespace std;

// Saving Account Class
class SavingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate; // percentage per applyInterest()

public:
    SavingAccount(const string& name, int accNumber, double initialBalance, double rate)
        : accountHolderName(name), accountNumber(accNumber), balance(initialBalance), interestRate(rate) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << fixed << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ₹" << fixed << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void applyInterest() {
        double interest = balance * (interestRate / 100.0);
        balance += interest;
        cout << "Interest Applied: ₹" << fixed  << interest << endl;
    }

    void display() const {
        cout << "\n[Savings Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << fixed << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Checking Account Class
class CheckingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    CheckingAccount(const string& name, int accNumber, double initialBalance, double fee)
        : accountHolderName(name), accountNumber(accNumber), balance(initialBalance), transactionFee(fee) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << fixed << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }
        double total = amount + transactionFee;
        if (total <= balance) {
            balance -= total;
            cout << "Withdrawn: " << fixed << amount
                 << " (" << transactionFee << " fee applied)" << endl;
        } else {
            cout << "Insufficient balance for withdrawal + fee!" << endl;
        }
    }

    void display() const {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << fixed << balance << endl;
        cout << "Transaction Fee: " << fixed << transactionFee << endl;
    }
};

// Main Function
int main() {

    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;

    int accounttype;
    cout << "Enter 1 for Saving Account or 2 for Checking Account: ";
    cin >> accounttype;
    string accountName;
    int accountNumber;
    double initialBalance;

    cout << "Enter account name: ";
    cin.ignore();
    getline(cin, accountName);

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    SavingAccount* saving = nullptr;
    CheckingAccount* checking = nullptr;

    if (accounttype == 1) {
        double interestRate;
        cout << "Enter interest rate (%): ";
        cin >> interestRate;
        saving = new SavingAccount(accountName, accountNumber, initialBalance, interestRate);
    } else if (accounttype == 2) {
        double transactionFee;
        cout << "Enter transaction fee: ";
        cin >> transactionFee;
        checking = new CheckingAccount(accountName, accountNumber, initialBalance, transactionFee);
    } else {
        cout << "Invalid account type!" << endl;
        return 1;
    }

    int choice;
    do {
        cout << "\n=== Operations Menu ===" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        if (accounttype == 1) cout << "3. Apply Interest" << endl;
        cout << "4. Display Account Info" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (saving) saving->deposit(amount);
                else checking->deposit(amount);
                break;
            }
            case 2: {
                double amount;
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                if (saving) saving->withdraw(amount);
                else checking->withdraw(amount);
                break;
            }
            case 3: {
                if (saving) {
                    saving->applyInterest();
                } else {
                    cout << "Invalid option for checking account!" << endl;
                }
                break;
            }
            case 4: {
                if (saving) saving->display();
                else checking->display();
                break;
            }
            case 5:
                cout << "Thank you for using Banking System!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    // Cleanup memory
    delete saving;
    delete checking;

    return 0;
}
