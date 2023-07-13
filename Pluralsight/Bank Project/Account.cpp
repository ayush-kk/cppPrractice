#include "Account.h"

using std::vector;
using std::string;
using std::to_string;

Account::Account() : balance(0) ,limit(50)
{

}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for(auto t : log)
    {
        report.push_back(t.Report());
    }
    report.push_back("----------------------");

    return report;
}

bool Account :: Deposit(int amount)
{
    if(amount >=0)
    {
        balance += amount;
        log.push_back(Transaction(amount,"deposit"));
        balance-=1;
        log.push_back(Transaction(1,"Service charge"));
        return true;
    }
    else{
        return false; 
    } 
}

bool Account :: Withdraw(int amount)
{
    if(amount <=0){
        return false;
    }
    if ((balance+limit) >= amount)
    {
        balance -= amount;
        log.push_back(Transaction(amount,"withdraw"));
        balance-=1;
        log.push_back(Transaction(1,"Service charge"));
        return true;
    }
    return false;
} 

