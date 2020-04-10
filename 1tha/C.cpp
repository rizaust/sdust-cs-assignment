#include<bits/stdc++.h>
using namespace std;
class Equation{
    public:
    void setArgs(){

    }
    void print(){

    }
    double getValue(){

    }
}
int main()
{
    int i, j, n, m, *a;
    double x;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        Equation eq;
        cin>>m;
        a = new int[m + 1];
        for (j = 0; j <= m; j++)
            cin>>a[j];
        eq.setArgs(a, m);
        eq.print();
        cin>>x;
        cout<<eq.getValue(x)<<endl;
        delete []a;
    }
    return 0;
}
