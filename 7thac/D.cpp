#include <bits/stdc++.h>
using namespace std;
#define aaa m
int aaa = 0, n = 0;
class Car {
    friend class CarHall;

   public:
    static int cntOfCars;
    double speed;
    Car() {
        cntOfCars++;
        cout << "The " << cntOfCars << "th car is created." << endl;
    }
    ~Car() {
    }
    void setSpeed(double a) {
        speed = a;
    }
};
int Car::cntOfCars = 0;
class OilCar : virtual public Car {
    friend class CarHall;

   public:
    static int cntOfOilCars;
    double usageOfOil;
    OilCar() {
        cntOfOilCars++;
        aaa++;
        cout << "The " << cntOfOilCars << "th oil-car is created." << endl;
    }
    ~OilCar() {
    }
    void show() {
    }
    void setOil(double a) {
        usageOfOil = a;
    }
};
int OilCar::cntOfOilCars = 0;
class ElecCar : virtual public Car {
    friend class CarHall;

   public:
    static int cntOfElecCars;
    double usageOfElec;
    ElecCar() {
        cntOfElecCars++;
        n++;
        cout << "The " << cntOfElecCars << "th electrical car is created."
             << endl;
    }
    ~ElecCar() {
    }
    void show() {
    }
    void setPower(double a) {
        usageOfElec = a;
    }
};
int ElecCar::cntOfElecCars = 0;
class CarHall {
   private:
    OilCar *a;
    ElecCar *b;

   public:
    CarHall() {
    }
    ~CarHall() {
        delete[] a;
        a = NULL;
        delete[] b;
        b = NULL;
    }
    void getInfo() {
        int x, y;
        cin >> x;
        a = new OilCar[x];
        for (int i = 0; i < x; i++) cin >> a[i].speed >> a[i].usageOfOil;
        cin >> y;
        b = new ElecCar[y];
        for (int i = 0; i < y; i++) cin >> b[i].speed >> b[i].usageOfElec;
    }
    void showInfo() {
        cout << "We have " << aaa - 1 << " oil-cars, which are:" << endl;
        for (int i = 0; i < aaa - 1; i++)
            cout << "An oil-car at speed of " << a[i].speed << "km/s, with "
                 << a[i].usageOfOil << "L/100km." << endl;
        cout << "We have " << n - 1 << " electrical cars, which are:" << endl;
        for (int i = 0; i < n - 1; i++)
            cout << "An electrical car at speed of " << b[i].speed
                 << "km/s, with " << b[i].usageOfElec << "KW/100km." << endl;
    }
};
int main() {
    Car car;
    OilCar oilcar;
    ElecCar eleccar;
    CarHall carhall;
    carhall.getInfo();
    carhall.showInfo();
    return 0;
}
