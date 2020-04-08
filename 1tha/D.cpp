#include<bits/stdc++.h>
using namespace std;
class Apple
{
private:
    double price;
    double weight;
    double amount;
public:
    Apple();
    ~Apple();
    void input();
    double value();
};

Apple::Apple()
{
}

Apple::~Apple()
{
}
void Apple::input(){
    cin>>price>>weight>>amount;
}
double Apple::value(){
    return amount*price*weight;
}
int main()
{
    int i, cases;
    Apple apple;
 
    cin >> cases;
    for(i = 1; i <= cases; i++)
    {
        apple.input();
        cout << apple.value() << endl;
    }
}
