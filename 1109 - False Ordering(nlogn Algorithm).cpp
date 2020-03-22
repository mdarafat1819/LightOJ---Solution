#include <bits/stdc++.h>

using namespace std;

void divisorCount(int *res)
{
    for(int i = 1; i <= 1000; i++)
        for(int j = i; j <= 1000; j += i)
            res[j]++;
    return;
}

void falseOrdering(int *res, int *xy)
{
    while(1)
    {
        int flag = 0;
        for(int i = 1; i < 1000; i++)
        {
            if(res[xy[i]] > res[xy[i + 1]])
            {
                swap(xy[i], xy[i + 1]);
                flag = 1;
            }
            else if((res[xy[i]] == res[xy[i+1]]) && (xy[i] < xy[i+1]))
            {
                swap(xy[i], xy[i +1]);
                flag = 1;
            }
        }
        if(!flag) break;
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    int res[1001] = {0}, xy[1001];
    divisorCount(res);
    for(int i = 1; i <= 1000; i++) xy[i] = i;
    falseOrdering(res, xy);
    for(int cs = 1; cs <= t; cs++)
    {
        int idx;
        cin>>idx;
        printf("Case %d: %d\n", cs, xy[idx]);
    }
    return 0;
}
