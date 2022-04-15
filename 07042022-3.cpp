#include <iostream>
using namespace std;
class bank_account
{
    char acc_name[30], acc_type[10];
    long long int acc_no;
    double balance, amt_wrk;

public:
    void init()
    {
        cout << "Enter name of the account holder: ";
        gets(acc_name);
        cout << "Enter account type: ";
        gets(acc_type);
        cout << "Enter Account number and Balance: \n";
        cin >> acc_no >> balance;
    }
    void deposit()
    {
        cout << "Enter amount to be deposited: ";
        cin >> amt_wrk;
        balance += amt_wrk;
        cout << "Amount Deposited Sucessfully\n";
    }
    void chk_withdraw()
    {
        cout << "Enter amount to be withdrawn: ";
        cin >> amt_wrk;
        if (amt_wrk <= balance)
        {
            balance -= amt_wrk;
            cout << "Amount Withdrawn Sucessfully\n";
        }
        else
            cout << "Error.Insufficient Funds\n";
    }
    void display()
    {
        cout << "\nAccount Details:\n"
             << "Account Holder: " << acc_name << "\n"
             << "Bank Balance: " << balance << "\n";
    }
};
int main()
{
    bank_account ob1;
    ob1.init();
    int ch, dis_flag = 0;
    cout << "Enter 1 for depositing , 2 for withdrawing or 3 for printing details...\n";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        ob1.deposit();
        break;
    }
    case 2:
    {
        ob1.chk_withdraw();
        break;
    }
    case 3:
    {
        ob1.display();
        dis_flag = 1;
        break;
    }
    default:
    {
        cout << "Wrong Choice";
    }
    }
    if (dis_flag != 1)
        ob1.display();
    return 0;
}