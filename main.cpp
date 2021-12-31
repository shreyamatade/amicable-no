#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //amicable nos
    int f;
    cin>>f;

    int s;
    cin>>s;

    //sum of divisors of f
    int sumf=0;
    for(int i=1;i<f;i++)
    {
        if(f%i==0)
        {
            sumf=sumf+i;
        }
    }


    //sum of divisors of s
    int sums=0;
    for(int i=1;i<s;i++)
    {
        if(s%i==0)
        {
            sums=sums+i;
        }
    }


    //sum of div of f=s or
    //sum of div of s=f then nos are amicable
    if(sumf==s || sums==f)
        cout<<"Amicable"<<endl;
    else
        cout<<"Not Amicable"<<endl;


}
