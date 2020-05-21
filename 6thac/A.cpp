#include <iostream>
using namespace std;
class Point {
   public:
    double xx;
    double yy;
    static int number;
    Point() {
        xx = 0;
        yy = 0;
        number++;
    }
    Point(double _x, double _y) {
        xx = _x;
        yy = _y;
        number++;
    }
    double x() { return xx; }
    double y() { return yy; }
    double x(double _x) {
        xx = _x;
        return xx;
    }
    double y(double _y) {
        yy = _y;
        return yy;
    }
    int showPoint() { cout << "2D Point (" << x() << "," << y() << ")" << endl; }
    static int showNumber() { return number; }
};
int Point::number = 0;
class Point_3D : public Point {
   private:
    double zz;

   public:
    static int number3D;
    Point_3D() {
        zz = 0;
        number3D++;
    }
    Point_3D(double _x, double _y, double _z) {
        x(_x);
        y(_y);
        zz = _z;
        number3D++;
    }
    double z() { return zz; }
    double z(int _z) {
        zz = _z;
        return zz;
    }
    static int showNumber() { return number3D; }
    void showPoint() {
        cout << "3D Point (" << x() << "," << y() << "," << zz << ")" << endl;
    }
    void setPoint(double _x, double _y, double _z) {
        x(_x);
        y(_y);
        zz = _z;
    }
};
int Point_3D::number3D = 0;
int main() {
    cout << "Invariable test output :" << endl;
    Point_3D p3d;
    p3d.setPoint(-100, 0, 100);
    p3d.showPoint();
    p3d.x(0);
    p3d.y(100);
    cout << "Point (" << p3d.x() << "," << p3d.y() << "," << p3d.z() << ")"
         << endl;
    cout << "\nTest data output :" << endl;
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        double x, y, z;
        int point_type;
        cin >> point_type;
        if (point_type == 2) {
            cin >> x >> y;
            Point p(x, y);
            p.showPoint();
        }
        if (point_type == 3) {
            cin >> x >> y >> z;
            Point_3D p(x, y, z);
            p.showPoint();
        }
    }
    cout << "Number of 2D Points : "
         << Point::showNumber() - Point_3D::showNumber() << endl;
    cout << "Number of 3D Points : " << Point_3D::showNumber() - 1 << endl;
}