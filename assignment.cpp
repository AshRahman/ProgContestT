#include<bits/stdc++.h>
using namespace std;
queue<int>qu;
int main()
{
    int n;
    int x;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
        {
            int m;
            cin>>m;
            qu.push(m);
        }
        else if(x==2)
        {
            qu.pop();
        }
        else
        {
            cout<< qu.front()<<endl;
        }
    }
    return 0;
}
