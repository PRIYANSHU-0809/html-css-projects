#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v[i]=x;
    }

    int q;
    cin>>q;

    vector<pair<int,int>>p;

    for(int i=0; i<q; i++)
    {
        int x,y;
        cin>>x>>y;

        p.push_back({x,y});
    }

    vector<int>pre(n);

    int s=v[0];
    pre[0]=v[0];

    for(int i=1; i<n; i++)
    {
        s+=v[i];
        pre[i]=s;

    }

    vector<int>ans;
    for(int i=0; i<q; i++)
    {
        int low=p[i].first;
        int high=p[i].second;

        int x=low-1;
        int cal;

        if(x<0)
        {
            cal=pre[high]-0;

        }
        else{
            cal=pre[high]-pre[low-1];
        }
        ans.push_back(cal);

    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }

}