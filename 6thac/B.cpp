#include <iostream>
using namespace std;
class Square {
   public:
    int length() const { return len; }
    int perimeter() const { return len * 4; }
    int area() const { return len * len; }

   public:
    Square(int l = 0) : len(l) {
        cout << "Construct Square (" << len << ")" << endl;
    }

   protected:
    int len;
};
class Rectangle : public Square {
   public:
    int length() const { return len; }
    int width() const { return wid; }
    int perimeter() const { return (len + wid) * 2; }
    int area() const { return len * wid; }

   public:
    Rectangle(int l, int w) : Square(l), wid(w) {
        cout << "Construct Rectangle (" << len << ", " << wid << ")" << endl;
    }

   protected:
    int wid;
};
class Cuboid : public Rectangle {
   public:
    int length() const { return len; }
    int width() const { return wid; }
    int height() const { return hei; }
    int perimeter() const { return (len + wid + hei) * 4; }
    int area() const { return (len * wid + len * hei + hei * wid) * 2; }
    int volume() const { return hei * len * wid; }

   public:
    Cuboid(int l, int w, int h) : Rectangle(l, w), hei(h) {
        cout << "Construct Cuboid (" << len << ", " << wid << ", " << hei << ")"
             << endl;
    }

   protected:
    int hei;
};
int main() {
    int cases, l, w, h;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cin >> l;
        Square squa(l);
        cout << "A Square length " << squa.length() << ", ";
        cout << "Perimeter " << squa.perimeter() << ", ";
        cout << "Area " << squa.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cin >> l >> w;
        Rectangle rect(l, w);
        cout << "A Rectangle length " << rect.length() << ", width "
             << rect.width() << ", ";
        cout << "Perimeter " << rect.perimeter() << ", ";
        cout << "Area " << rect.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cin >> l >> w >> h;
        Cuboid cubo(l, w, h);
        cout << "A Cuboid length " << cubo.length() << ", width "
             << cubo.width() << ", height " << cubo.height() << ", ";
        cout << "Perimeter " << cubo.perimeter() << ", ";
        cout << "Area " << cubo.area() << ", ";
        cout << "Volume " << cubo.volume() << endl;
    }
}
