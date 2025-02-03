#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Bank Account Class
class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, string accHolder, double bal)
        : accountNumber(accNo), accountHolder(accHolder), balance(bal) {}

    // Getter methods
    int getAccountNumber() const { return accountNumber; }
    string getAccountHolder() const { return accountHolder; }
    double getBalance() const { return balance; }

    // Setter methods
    void setAccountHolder(const string& newHolder) { accountHolder = newHolder; }
    void setBalance(double newBalance) { balance = newBalance; }

    // Display account details
    void display() const {
        cout << "Account Number: " << accountNumber
             << ", Account Holder: " << accountHolder
             << ", Balance: " << balance << endl;
    }
};

// Main Application
class BankApp {
private:
    vector<BankAccount> accounts;

    // Find account by account number
    int findAccountIndex(int accNo) {
        for (size_t i = 0; i < accounts.size(); ++i) {
            if (accounts[i].getAccountNumber() == accNo)
                return i;
        }
        return -1;
    }

public:
    // Add a new account
    void addAccount() {
        int accNo;
        string accHolder;
        double balance;
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter account holder name: ";
        cin.ignore();
        getline(cin, accHolder);
        cout << "Enter initial balance: ";
        cin >> balance;
        accounts.emplace_back(accNo, accHolder, balance);
        cout << "Account added successfully!\n";
    }

    // View all accounts
    void viewAccounts() {
        if (accounts.empty()) {
            cout << "No accounts available.\n";
            return;
        }
        for (const auto& account : accounts) {
            account.display();
        }
    }

    // Update an account
    void updateAccount() {
        int accNo;
        cout << "Enter account number to update: ";
        cin >> accNo;
        int index = findAccountIndex(accNo);
        if (index != -1) {
            string newHolder;
            double newBalance;
            cout << "Enter new account holder name: ";
            cin.ignore();
            getline(cin, newHolder);
            cout << "Enter new balance: ";
            cin >> newBalance;
            accounts[index].setAccountHolder(newHolder);
            accounts[index].setBalance(newBalance);
            cout << "Account updated successfully!\n";
        } else {
            cout << "Account not found!\n";
        }
    }

    // Delete an account
    void deleteAccount() {
        int accNo;
        cout << "Enter account number to delete: ";
        cin >> accNo;
        int index = findAccountIndex(accNo);
        if (index != -1) {
            accounts.erase(accounts.begin() + index);
            cout << "Account deleted successfully!\n";
        } else {
            cout << "Account not found!\n";
        }
    }

    // Search for an account
    void searchAccount() {
        int accNo;
        cout << "Enter account number to search: ";
        cin >> accNo;
        int index = findAccountIndex(accNo);
        if (index != -1) {
            accounts[index].display();
        } else {
            cout << "Account not found!\n";
        }
    }

    // Sort accounts by account number
    void sortAccounts() {
        sort(accounts.begin(), accounts.end(), [](const BankAccount& a, const BankAccount& b) {
            return a.getAccountNumber() < b.getAccountNumber();
        });
        cout << "Accounts sorted by account number!\n";
    }

    // Main menu
    void menu() {
        int choice;
        do {
            cout << "\n//Menu\n";
            cout << "1. Add bank account\n";
            cout << "2. View all bank accounts\n";
            cout << "3. Update bank account\n";
            cout << "4. Delete bank account\n";
            cout << "5. Search bank account\n";
            cout << "6. Sort bank accounts\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1: addAccount(); break;
                case 2: viewAccounts(); break;
                case 3: updateAccount(); break;
                case 4: deleteAccount(); break;
                case 5: searchAccount(); break;
                case 6: sortAccounts(); break;
                case 0: cout << "Exiting...\n"; break;
                default: cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }
};

// Main Function
int main() {
    BankApp app;
    app.menu();
    return 0;
}
