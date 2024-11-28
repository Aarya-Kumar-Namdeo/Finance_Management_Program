#include <iostream>
using namespace std;

void IncomeAdd(double &income)
{
    double i;
    cout << "Enter Income: ";
    cin >> i;
    income = income + i;
    cout << "Income Added Successfull.....!" << endl;
    cout << " " << endl;
}

void ExpenseAdd(double &expense)
{
    double j;
    cout << "Enter Expense: ";
    cin >> j;
    expense = expense + j;
    cout << "Expense Added Successfull.....!" << endl;
    cout << " " << endl;
}

void InqueryBalance(double income, double expense, float  balance)
{
    balance = income - expense;
    if(balance < 0){
        cout << "\nYou Are in Loss of " << balance << " Rupees" << endl;
        cout << " " << endl;
    }
    else if (balance > 0){
        cout << "\nYou are in Profit of " << balance << " Rupees" << endl;
        cout << " " << endl;
    } 
}

int main()
{
    double income = 0, expense = 0, balance = 0;
    int choice;
    while (true)
    {
        cout << "\n=========================" << endl;
        cout << "Finance Management System" << endl;
        cout << "=========================" << endl;
        cout << "1. Add Income" << endl;
        cout << "2. Add Expense" << endl;
        cout << "3. Balance Inquery" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            system("cls");
            IncomeAdd(income);
        }

        else if(choice == 2)
        {
            system("cls");
            ExpenseAdd(expense);
        }

        else if(choice == 3)
        {
            system("cls");
            InqueryBalance(income, expense, balance);
        }

        else if(choice == 4)
        {
            cout << "\n================================" << endl;
            cout << "Existing the Program...........!" << endl;
            cout << "================================" << endl;
            break;
        }

        else{
            cout << "\nInvaild Input.......!!";
        }
    }
    
}

