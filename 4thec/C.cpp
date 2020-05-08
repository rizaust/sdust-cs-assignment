#include <bits/stdc++.h>
using namespace std;
class Cherry{
public:
        Cherry(double _w=0,double a=0){
                w=_w*a;
        }
        void weight(double _w)
        {
                w=_w;
        }
        double weight()
        {
                return w;
        }
        void sold_weight(double _w)
        {
                w=w-_w;
        }
private:
        double w;
};

int main()
{
    double weight, amount;
    cin >> weight >> amount;

    Cherry cherry(weight, amount);
    Cherry sold_cherry[100];

    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        double w;
        cin >> w;
        sold_cherry[i].weight(w);
        cherry.sold_weight(w);
    }
    cout << cherry.weight() << endl;
}
