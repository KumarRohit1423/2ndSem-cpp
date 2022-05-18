#include <bits/stdc++.h>
using namespace std;
class bank_account
{
    char acc_name[10], acc_type[10];
    long long int acc_no;
    double balance, amt_wrk;

public:
    void init()
    {
        cout << "Enter name of the account holder: \n";
        cin >> (acc_name);
        cout << "Enter type of account: \n";
        cin >> (acc_type);
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
            cout << "Error Insufficient Funds. \n No amount withdrawn\n";
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
    int n2, i1;
    cout << "Enter the number of employees: ";
    cin >> n2;
    bank_account ob1[n2];
    for (i1 = 0; i1 < n2; i1++)
    {
        cout << "Enter details for employee number " << (i1 + 1) << "\n";
        ob1[i1].init();
    }
    int ch, dis_flag = 0, k, c11;
    do
    {
        c11 = 0;
        cout << "Enter 1 for depositing , 2 for withdrawing or 3 for printing details...\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter Employee number: ";
            cin >> k;
            if ((k - 1) >= 0 && (k - 1) < n2)
            {
                ob1[k - 1].deposit();
                break;
            }
            else
            {
                cout << "Employee Does not exist\n";
                dis_flag = 1;
                break;
            }
        }
        case 2:
        {
            cout << "Enter Employee number: ";
            cin >> k;
            if ((k - 1) >= 0 && (k - 1) < n2)
            {
                ob1[k - 1].chk_withdraw();
                break;
            }
            else
            {
                cout << "Employee Does not exist\n";
                dis_flag = 1;
                break;
            }
        }
        case 3:
        {
            cout << "Enter Employee number: ";
            cin >> k;
            if ((k - 1) >= 0 && (k - 1) < n2)
            {
                ob1[k - 1].display();
                dis_flag = 1;
                break;
            }
            else
            {
                cout << "Employee Does not exist\n";
                dis_flag = 1;
                break;
            }
        }
        default:
        {
            cout << "Wrong Choice";
        }
        }
        if (dis_flag != 1)
            ob1[k - 1].display();
        cout << "\nEnter 0 if you wish to terminate or any other number if you want to continue: ";
        cin >> c11;
    } while (c11 != 0);
    return 0;
}