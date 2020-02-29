#include <iostream>

using namespace std;

string parity(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 2;
        n /= 2;
    }
    if(sum % 2) return "odd";
    else return "even";
}
int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<i<<": "<<parity(n)<<endl;
    }

    return 0;
}
