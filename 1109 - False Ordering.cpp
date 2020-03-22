#include <bits/stdc++.h>

using namespace std;

int dc(int n)
{
    int cnt = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(i * i == n) cnt++;
        else if(!(n % i)) cnt += 2;
    }
    return cnt;
}
void ordering(int* ara, int* num)
{
    while(1)
    {
        int flag = 0;
        for(int i = 1; i < 1000; i++)
        {
            if(ara[num[i]] > ara[num[i + 1]])
                swap(num[i], num[i + 1]), flag++;
            else if((ara[num[i]] == ara[num[i + 1]] && num[i] < num[i+1]))
                swap(num[i], num[i +1]), flag++;
        }
        if(!flag) break;
    }
}

int main()
{
    int t, n, ara[1001], num[1001];
    cin>>t;
    for(int i = 1; i <= 1000; i++)
        ara[i] = dc(i), num[i] = i;
    ordering(ara, num);
    for(int cs = 1; cs <= t; cs++)
    {
        cin>>n;
        cout<<"Case "<<cs<<": "<<num[n]<<endl;
    }
    return 0;
}
