#include <bits/stdc++.h>
using namespace std;

void isPrime(int n)
{
    int flag;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
        flag=1;
        }
    }    
if(n==1)
cout<<"The number is niether prime nor composite.";
else if(flag==1)
cout<<"The number is composite.";
else
cout<<"Number is prime.";
}
