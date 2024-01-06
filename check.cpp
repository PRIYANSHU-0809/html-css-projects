#include<bits/stdc++.h>
using namespace std;

bool same(string s)
    {
            set<char>st;
        
            for(auto it: s)
            {
                    st.insert(it);
            }
        
            if(st.size()==1)return true;
        
        return false;
        
            
    }
    
   int occ(string ori, string toev) {
    
       int wind=toev.size();
       int c=0;
       
       for(int i=0; i<=ori.size()-wind; i++)
       {
           string temp=ori.substr(i,wind);
           
           if(temp==toev)c++;
       }
       
       return c;
       
}
int main()
{

    string s="aaaa";

    
        int len=s.size();

        vector<string>all;
        
        for(int i=0; i<len; i++)
        {
            for(int j=1;j<=len-i; j++)
            {
                string temp=s.substr(i,j);
                all.push_back(temp);
            }
        }

        vector<string>check;
        string lamba;
        
        int f=0;
        int l1=INT_MIN;
        for(int i=0; i<all.size(); i++)
        {
            if(same(all[i]))
            {
                
                int x=occ(s,all[i]);
                
                if(x>=3)
                {
                    
                    check.push_back(all[i]);
                }

               
            }
            
        }
        

        for(int i=0; i<check.size(); i++)
        {
            cout<<check[i]<<endl;
        }

        // int x=occ(s,"aa");

        // cout<<x;

        cout<<lamba;

}