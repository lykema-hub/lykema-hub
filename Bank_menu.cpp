#include <iostream>

class account
{
    int balance = 0, deposit_amt = 0, withdraw_amt = 0;

  public:
    account(int bal)
    {
        this->balance = bal;
    }

    void show_bal()
    {
        std::cout << "Your current balance: ₹" << this->balance << std::endl;
    }

    void get_bal(int amt)
    {
        this->balance = amt;
    }

    void deposit()
    {
        std::cout << "\nEnter the amount to be deposited: ";
        std::cin >> deposit_amt;
        this->balance += deposit_amt;
    }

    void withdraw()
    {
        if (this->balance <= 0)
        {
            std::cout << "Error:no money :(\n";
        }
        else
        {
            std::cout << "\nEnter the amount you want to withdraw: ";
            std::cin >> withdraw_amt;
            this->balance -= withdraw_amt;
        }
    }

    ~account()
    {
    }
};

void menu(account &a);

void main()
{
    account a1(100);
    menu(a1);
}

void menu(account &a)
{
    int ch = 0;
    while (ch != 4)
    {
        std::cout << "\t\tWelcome to ABC bank\n";
        std::cout << "1.Show Balance\n";
        std::cout << "2.Deposit\n";
        std::cout << "3.Withdraw\n";
        std::cout << "4.Quit\n";

        std::cout << "\nEnter your choice: ";

        std::cin >> ch;

        switch (ch)
        {
        case 1:
            a.show_bal();
            break;

        case 2:
            a.deposit();
            break;

        case 3:
            a.withdraw();
            break;
        case 4:
            break;

        default:
            std::cout << "What the fuck??";
            break;
        }
    }
    system("cls");
    std::cout << "Thank you for logging to ABC bank :)";
}