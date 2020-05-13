#include <bits/stdc++.h>
using namespace std;
class a{
    public:
    a(){
        cout<<"a"<<endl;
    }
};
class b{
    public:
    b(){
        cout<<"b"<<endl;
    }
};
class c:a{
    private:
    b bb;
    public:
    c(){
        cout<<"c";
    }
};
int main(){
    c cc;
}
