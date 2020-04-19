#include <bits/stdc++.h>
using namespace std;
class Book {
   public:
    string name;
    double price;
    Book() { cout << "A default book is created." << endl; }
    Book(string _name, double _price) {
        name = _name;
        price = _price;
        cout << "A book " << name << " is created." << endl;
    }
    void setName(string _name) { name = _name; }
    void setPrice(double _price) { price = _price; }
    string getName() { return name; }
    double getPrice() { return price; }
    ~Book() { cout << "A book " << name << " is erased." << endl; }
};
int main() {
    Book books[4] = {Book("C++", 42.0)};
    string tmp;
    double sum, price;
    int i;
    for (i = 0; i < 3; i++) {
        cin >> tmp >> price;
        books[i + 1].setName(tmp);
        books[i + 1].setPrice(price);
    }
    sum = 0;
    for (i = 0; i < 4; i++) {
        sum += books[i].getPrice();
    }
    cout << "The four books are: " << books[0].getName();
    for (i = 1; i < 4; i++) {
        cout << " " << books[i].getName();
    }
    cout << endl << "Their total price is " << sum << endl;
    return 0;
}