#include<iostream>
using namespace std;
class Point{
public:
        Point(int _x,int _y)
        {
                x=_x;
                y=_y;
                nump++;
                cout<<"The Point ("<<x<<", "<<y<<") is created! Now, we have "<<nump<<" points."<<endl;
        }
        ~Point()
        {
                nump--;
                cout<<"A Point ("<<x<<", "<<y<<") is erased! Now, we have "<<nump<<" points."<<endl;
        }
        Point(const Point &p)
        {
                x=p.x;
                y=p.y;
                nump++;
                cout<<"A Point ("<<x<<", "<<y<<") is copied! Now, we have "<<nump<<" points."<<endl;
        }
        int getX()
        {
                return x;
        }
        int getY()
        {
                return y;
        }
        static int getNumOfPoints()
        {
                return nump;
        }
private:
        int x,y;
        static int nump;
};
class Circle{
public:
        Circle(int _x,int _y,int _r):c(_x,_y){
                r=_r;
                numc++;
                cout<<"A circle at ("<<_x<<", "<<_y<<") and radius "<<_r<<" is created! Now, we have "<<numc<<" circles."<<endl;
        }
        ~Circle(){
                numc--;
                cout<<"A circle at ("<<c.getX()<<", "<<c.getY()<<") and radius "<<r<<" is erased! Now, we have "<<numc<<" circles."<<endl;
        }
        Circle(Point b,int _r):c(b)
        {
                r=_r;
                numc++;
                cout<<"A circle at ("<<c.getX()<<", "<<c.getY()<<") and radius "<<_r<<" is created! Now, we have "<<numc<<" circles."<<endl;
        }
        static int getNumOfCircles()
        {
                return numc;
        }
        Point &getCenter()
        {
                return c;
        }
        int pointInCircle(Point &q)
        {                int b=(q.getX()-c.getX())*(q.getX()-c.getX())+(q.getY()-c.getY())*(q.getY()-c.getY());
                if(b<r*r)
                        return 1;
                return 0;
        }
private:
        Point c;
        int r;
        static int numc;
};
int Point::nump=0;
int Circle::numc=0;
int main()
{
    int cases,num;
    int x, y, r, px, py;
    Point aPoint(0,0), *bPoint;
    Circle aCircle(1,1,1);
    cin>>cases;
    cout<<"We have "<<Point::getNumOfPoints()<<" points and "<<Circle::getNumOfCircles()<<" circles now."<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        bPoint = new Point(x,y);
        Circle circle(*bPoint, r);
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            cin>>px>>py;
            if (circle.pointInCircle(*(new Point(px, py))))
            {
                cout<<"("<<px<<", "<<py<<") is in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
            else
            {
                cout<<"("<<px<<", "<<py<<") is not in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
        }
        delete bPoint;
    }
    cout<<"We have "<<Point::getNumOfPoints()<<" points, and "<<Circle::getNumOfCircles()<<" circles."<<endl;
    return 0;
}