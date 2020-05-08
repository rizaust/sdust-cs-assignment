#include <iostream>
using namespace std;
class Point {
   private:
    double x, y;
    static int counter1;
    static int sum1;

   public:
    Point() : x(0), y(0) {
        counter1++;
        sum1++;
    }
    Point(double a, double b) {
        x = a;
        y = b;
        counter1++;
        sum1++;
    }
    Point(const Point &a) {
        x = a.x;
        y = a.y;
        sum1++;
        counter1++;
    }
    ~Point() { counter1--; }
    static void showCounter() {
        cout << "Current : " << counter1 << " points." << endl;
    }
    static void showSum() {
        cout << "In total : " << sum1 << " points." << endl;
    }
    void cinx(double a) { x = a; }
    void ciny(double a) { y = a; }
};
class Line {
   private:
    Point a, b;
    static int counter2;
    static int sum2;

   public:
    Line() : a(0, 0), b(0, 0) {
        counter2++;
        sum2++;
    }
    Line(Line &c) {
        a = c.a;
        b = c.b;
        sum2++;
        counter2++;
    }
    void gLine(double x1, double x2, double x3, double x4) {
        a.cinx(x1);
        a.ciny(x2);
        b.cinx(x3);
        b.ciny(x4);
    }
    Line(Point &x, Point &y) {
        a = x;
        b = y;
        counter2++;
        sum2++;
    }
    ~Line() { counter2--; }
    static void showCounter() {
        cout << "Current : " << counter2 << " lines." << endl;
    }
    static void showSum() {
        cout << "In total : " << sum2 << " lines." << endl;
    }
    void readLine() {
        char s1, s2;
        double a1, b1, c, d;
        std::cin >> a1 >> s1 >> b1 >> c >> s2 >> d;
        gLine(a1, b1, c, d);
    }
};
int Point::counter1 = 0;
int Point::sum1 = 0;
int Line::counter2 = 0;
int Line::sum2 = 0;

int main() {
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.showCounter();
    t.showSum();
    std::cin >> num;
    Line line[num + 1];
    for (i = 1; i <= num; i++) {
        Line *l1, l2;
        l1->showCounter();
        l1->showSum();
        l1 = new Line(p, q);
        line[i].readLine();
        p.showCounter();
        p.showSum();
        delete l1;
        l2.showCounter();
        l2.showSum();
        q.showCounter();
        q.showSum();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(l1);
    Line::showCounter();
    Line::showSum();
    Point::showCounter();
    Point::showSum();
    Line *l = new Line[num];
    l4.showCounter();
    l4.showSum();
    delete[] l;
    t.showCounter();
    t.showSum();
}
