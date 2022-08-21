#include <bits/stdc++.h>
using namespace std;
void isPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"It is a perfect number";
    }
    else
    {
        cout<<"It is not a perfect number";
    }
}

int main()
{
    cout<<"Hello SD"<<endl;
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    isPerfect(n);
}
