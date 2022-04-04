#include "Bank.h"

int main()
{
    Bank c[3];
    int found = 0, a, ch, i;
    for (int i = 0; i < 2; i++)
    {
        c[i].OpenAccount();
    }
    do
    {
        // Display options
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        // user input
        cout << "Please entre your input: ";
        cin >> ch;
        switch (ch)
        {
        case 1: // displating account info
            for (i = 0; i <= 2; i++)
            {
                c[i].ShowAccount();
            }
            break;
        case 2: // searching the record
            cout << "Account number: ";
            cin >> a;
            for (int i = 0; i < 2; i++)
            {
                found = c[i].Search(a);
            }
            if (found)
            {
                break;
            }
            if (!found)
            {
                cout << "Record not found" << endl;
            }
            break;
        case 3: // deposit operation
            cout << "Account number to deposit amount :";
            cin >> a;
            for (int i = 0; i < 2; i++)
            {
                if (found)
                {
                    c[i].Deposit();
                }

                break;
            }
            if (!found)
            {
                cout << "Record not found" << endl;
            }
            break;
        case 4: // withdraw operation
            cout << "Account number to withdraw amount: ";
            for (int i = 0; i < 2; i++)
            {
                found = c[i].Search(a);
                if (found)
                {
                    c[i].Withdrawal();
                    break;
                }
                if (!found)
                {
                    cout << "Record not found";
                }
                break;
            }
        case 5: // Exit
            cout << "Have a nice Day😇";
        default:
            cout << "Wrong input..🫥";
        }
    } while (ch != 5);
    return 0;
}