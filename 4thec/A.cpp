#include <bits/stdc++.h>
using namespace std;
class Point {
   private:
    double x;
    double y;

   public:
    Point(double a) {
        x = a;
        y = a;
        cout << setprecision(16) << "Point : (" << x << ", " << y
             << ") is created." << endl;
    }
    Point() {
        x = 0;
        y = 0;
        cout << setprecision(16) << "Point : (" << x << ", " << y
             << ") is created." << endl;
    }
    Point(const Point &obj) {
        x = obj.x;
        y = obj.y;
        cout << setprecision(16) << "Point : (" << x << ", " << y
             << ") is copied." << endl;
    }
    Point(double a, double b);
    ~Point();
    void show() {
        cout << setprecision(16) << "Point : (" << x << ", " << y << ")"
             << endl;
    }
};

Point::Point(double a, double b) : x(a), y(b) {
    cout << setprecision(16) << "Point : (" << x << ", " << y << ") is created."
         << endl;
}

Point::~Point() {
    cout << setprecision(16) << "Point : (" << x << ", " << y << ") is erased."
         << endl;
}

int main() {
    char c;
    double a, b;
    Point q;
    while (std::cin >> a >> c >> b) {
        Point p(a, b);
        p.show();
    }
    Point q1(q), q2(1);
    q1.show();
    q2.show();
    q.show();
}