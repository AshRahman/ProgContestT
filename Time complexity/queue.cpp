#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
vector<int>vec2;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==1){
            int m;
            cin>>m;
            vec.push_back(m);
        }
        else if(x==2){
            //vec.erase(vec.begin(),vec.begin()+1);
            swap(vec.front(),vec.back());
            vec.pop_back();
            swap(vec.front(),vec.back());
        }
        else{
            cout<< " output "<<vec.front()<<endl;
        }


    }
    return 0;
}
