#include <iostream>

using namespace std;
class Car {
   private:
    static int cntOfCars;
    double speed;

   public:
    Car() {
        cntOfCars++;
        cout << "The " << cntOfCars << "th car is created." << endl;
    }
    void setspd(double a) {
        speed = a;
    }
    void showspd() {
        cout << speed;
    }
    ~Car() {
        cout << "The " << cntOfCars << "th car is erased." << endl;
        cntOfCars--;
    }
};
int Car::cntOfCars = 0;
class OilCar : public Car {
   private:
    static int cntOfOilCars;
    double spdo;

   public:
    OilCar(double _spd, double _spdo) : spdo(_spdo) {
        setspd(_spd);
        cntOfOilCars++;
        cout << "The " << cntOfOilCars << "th oil-car is created." << endl;
    }
    void show() {
        cout << "An oil-car at speed of ";
        showspd();
        cout << "km/s, with " << spdo << "L/100km." << endl;
    }
    ~OilCar() {
        cout << "The " << cntOfOilCars << "th oil-car is erased." << endl;
        cntOfOilCars--;
    }
};
int OilCar::cntOfOilCars = 0;
class ElecCar : public Car {
   private:
    static int cntOfElecCars;
    double speda;

   public:
    ElecCar(double _spd, double _spde) : speda(_spde) {
        setspd(_spd);
        cntOfElecCars++;
        cout << "The " << cntOfElecCars << "th electrical car is created."
             << endl;
    }
    void show() {
        cout << "An electrical car at speed of ";
        showspd();
        cout << "km/s, with " << speda << "KW/100km." << endl;
    }
    ~ElecCar() {
        cout << "The " << cntOfElecCars << "th electrical car is erased."
             << endl;
        cntOfElecCars--;
    }
};
int ElecCar::cntOfElecCars = 0;
int main()
{
    double power, oil, speed;
    cin>>speed>>oil;
    OilCar one(speed, oil);
    one.show();
    cin>>speed>>power;
    ElecCar two(speed, power);
    two.show();
    return 0;
}