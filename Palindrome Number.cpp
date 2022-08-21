#include <bits/stdc++.h>
using namespace std;

void isPalindrome(int n)
{
    int num=n;
    int digit;
    int reverse=0;
    
    //reversing the no.
    while(n!=0)
    {
    digit=n%10;
    reverse=reverse*10+digit;
    n=n/10;
    }
if(num==reverse)
cout<<"Number is palindrome";
else
cout<<"Number is not palindrome";
}

int main()
{
    cout<<"Hello SD"<<endl;
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    isPalindrome(n);
    return 0;
}
