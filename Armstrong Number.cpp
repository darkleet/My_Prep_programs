#include <bits/stdc++.h>
using namespace std;
void isArmstrong(int n)
{
    int sum=0;
    int num=n;
    int l_digit;
    int digit=log10(n)+1;
    int power=0;
    
while(n!=0)
{
    l_digit=n%10;
    sum+= pow(l_digit,digit);
    n=n/10;
}
if(num==sum)
{
    cout<<"It is an armstrong number";
}
else
cout<<"It is not an armstrong number";
}

int main()
{
    cout<<"Hello SD"<<endl;
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    isArmstrong(n);
    return 0;
}
    
