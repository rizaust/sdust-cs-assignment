#include<bits/stdc++.h>
using namespace std;
class Grape{
    public:
    Grape(double price,double w){
        pr=price;
        we=w;
    }
    Grape(double price){
        pr=price;
        we=0;
    }
    double weight() const;
    double weight(double w){
        we=w;
    }
    double value() const;
    double pr,we;
};
double Grape::weight()const{
    return we;
}
double Grape::value()const{
    return pr*we;
}
int main()
{
    double w, price;
    cin >> price;
    cin >> w;
    const Grape grap(price, w);
    Grape grape(price);
    cin >> w;
    grape.weight(w);
    cout << grape.weight() + grap.weight() << endl;
    cout << grape.value() + grap.value() << endl;
}
