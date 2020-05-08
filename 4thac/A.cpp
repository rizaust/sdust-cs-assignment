#include <iostream>
using namespace std;
class Point {
   public:
    Point(double _x = 0, double _y = 0) {
        x = _x;
        y = _y;
        cout << "Point : (" << x << ", " << y << ") is created." << endl;
    }
    ~Point() {
        cout << "Point : (" << x << ", " << y << ") is erased." << endl;
    }
    Point(const Point &p) {
        x = p.x;
        y = p.y;
        cout << "Point : (" << x << ", " << y << ") is copied." << endl;
    }
    void show() { cout << "Point : (" << x << ", " << y << ")" << endl; }
    double getX() { return x; }
    double getY() { return y; }
    void setX(double v) { x = v; }
    void setY(double v) { y = v; }

   private:
    double x, y;
};
class Line {
   public:
    Line() : a(0, 0), b(0, 0) {
        cout << "Line : (" << a.getX() << ", " << a.getY() << ") to ("
             << b.getX() << ", " << b.getY() << ") is created." << endl;
    }
    Line(Point &_a, Point &_b) : a(_a), b(_b) {
        cout << "Line : (" << a.getX() << ", " << a.getY() << ") to ("
             << b.getX() << ", " << b.getY() << ") is created." << endl;
    }
    Line(double x1, double y1, double x2, double y2) : a(x1, y1), b(x2, y2) {
        cout << "Line : (" << a.getX() << ", " << a.getY() << ") to ("
             << b.getX() << ", " << b.getY() << ") is created." << endl;
    }
    ~Line() {
        cout << "Line : (" << a.getX() << ", " << a.getY() << ") to ("
             << b.getX() << ", " << b.getY() << ") is erased." << endl;
    }
    void show() {
        cout << "Line : (" << a.getX() << ", " << a.getY() << ") to ("
             << b.getX() << ", " << b.getY() << ")" << endl;
    }
    void SetLine(double x1, double y1, double x2, double y2) {
        a.setX(x1);
        a.setY(y1);
        b.setX(x2);
        b.setY(y2);
    }

   private:
    Point a, b;
};
int main() {
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin >> num;
    Line line[num];
    for (i = 0; i < num; i++) {
        std::cout << "=========================\n";
        std::cin >> x1 >> c >> y1 >> x2 >> c >> y2;
        line[i].SetLine(x1, y1, x2, y2);
        line[i].show();
    }
    std::cout << "=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}