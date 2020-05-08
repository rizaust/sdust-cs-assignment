#include<iostream>
using namespace std;
class Point
{
public:
    double x0,y0;
    Point(double a,double b):x0(a),y0(b)
    {
        cout<<"Point : ("<<a<<", "<<b<<") is created."<<endl;
    }
    void cinn(double a,double b)
    {
        x0=a;
        y0=b;
    }
    Point():x0(0),y0(0)
    {
        cout<<"Point : (0, 0) is created."<<endl;
    }
    Point(const Point  & p1 )
    {
        x0=p1.x0;
        y0=p1.y0;
        cout<<"Point : ("<<x0<<", "<<y0<<") is copied."<<endl;
    }
    void show()
    {
        cout<<"Point : ("<<x0<<", "<<y0<<")"<<endl;
    }
    ~Point()
    {
        cout<<"Point : ("<<x0<<", "<<y0<<") is erased."<<endl;
    }
    void showNoEndOfLine() const
    {
        cout<<"Point : ("<<x0<<", "<<y0<<")";
    }
    double x()const
    {
        return x0;
    }
    double y()const
    {
        return y0;
    }
};
class Line
{
private:
    Point c,d;
public:
    Line& setStart(Point& t)
    {
        c=t;
        return *this;
    }
    Line& setEnd(Point& t)
    {
        d=t;
        return *this;
    }
    Line& setLine(Point& a,Point& b)
    {
        c=a;
        d=b;
        return *this;
    }
    Line& setLine(Line& a)
    {
        c=a.c;
        d=a.d;
        return *this;
    }
    Line(const Line & ll):c(ll.c),d(ll.d)
    {
        cout<<"Line : ("<<c.x0<<", "<<c.y0<<") to ("<<d.x0<<", "<<d.y0<<") is copied."<<endl;
    }
    Line & readLine()
    {
        double i,j,q,k;
        char c1;
        cin>>i>>c1>>j>>q>>c1>>k;
        c.cinn(i,j);
        d.cinn(q,k);
        return *this;
    }
    Line & SetLine(const Line & p)
    {
        c=p.c;
        d=p.d;
        return *this;
    }
    Line & SetLine(const Point & p,const Point & q)
    {
        c=p;
        d=q;
        return *this;
    }
    Line & SetLine(double a1, double b1, double c1, double d1)
    {
        c.x0=a1;
        c.y0=b1;
        d.x0=c1;
        d.y0=d1;
        return *this;
    }
    Line():c(0,0),d(0,0)
    {
        cout<<"Line : (0, 0) to (0, 0) is created."<<endl;
    }
    Line(double a,double b,double c,double d):c(a,b),d(c,d)
    {
        cout<<"Line : ("<<a<<", "<<b<<") to ("<<c<<", "<<d<<") is created."<<endl;
    }
    Line(const Point &a,const Point & b):c(a),d(b)
    {
        cout<<"Line : ("<<a.x0<<", "<<a.y0<<") to ("<<b.x0<<", "<<b.y0<<") is created."<<endl;
    }
    ~Line()
    {
        cout<<"Line : ("<<c.x0<<", "<<c.y0<<") to ("<<d.x0<<", "<<d.y0<<") is erased."<<endl;
    }
    void show()const
    {
        cout<<"Line : ("<<c.x0<<", "<<c.y0<<") to ("<<d.x0<<", "<<d.y0<<")"<<endl;
    }
    const Point& start() const
    {
        return c;
    }
    const Point& end() const
    {
        return d;
    }
};
void showLineCoordinate(const Line& line)
{
    std::cout<<"Line : ";
    std::cout<<"("<<line.start().x()<<", "<<line.start().y()<<")";
    std::cout<<" to ";
    std::cout<<"("<<line.end().x()<<", "<<line.end().y()<<")";
    std::cout<<std::endl;
}

void showLinePoint(const Line& line)
{
    std::cout<<"Line : ";
    line.start().showNoEndOfLine();
    std::cout<<" to ";
    line.end().showNoEndOfLine();
    std::cout<<std::endl;
}

void showLine(const Line& line)
{
    line.show();
}

int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        line[i].readLine();
        showLine(line[i]);
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    showLineCoordinate(l1);
    showLinePoint(l2);
    showLinePoint(l3.setLine(l1));
    showLineCoordinate(l4.setLine(t,q));
    line[0].setStart(t);
    line[0].setEnd(q);
}
