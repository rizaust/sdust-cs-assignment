#include <iostream>
using namespace std;
class Date {
   private:
    int year, month, day;

   public:
    Date(int _year, int _month, int _day) {
        year = _year;
        month = _month;
        day = _day;
        cout << "Date " << *this << " is created." << endl;
    }
    friend ostream &operator<<(ostream &os, const Date &k) {
        os << k.year << "-" << k.month << "-" << k.day;
        return os;
    }
    ~Date() {
        cout << "Date " << *this << " is erased." << endl;
    }
};
class Person {
   protected:
    string name;
    Date date;
    static int numOfPersons;

   public:
    Person(int y, int m, int d, string _name) : date(y, m, d) {
        name = _name;
        numOfPersons++;
        cout << "The " << numOfPersons << "th person " << name
             << " whose birthday is " << date << " is created." << endl;
        ;
    }
    ~Person() {
        numOfPersons--;
        cout << "Person " << name << " whose birthday is " << date
             << " is erased." << endl;
    }
};
int Person::numOfPersons = 0;
class Student : public Person {
   private:
    int id;

   public:
    Student(int y, int m, int d, string _name, int _id)
        : Person(y, m, d, _name) {
        id = _id;
        cout << "The " << numOfPersons << "th student " << name
             << " whose birthday is " << date << " and id is " << id
             << " is created." << endl;
    }
    ~Student() {
        numOfPersons--;
        cout << "Student " << name << " whose birthday is " << date
             << " and id is " << id << " is erased." << endl;
    }
};
int main()
{
    int year, month, day, id, i;
    string name;
    int num;
    cin>>num;
    Student **students = new Student*[num];
    for (i = 0; i < num; i++)
    {
        cin>>year>>month>>day>>id>>name;
        students[i] = new Student(year, month, day, name, id);
    }
    for (i = 0;i <num; i++)
        delete students[i];
    delete[] students;
    return 0;
}