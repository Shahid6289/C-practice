#include <iostream>
using namespace std;

class Bankdeposit
{
    int balance;
    int year;
    float interestRate;
    float returnAmount;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    balance = p;
    year = y;
    interestRate = r;
    returnAmount = balance;

    for (int i = 0; i < y; i++)
    {
        returnAmount = returnAmount * (1 + interestRate);
    }
};
Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    balance = p;
    year = y;
    interestRate = float(r) / 100;
    returnAmount = balance;

    for (int i = 0; i < y; i++)
    {
        returnAmount = returnAmount * (1 + interestRate);
    }
};

void Bankdeposit ::show()
{
    cout << endl
         << "Your balance is " << balance
         << " .Return amount after " << year
         << " years is " << returnAmount << endl;
}

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y and r: " << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R: " << endl;
    cin >> p >> y >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();
    return 0;
}