#include <bits/stdc++.h>

using namespace std;

string decToBin(long long int n)
{
    string bin;
    while(n)
    {
        bin.push_back(((n % 2) + '0'));
        n /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}
long long int binToDec(string n)
{
    long long int num = 0, m = 1;
    for(int i = n.length() - 1, j= 0; i >= 0; i--, j++)
    {
        num += ((n[i]-'0') * pow(2.0, j));
    }
    return num;
}
string partSort(string num, int left, int right)
{
    string temp;
    for(int i = left; i < right; i++)
        temp.push_back(num[i]);
    sort(temp.begin(), temp.end());
    for(int i = left, j = 0; i < right; i++, j++)
        num[i] = temp[j];
    return num;
}
int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        long long int n, flag = 0;
        cin>>n;
        string num = decToBin(n);
        for(int i = num.length() - 2; i > 0; i--)
        {
            if(num[i] == '0' && num[i + 1] == '1')
            {
                swap(num[i], num[i + 1]);
                flag++;
                num = partSort(num, i + 2, num.length());
                break;
            }
        }
        if(!flag)
        {
            num.push_back('0');
            num = partSort(num, 1, num.length());
        }
        cout<<"Case "<<cs<<": "<<binToDec(num)<<endl;
    }
    return 0;
}
