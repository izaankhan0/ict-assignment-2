#include <iostream>
#include <string>
using namespace std;

class BankAccount{
	private:
		string accountNumber;
		double balance;
	public:
		BankAccount(string accNum) {
	        accountNumber = accNum;
	        balance = 0;
    	}
    	deposit(double amount){
    		balance += amount;
		}
		withdraw(double amount){
			if (amount > balance){
				cout << "Insufficient balance." << endl;
			}else{
				balance -= amount;
			}
		}
		checkBalance(){
			cout << "Balance is: " << balance << endl;
		}
};

int main(){
	
	BankAccount myAccount("0994");
	
    myAccount.checkBalance();
	myAccount.deposit(5000);
    myAccount.checkBalance();
    myAccount.withdraw(2000);
    myAccount.checkBalance();
    myAccount.withdraw(4000);
    myAccount.checkBalance();
	
	return 0;

}