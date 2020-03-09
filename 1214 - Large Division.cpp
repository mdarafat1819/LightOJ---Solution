#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        string a;
        long long int ta = 0, b;
        cin>>a>>b;
        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] == '-') continue;
            ta = ta * 10 + (a[i] - '0');
            ta = ta % b;
        }
        if(ta == 0) cout<<"Case "<<cs<<": "<<"divisible"<<endl;
        else cout<<"Case "<<cs<<": "<<"not divisible"<<endl;
    }
    return 0;
}
