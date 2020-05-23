#include <bits/stdc++.h>
using namespace std;

class Person {
   public:
    Person(int _a, char _s) {
        age = _a;
        sex = _s;
        cout << "Person age = " << age << ", sex = " << sex << " is created."
             << endl;
    }
    virtual ~Person() {
        cout << "Person age = " << age << ", sex = " << sex << " is erased."
             << endl;
    }

   protected:
    int age;
    char sex;
};
class Student : public Person {
   public:
    Student(int _age, int _sex, int _par) : Person(_age, _sex) {
        par = _par;
        cout << "Student of class " << par << " is created." << endl;
    }
    ~Student() { cout << "Student of class " << par << " is erased." << endl; }

   protected:
    int par;
};
class Teacher : public Person {
   public:
    Teacher(int _age, int _sex, int _par) : Person(_age, _sex) {
        par = _par;
        cout << "Teacher with salary " << par << " is created." << endl;
    }
    ~Teacher() {
        cout << "Teacher with salary " << par << " is erased." << endl;
    }

   protected:
    int par;
};
int main() {
    Person *p;
    int age, par;
    char sex, t;
    while (cin >> age >> sex >> t >> par) {
        if (t == 's') {
            p = new Student(age, sex, par);
        } else {
            p = new Teacher(age, sex, par);
        }
        delete p;
    }
}