#include <bits/stdc++.h>
using namespace std;
class Char{
    private:
     char cc;
    public:
    Char(char c){
        cc=c;
    }
    char change(){
        if(cc>=65&&cc<=90){
            return tolower(cc);
        }
        else if(cc>=97&& cc<=122){
            return toupper(cc);
        }
        else return cc;
    }
};
int main()
{
    char ch;
    while(cin>>ch)
    {
        Char c(ch);
        cout<<c.change()<<endl;
    }
    return 0;
}