// Pyaramid pattern
# include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
for(int m=0;m<n;m++)
{
    for(int i=m;i<n;i++)
    {
    cout<<" ";
    }
    int num=1;
    for(int i=0;i<=m;i++)
    {
        cout<<num;
        num+=1;
    }
    int nume=m;
    for(int i=0;i<m;i++)
    {
        cout<<nume;
        nume-=1;
        
    }
    cout<<endl;
}
    return 0;
}