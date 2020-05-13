#include <bits/stdc++.h>
using namespace std;

class Point {
   private:
    double x, y;

   public:
    Point(double a = 0, double b = 0) : x(a), y(b) {
        cout << setprecision(2) << fixed << "The Point (" << x << ", " << y
             << ") is created!\n";
    }
    ~Point() {
        cout << setprecision(2) << fixed << "A Point (" << x << ", " << y
             << ") is erased!\n";
    }
    Point(const Point &q) : x(q.x), y(q.y) {
        cout << setprecision(2) << fixed << "A Point (" << x << ", " << y
             << ") is copied!\n";
    }
    double getX() { return x; }
    double getY() { return y; }
    double setX(double a) { x = a; }
    double setY(double b) { y = b; }
};
class Graph {
   private:
    Point *ppp;
    int pointnums;

   public:
    Graph(Point *p, int n) : pointnums(n) {
        ppp = new Point[pointnums];
        for (int i = 0; i < n; i++) {
            ppp[i] = p[i];
        }
        cout << "A graph with " << pointnums << " points is created!\n";
    }
    ~Graph() {
        delete[] ppp;
        cout << "A graph with " << pointnums << " points is erased!\n";
    }
    Point getCentroid() {
        double sum1 = 0;
        for (int i = 0; i < pointnums; i++) sum1 += ppp[i].getX();
        double sum2 = 0;
        for (int i = 0; i < pointnums; i++) sum2 += ppp[i].getY();
        Point *p = new Point(sum1 / pointnums, sum2 / pointnums);
        return *p;
    }
};
int main() {
    int cases, num;
    double x, y;
    Point centroid;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> num;
        Point points[num];
        for (int j = 0; j < num; j++) {
            cin >> x >> y;
            points[j] = *(new Point(x, y));
        }
        Graph graph(points, num);
        centroid = graph.getCentroid();
        cout << setprecision(2) << fixed << "The centroid is ("
             << centroid.getX() << ", " << centroid.getY() << ")." << endl;
    }
    return 0;
}