#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, b;
        cin>>n;
        a = n / 2;
        b = a + n % 2;
        cout<<a<<" "<<b<<endl;

    }
    return 0;
}
