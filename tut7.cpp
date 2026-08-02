# include <iostream>
using namespace std;

int sumofdigits(int num)
{
    int digsum=0;
    while(num>0)
    {
        int lastdigit=num%10;
        num/=10;

        digsum+=lastdigit;
    }
    return digsum;
}
int main(){
    
    cout<<sumofdigits(1234)<<endl;
    return 0;
}