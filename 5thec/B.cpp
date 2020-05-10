#include <bits/stdc++.h>
using namespace std;
class Circle {
   public:
    static const double PI = 3.14;
    Circle(double _radius) { radius = _radius; }
    double getRadius() const { return radius; }
    double getArea() const { return PI * radius * radius; }

   private:
    double radius;
};
int main() {
    double radius;
    cout << "PI=" << Circle::PI << endl;
    const Circle c1(2);
    cout << "radius=" << c1.getRadius();
    cout << ",area=" << c1.getArea() << endl;
    cin >> radius;
    Circle c2(radius);
    cout << "radius=" << c2.getRadius();
    cout << ",area=" << c2.getArea() << endl;
    return 0;
}