#include <bits/stdc++.h>
using namespace std;
class Student {
   public:
    int grade;
    Student(int g = 0) {
        grade = g;
        cout << "A student grade " << g << " is created." << endl;
    }

    ~Student() { cout << "A student grade " << grade << " is erased." << endl; }
};
class Teacher {
   public:
    double salary;
    Teacher(double ss = 0) {
        salary = ss;
        cout << "A teacher with salary " << salary << " is created." << endl;
    }
    ~Teacher() {
        cout << "A teacher with salary " << salary << " is erased." << endl;
    }
};
class School {
   public:
    School(int g, double ss) : sss(g), t(ss) {
        cout << "A school is created." << endl;
    }
    ~School() { cout << "A school is erased." << endl; }

   private:
    Student sss;
    Teacher t;
};
int main() {
    int g;
    double s;
    cin >> g >> s;
    School sch(g, s);
    cin >> g;
    Student stu(g);
    cin >> s;
    Teacher tea(s);
    School(g, s);
    return 0;
}