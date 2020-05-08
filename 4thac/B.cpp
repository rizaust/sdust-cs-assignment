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
    double x, y;
};
class Line {
   public:
    Line() : a(0, 0), b(0, 0) {
        cout << "Line : (" << a.getX() << ", " << a.getY() << ") to ("
             << b.getX() << ", " << b.getY() << ") is created." << endl;
    }
    Line(const Point &_a, const Point &_b) : a(_a), b(_b) {
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
    Line(const Line &line) : a(line.a), b(line.b) {
        cout << "Line : (" << a.getX() << ", " << a.getY() << ") to ("
             << b.getX() << ", " << b.getY() << ") is copied." << endl;
    }
    void show() {
        cout << "Line : (" << a.getX() << ", " << a.getY() << ") to ("
             << b.getX() << ", " << b.getY() << ")" << endl;
    }
    void SetLine(double x1, double y1, double x2, double y2) {
        a.x = x1;
        a.y = y1;
        b.x = x2;
        b.y = y2;
    }
    Line &setLine(const Point &_a, const Point &_b) {
        a.x = _a.x;
        a.y = _a.y;
        b.x = _b.x;
        b.y = _b.y;
        return *this;
    }
    Line &setLine(const Line &line) {
        a.x = line.a.x;
        a.y = line.a.y;
        b.x = line.b.x;
        b.y = line.b.y;
        return *this;
    }
    void readLine() {
        double x1, x2, y1, y2;
        char c;
        cin >> x1 >> c >> y1 >> x2 >> c >> y2;
        SetLine(x1, y1, x2, y2);
    }
    Point a, b;
};

int main() {
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin >> num;
    Line line[num];
    for (i = 0; i < num; i++) {
        line[i].readLine();
        line[i].show();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(l1);
    l1.show();
    l2.setLine(l1).show();
    l3.show();
    l4.setLine(t, q).show();
}