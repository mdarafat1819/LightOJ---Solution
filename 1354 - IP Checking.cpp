#include <bits/stdc++.h>

using namespace std;

int binToDec(int bin)
{
    int dec = 0, i = 0;
    while(bin)
    {
        dec = dec + pow(2.0, i) * (bin % 10);
        bin /= 10;
        i++;
    }
    return dec;
}
int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
    int dcml[4], bin[4], flag = 0;
    char ch;
    for(int i = 0; i < 3; i++) cin>>dcml[i]>>ch;
    cin>>dcml[3];
    for(int i = 0; i < 3; i++) cin>>bin[i]>>ch;
    cin>>bin[3];
    for(int i = 0; i < 4; i++)
        bin[i] = binToDec(bin[i]);
    for(int i = 0; i < 4; i++)
    {
        if(dcml[i] != bin[i])
        {
            flag++;
            break;
        }
    }
    if(flag) cout<<"Case "<<cs<<": No"<<endl;
    else cout<<"Case "<<cs<<": Yes"<<endl;
    }
    return 0;
}
