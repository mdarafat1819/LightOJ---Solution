#include <bits/stdc++.h>

using namespace std;

string decToBin(long long n)
{
    string bin;
    while(n) bin.push_back(((n % 2) + '0')), n /= 2;
    reverse(bin.begin(), bin.end());
    return bin;
}
long long binToDec(string bin)
{
    long long num = 0, len = bin.length();
    reverse(bin.begin(), bin.end());
    for(int i = 0; i < len; i++) num += (bin[i] - '0') * pow(2.0, i);
    return num;
}
int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        long long n, flag = 0;
        cin>>n;
        string num = decToBin(n);
        for(int i = num.length() - 2; i > 0; i--)
        {
            if(num[i] == '0' && num[i + 1] == '1')
            {
                swap(num[i], num[i + 1]);
                flag++;
                sort(num.begin() + i + 2, num.end());
                break;
            }
        }
        if(!flag)
        {
            num.push_back('0');
            sort(num .begin() + 1, num.end());
        }
        cout<<"Case "<<cs<<": "<<binToDec(num)<<endl;
    }
    return 0;
}
