
#include <iostream>

double balance = 0.0;
double amount;
void showBalance(){
    std::cout << "Your Current balance: $" << balance << std::endl; 
};

void deposit(){
    std::cout << "Enter Amount to Deposit: ";
    std::cin >>  amount;
    balance += amount;

    std::cout << "Successfully Deposited $" << amount << std::endl;
    std::cout << "New Balance: $" << balance << std::endl;
    
};

void withdraw(){
    std::cout << "\nEnter Amount to Withdraw: ";
    std::cin >>  amount;
    if(balance < amount){
        std::cout << "Insufficient Balance!";
    } else{
        balance -= amount;
        std::cout << "Successfully Withdraw $" << amount << std::endl;
        std::cout << "New Balance: $" << balance << std::endl;

    }

}
int main(){
    char choice;
    std::cout <<"********Simple Bank Program********" << std::endl;
    std::cout << "\n(s) Show Current balance" << std::endl;
    std::cout << "(d) Deposit Money" << std::endl;
    std::cout << "(w) Withdraw Money" << std::endl;
    std::cout << "(q) Quit Program" << std::endl;

    bool isTrue = true;
    while(isTrue){

        std::cout << "\nWhat's Your Choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 's':
            showBalance();
            break;
        case 'd':
            deposit();
            break;
        case 'w':
            withdraw();
            break;
        case 'q':
            isTrue = false;
            break;
        default:
            std::cout << "Invalid Input";
            break;
        }
    }
};
