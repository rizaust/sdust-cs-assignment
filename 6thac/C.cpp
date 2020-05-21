#include <bits/stdc++.h>
using namespace std;
class Point {
   public:
    double x, y;
    Point(double a, double b) : x(a), y(b) {}
    Point(const Point& p) {
        x = p.x;
        y = p.y;
    }
    void setx(int a) { x = a; }
    void sety(int b) { y = b; }
    double getx() { return x; }
    double gety() { return y; }
};

class Circle {
   private:
    Point coasd;
    double r;

   public:
    Circle(Point p, double a) : coasd(p), r(a) {}
    int JudgeRelation(const Circle& another) {
        double d1 = r + another.r, d2 = fabs(r - another.r);
        double x1 = coasd.x, y1 = coasd.y;
        double x2 = another.coasd.x, y2 = another.coasd.y;
        if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) > d1 * d1) return 1;
        if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) < d2 * d2) return 2;
        if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == d1 * d1) return 3;
        if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == d2 * d2) return 4;
        if (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) < d1 * d1) &&
            ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) > d2 * d2))
            return 5;
    }
};
int main() {
    int cases;
    double x, y, r;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> x >> y >> r;
        Point p1(x, y);
        Circle c1(p1, r);
        cin >> x >> y >> r;
        Point p2(x, y);
        Circle c2(p2, r);
        switch (c1.JudgeRelation(c2)) {
            case 1:
                cout << "Outside" << endl;
                break;
            case 2:
                cout << "Inside" << endl;
                break;
            case 3:
                cout << "Externally tangent" << endl;
                break;
            case 4:
                cout << "Internally tangent" << endl;
                break;
            case 5:
                cout << "Intersection" << endl;
        }
    }
}