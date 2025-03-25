// #include <iostream>
// using namespace std;

// class BankAccount{
//     private:
//     string accountHolder;
//     double balance;

//     public:
//     BankAccount(){
//         balance = 0.0;
//     }
//     //Parameterized
//     BankAccount(string name, double bal){
//         this->accountHolder = name;
//         this->balance = bal;
//     }

//     //setters
//     string deposit(double amount){
//         if(amount>0){
//             this->balance = this->balance + amount;
//             return "Deposit Successful!";
//         }
//         return "Please enter the possitive amount";
//     }
//     string withdraw(double amount){
//         if(balance >= amount){
//             this->balance = this->balance - amount;
//             return "Withdrawal Successful!";
//         }
//         return "Insufficient Balance";
//     }
//     void setAccountHolderName(string name){
//         this->accountHolder = name;
//     }
//     //getter
//     double getBalance(){
//         return this->balance;
//     }
// };


// int main(){

//     cout <<"Welcome to the Bank System!"<<endl;

//     string name;
//     cout <<"Enter the Account Holder Name: ";
//     cin>>name;

//     BankAccount bankAccount;
//     bankAccount.setAccountHolderName(name);

//     cout <<"Choose an option:"<<endl;
//     cout <<"1. Deposit Money:"<<endl;
//     cout <<"2. Withdraw Money"<<endl;
//     cout <<"3. Check Balance"<<endl;
//     cout <<"4. Exit"<<endl;

//     while(true){
//         int choice;
//         cout <<"Enter choice: ";
//         cin>>choice;

//         switch (choice)
//         {
//         case 1:
//             double amount1;
//             cout <<"Enter Deposit Amount: ";
//             cin>>amount1;
//             cout <<bankAccount.deposit(amount1);
//             break;
//         case 2:
//             double amount2;
//             cout <<"Enter withdrawal amount: ";
//             cin>>amount2;
//             cout <<bankAccount.withdraw(amount2)<<endl;
//             break;
//         case 3:
//             cout <<"Current Balance: "<<bankAccount.getBalance()<<endl;
//             break;
//         case 4:
//             cout <<"Thank you for using our Bank System!"<<endl;
//             return 0;
//         default:
//             cout <<"Invalid Choice, Please enter again!"<<endl;
//             break;
//         }
//         cout <<endl;


//     }


// }

