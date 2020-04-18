#include <bits/stdc++.h>
using namespace std;
class Test{
    public:
    string name;
    Test(){
        name="NULL";
        cout<<"Create an object with name "<<name<<endl;
    }
    Test(string c){
        name=c;
        cout<<"Create an object with name "<<name<<endl;
    }
    ~Test(){
        cout<<"Erase an object with name "<<name<<endl;
    }
    
};
int main()
{
    string name;
    Test t1;
    cin>>name;
    Test t2(name);
    return 0;
}
