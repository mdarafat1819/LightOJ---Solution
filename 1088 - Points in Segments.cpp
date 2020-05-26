#include <bits/stdc++.h>

using namespace std;

int upper(int arr[], int l, int r, int x)
{
    int last = r;
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(arr[mid] >= x) r = mid - 1;
        else if(arr[mid] < x) l = mid + 1;
    }
    if(l > last) return -1;
    return l;
}
int lower(int arr[], int l, int r, int x)
{
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(arr[mid] <= x) l = mid + 1;
        else if(arr[mid] > x) r = mid - 1;
    }
    return r;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int cs = 1; cs <= t; cs++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        int ara[n];
        for(int i = 0; i < n; i++) scanf("%d", &ara[i]);
        printf("Case %d:\n", cs);
        while(q--)
        {
            int l, r, cnt = 0, up, lw;
            scanf("%d %d", &l, &r);
            up = upper(ara, 0, n-1, l);
            lw = lower(ara, 0, n-1, r);
            if(up >= 0) cnt = lw - up + 1;
            printf("%d\n", cnt);
        }
    }
    return 0;
}
