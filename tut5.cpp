
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else if (a > b)
        return b;
}

int main()
{
    cout << sum(10, 20) << endl;

    cout<< min(10, 20) << endl;
    return 0;
}