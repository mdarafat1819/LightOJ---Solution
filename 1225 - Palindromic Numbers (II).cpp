#include <bits/stdc++.h>

using namespace std;

int rev(int n)
{
    int temp = 0;
    while(n)
    {
        temp = temp * 10 + (n % 10);
        n /= 10;
    }
    return temp;
}
int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin>>n;
        if(n == rev(n)) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }

    return 0;
}
