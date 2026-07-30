// Inverted triangle pattern
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the vaue of n" << endl;
    cin >> n;
 int num=1;
    for (int i = 0; i < n; i++)
    {
        for(int m=1;m<i+1;m++)
        {
            cout<<"  ";
        }
       
        for (int j = n; j>i; j--)
        {
            cout<<num<<" ";
           
        }
        cout<<endl;
         num+=1;
        
    }
    return 0;
}