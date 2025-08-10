#include <iostream>
using namespace std;

double pow(double x, int n)
{
    double ans = 1;
    long long num = n; //to prevent -n overflow

    // edge-cases
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    if ((x == -1) && (n % 2 == 0))
        return 1;
    if ((x == -1) && (n % 2 != 0))
        return -1;
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n == -1)
        return 1 / x;

    // negative powers
    if (num < 0)
    {
        x = 1 / x;
        num = -num;
    }

    // binary-exponentiation
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            ans *= x;
        }

        x *= x;
        num /= 2;
    }

    return ans;
}

int main()
{
    double x = 2.00000;
    int n = -4;

    cout << x << " raised to the power " << n << " is : " << pow(x, n) << endl;
    return 0;
}