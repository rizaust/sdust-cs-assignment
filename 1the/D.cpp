#include <iostream>
using namespace std;
class Data{
public:
        Data(){
                a=b=c=0;
                cout<<"A default object is created."<<endl;
        }
        Data(int i)
        {
                a=i;
                c=1;
                cout<<"An integer object "<<a<<" is created."<<endl;
        }
        Data(double i)
        {
                b=i;
                c=2;
                cout<<"A double object "<<b<<" is created."<<endl;
        }
        ~Data()
        {
                if(c==0) cout<<"The default object is erased."<<endl;
                else if(c==1) cout<<"The integer object "<<a<<" is erased."<<endl;
                else if(c==2) cout<<"The double object "<<b<<" is erased."<<endl;
        }
        int a;
        double b;
        int c;
};
int main()
{
    Data d1;
    int i;
    cin>>i;
    Data d2(i);
    double d;
    cin>>d;
    Data d3(d);
    return 0;
}