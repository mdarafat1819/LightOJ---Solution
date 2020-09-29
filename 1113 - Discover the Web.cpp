#include <bits/stdc++.h>

using namespace std;

typedef struct stack_ds Stack;

struct stack_ds
{
    string arr[1000];
    int idx = 0;

    void push(string str)
    {
        arr[++idx] = str;
    }
    void pop()
    {
        if(idx) idx--;
    }
    string top()
    {
        return arr[idx];
        idx--;
    }
    int size()
    {
        return idx;
    }
};

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        string cmnd;
        Stack b, f;
        b.push("http://www.lightoj.com/");

        while(true)
        {
            cin>>cmnd;
            if(cmnd == "BACK")
            {
                if(b.size() > 1)
                {
                    f.push(b.top());
                    b.pop();
                    cout<<b.top()<<endl;
                }
                else cout<<"Ignored"<<endl;
            }
            else if(cmnd == "FORWARD")
            {
                if(f.size())
                {
                    cout<<f.top()<<endl;
                    b.push(f.top());
                    f.pop();
                }
                else cout<<"Ignored"<<endl;
            }
            else if(cmnd == "VISIT")
            {
                string url;
                cin>>url;
                cout<<url<<endl;
                b.push(url);
                while(f.size()) f.pop();
            }
            else break;
        }
    }
    return 0;
}
