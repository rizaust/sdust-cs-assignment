#include<bits/stdc++.h>
using namespace std;
class Person {
   public:
    string name;
    Person(string a) : name(a) {
        cout << "Person " << name << " is created." << endl;
    }
    ~Person() {
        cout << "Person " << name << " is erased." << endl;
    }
};
class Student : public Person {
   public:
    int a;
    Student(string a_, int b) : Person(a_), a(b) {
        cout << "Student " << name << " with id " << a << " is created."
             << endl;
    }
    ~Student() {
        cout << "Student " << name << " with id " << a << " is erased." << endl;
    }
};
class Teacher : public Person {
   public:
    string zhi;
    Teacher(string a_, string b) : Person(a_) {
        zhi = b;
        cout << "Teacher " << name << " with position " << zhi << " is created."
             << endl;
    }
    ~Teacher() {
        cout << "Teacher " << name << " with position " << zhi << " is erased."
             << endl;
    }
};
class Course {
   public:
    Course(string sname, string name, string p, string _course, int num)
        : s1_(name, p), s2_(name, num), s3_(_course) {
        cout << "Course " << s3_ << " is created." << endl;
    }
    ~Course() {
        cout << "Course " << s3_ << " is erased." << endl;
    }

   private:
    Teacher s1_;
    Student s2_;
    string s3_;
};
int main()
{
    string s1, s2, s3, s4;
    int i;
    cin>>s1>>s2>>s3>>s4>>i;
    Person person1(s1), person2(s2);
    Teacher teacher(s1, s3);
    Student student(s2, i);
    Course course(s1, s2, s3, s4, i);
    return 0;
}