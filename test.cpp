#include<bits/stdc++.h>
using namespace std;
int main() {
     string a;
     int i,j,n=0;
     while(getline(cin,a)) {
        stack<int> s;
        for(i=0;i<a.size();i++) {
            if(a[i]=='(')
                s.push(1);
            else if(!s.empty())
                s.pop();
            else
                break;
        }
        if(i==a.size()&&s.empty())
                cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;

     }
     return 0;
}
