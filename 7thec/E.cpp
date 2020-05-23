#include <bits/stdc++.h>
using namespace std;
class Car {
   public:
    static int cntOfCars;
    double speed;
    void setSpeed(double _speed) {
        speed = _speed;
    }
    Car() {
        cntOfCars++;
        cout << "The " << cntOfCars << "th car is created." << endl;
    }
};
class OilCar : public Car {
   public:
    static int cntOfOilCars;
    double baigongli;
    void show() {
        cout << "An oil-car at speed of " << speed << "km/s, with " << baigongli
             << "L/100km." << endl;
    }
    OilCar(double _speed = 0, double hao = 0) {
        cntOfOilCars++;
        cout << "The " << cntOfOilCars << "th oil-car is created." << endl;
        this->setSpeed(_speed);
        baigongli = hao;
    }
};
class ElecCar : public Car {
   public:
    static int cntOfElecCars;
    double baigongli;
    void show() {
        cout << "An electrical car at speed of " << speed << "km/s, with "
             << baigongli << "KW/100km." << endl;
    }
    ElecCar(double _speed = 0, double hao = 0) {
        cntOfElecCars++;
        cout << "The " << cntOfElecCars << "th electrical car is created."
             << endl;
        this->setSpeed(_speed);
        baigongli = hao;
    }
};
class CarHall {
   public:
    OilCar ocar[10];
    ElecCar ecar[10];
    int ecarnum;
    int ocarnum;
    CarHall() {
        ecarnum = 0;
        ocarnum = 0;
    }
    void getInfo() {
        int nums;
        cin >> nums;
        for (int i = 0; i < nums; i++) {
            string a;
            cin >> a;
            double c, d;
            cin >> c >> d;
            if (a[0] == 'o') {
                ocar[ocarnum].setSpeed(c);
                ocar[ocarnum].baigongli = d;
                ocarnum++;
            } else if (a[0] == 'e') {
                ecar[ecarnum].setSpeed(c);
                ecar[ecarnum].baigongli = d;
                ecarnum++;
            }
        }
    }
    void showInfo() {
        cout << "We have " << ocarnum << " oil-cars, which are:" << endl;
        for (int i = 0; i < ocarnum; i++) {
            ocar[i].show();
        }
        cout << "We have " << ecarnum << " electrical cars, which are:" << endl;
        for (int i = 0; i < ecarnum; i++) {
            ecar[i].show();
        }
    }
};
int OilCar::cntOfOilCars = 0;
int ElecCar::cntOfElecCars = 0;
int Car::cntOfCars = 0;
int main()
{
    Car car;
    OilCar oilcar;
    ElecCar eleccar;
    CarHall carhall;
    carhall.getInfo();
    carhall.showInfo();
    return 0;
}