// #include <iostream>
// using namespace std;

// class User{
//     private:
//     string accountHolder;
//     string email;
//     string address;

//     public:
//     User(){

//     }

//     //getter methods
//     //setter methods
//     void setAccountHolderName(string name){
//         this->accountHolder = name;
//     }

// };

// class BankSystem: public User{
//     private:
//     double balance;

//     public:
//     BankSystem(){
//        balance = 0.0; 
//     }

//     //setter methods
//     string deposit(double amount){
//         if(amount>0){
//             this->balance = this->balance + amount;
//             return "Deposit Successful!";
//         }
//         return "Please enter Positive amount";

//     }
//     string withdraw(double amount){
//         if(amount <= this->balance){
//             this->balance = this->balance - amount;
//         }
//         return "Insufficient Balance!";

//     }

//     //getter method
//     double getBalance(){
//         return this->balance;
//     }

// };



// int main(){

//     cout <<"Welcome to the Bank System!"<<endl;

//     string name;
//     cout <<"Enter Account Holder Name: ";
//     cin >>name;

//     BankSystem bank;
//     bank.setAccountHolderName(name);

//     cout <<"Choose an option:"<<endl;
//     cout <<"1. Deposit Money"<<endl;
//     cout <<"2. Withdraw Money"<<endl;
//     cout <<"3. Check Balance"<<endl;
//     cout <<"4. Exit"<<endl;

//     bool isRunning = true;

//     while(isRunning){
//         int choice;
//         cout<<"Enter choice: ";
//         cin >>choice;

//         double amount;

//         switch (choice)
//         {
//         case 1:
//             cout <<"Enter deposit amount: ";
//             cin>>amount;
//             cout<<bank.deposit(amount)<<endl;
//             break;
//         case 2:
//             cout <<"Enter withdrawal amount: ";
//             cin>>amount;
//             cout<<bank.withdraw(amount)<<endl;
//             break;
//         case 3:
//             cout<<"Current Balance: "<<bank.getBalance()<<endl;
//             break;
//         case 4:
//             cout<<"Thank you for using our Bank System!"<<endl;
//             isRunning = false;
//             break;
//             // return 0;
//         default:
//             cout <<"Invalid choice, Kindly enter the valid option."<<endl;
//             break;
//         }
//         cout <<endl;

//     }






// }


#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;
    int pin;
    vector<string> transactionHistory;

public:
    // Constructor
    BankAccount(string name, double initialBalance, int pinCode) {
        accountHolder = name;
        pin = pinCode;
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Invalid initial balance. Setting balance to 0." << endl;
        }
    }

    // PIN Verification
    bool verifyPin(int enteredPin) {
        return pin == enteredPin;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            transactionHistory.push_back("Deposited: $" + to_string(amount));
            cout << "Deposit Successful! New Balance: $" << balance << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            transactionHistory.push_back("Withdrew: $" + to_string(amount));
            cout << "Withdrawal Successful! New Balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Get account balance
    double getBalance() {
        return balance;
    }

    // Display account details
    void display() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }

    // Show transaction history
    void showTransactionHistory() {
        cout << "\nTransaction History for " << accountHolder << ":" << endl;
        for (string transaction : transactionHistory) {
            cout << transaction << endl;
        }
    }
};

// Main function with multiple accounts
int main() {
    int numAccounts;
    cout << "Enter the number of bank accounts to create: ";
    cin >> numAccounts;

    vector<BankAccount> accounts;  // Vector to store multiple accounts

    // Creating multiple accounts
    for (int i = 0; i < numAccounts; i++) {
        string name;
        double initialBalance;
        int pin;

        cout << "\nEnter details for Account " << i + 1 << endl;
        cout << "Account Holder Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Initial Balance: ";
        cin >> initialBalance;
        cout << "Set a 4-digit PIN: ";
        cin >> pin;

        accounts.push_back(BankAccount(name, initialBalance, pin));
    }

    int choice, accountIndex, enteredPin;
    double amount;

    while (true) {
        cout << "\nSelect an account (1-" << numAccounts << "): ";
        cin >> accountIndex;
        if (accountIndex < 1 || accountIndex > numAccounts) {
            cout << "Invalid account selection!" << endl;
            continue;
        }

        accountIndex--; // Adjust for zero-based index
        cout << "Enter PIN: ";
        cin >> enteredPin;

        if (!accounts[accountIndex].verifyPin(enteredPin)) {
            cout << "Incorrect PIN! Try again." << endl;
            continue;
        }

        do {
            // Menu options
            cout << "\nChoose an option:" << endl;
            cout << "1. Deposit Money" << endl;
            cout << "2. Withdraw Money" << endl;
            cout << "3. Check Balance" << endl;
            cout << "4. Show Transaction History" << endl;
            cout << "5. Switch Account" << endl;
            cout << "6. Exit" << endl;
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    accounts[accountIndex].deposit(amount);
                    break;
                case 2:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    accounts[accountIndex].withdraw(amount);
                    break;
                case 3:
                    cout << "Current Balance: $" << accounts[accountIndex].getBalance() << endl;
                    break;
                case 4:
                    accounts[accountIndex].showTransactionHistory();
                    break;
                case 5:
                    cout << "Switching account..." << endl;
                    break;
                case 6:
                    cout << "Thank you for using our Bank System!" << endl;
                    return 0;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        } while (choice != 5);
    }

    return 0;
}

