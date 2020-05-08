#include <bits/stdc++.h>
using namespace std;
class Point {
   private:
    double x;
    double y;

   public:
    double getX() { return x; }
    double getY() { return y; }
    Point(double _x = 0, double _y = 0) {
        x = _x;
        y = _y;
        cout << "Point : (" << x << ", " << y << ") is created." << endl;
    }
    Point(double a) {
        x = a;
        y = a;
        cout << "Point : (" << x << ", " << y << ") is created." << endl;
    }
    Point(const Point &obj) {
        x = obj.x;
        y = obj.y;
        cout << "Point : (" << x << ", " << y << ") is copied." << endl;
    }
    ~Point();
    void show() { cout << "Point : (" << x << ", " << y << ")" << endl; }
};
Point::~Point() {
    cout << "Point : (" << x << ", " << y << ") is erased." << endl;
}
class Line {
   private:
    Point p;
    Point q;

   public:
    Line(const Point &pp, const Point &qq) : p(pp), q(qq) {
        cout << "Line : (" << p.getX() << ", " << p.getY() << ") to ("
             << q.getX() << ", " << q.getY() << ") is created." << endl;
    }
    Line(double x1, double y1, double x2, double y2) : p(x1, y1), q(x2, y2) {
        cout << "Line : (" << p.getX() << ", " << p.getY() << ") to ("
             << q.getX() << ", " << q.getY() << ") is created." << endl;
    }
    void show() {
        cout << "Line : (" << p.getX() << ", " << p.getY() << ") to ("
             << q.getX() << ", " << q.getY() << ")" << endl;
    }
    ~Line() {
        cout << "Line : (" << p.getX() << ", " << p.getY() << ") to ("
             << q.getX() << ", " << q.getY() << ") is erased." << endl;
    }
};
int main() {
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin >> num;
    for (i = 1; i <= num; i++) {
        std::cout << "=========================\n";
        std::cin >> x1 >> c >> y1 >> x2 >> c >> y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    std::cout << "=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}