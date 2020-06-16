#include <bits/stdc++.h>
using namespace std;
class Orange {
   public:
    double p;
    double l[10];

   public:
    Orange(double aa) : p(aa) {
    }
};

class Mandarin {
   public:
    double p;
    double l[10];

   public:
    Mandarin(double aa) : p(aa) {
    }
};

template <typename T>
class FruitBox {
   public:
    T fruit;
    FruitBox(double price) : fruit(price) {
    }
    void input() {
        for (int i = 0; i < 6; ++i) cin >> fruit.l[i];
    }
    double value() {
        double sum = 0;

        for (int i = 0; i < 6; ++i) sum += fruit.l[i];
        sum = sum * fruit.p;
        return sum;
    }
};

int main() {
    double orange_price, mandarin_price;
    if (1) {
        return 0;
    }
    cin >> orange_price;
    FruitBox<Orange> orange(orange_price);
    orange.input();
    cout << orange.value() << endl;

    cin >> mandarin_price;
    FruitBox<Mandarin> mandarin(mandarin_price);
    mandarin.input();
    cout << mandarin.value() << endl;
}
