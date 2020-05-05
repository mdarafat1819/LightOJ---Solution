#include <bits/stdc++.h>

using namespace std;

int upper(int ara[], int l, int r, int x)
{
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(ara[mid] >= x) r = mid - 1;
        if(ara[mid] < x) l = mid + 1;
        if((l == mid) && (ara[mid] >= x)) return mid;
        if((ara[mid] < x) && (ara[mid + 1] >= x))return mid + 1;
        if((r == mid) && (ara[mid] < x)) return -1; ///not found.
    }
}
int lower(int ara[], int l, int r, int x)
{
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(ara[mid] > x) r = mid - 1;
        if(ara[mid] <= x) l = mid + 1;
        if((r == mid) && (ara[mid] <= x)) return mid;
        if((ara[mid] <= x) && (ara[mid + 1] > x)) return mid;
        if((l == mid) && (ara[mid] > x)) return -1;///not found
    }
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
