#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    if (n == 0 || n == 1)
        return 1;
    else
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
    return fact;
}
int main()
{
    cout << factorial(12) << endl;
    return 0;
}