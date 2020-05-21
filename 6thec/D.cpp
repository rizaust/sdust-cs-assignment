#include <bits/stdc++.h>
using namespace std;

class Student {
   protected:
    string name;
    bool sex;
    int grade;
    Student* next;

   public:
    Student(string _name, bool _sex, int _grade)
        : name(_name), sex(_sex), grade(_grade), next(NULL) {
        cout << "A student named by " << name << " is created!" << endl;
    }
    ~Student() {
        cout << "A student named by " << name << " is erased." << endl;
    }
    void showInfo() {
        cout << "name = " << name << ", sex = " << sex << ", grade = " << grade
             << ";";
    }
    Student* getNext() { return next; }
    void setNext(Student* s) { next = s; }
};
class StudentCadre : public Student {
   protected:
    string position;

   public:
    StudentCadre(string _name, bool _sex, int _grade, string pos)
        : Student(_name, _sex, _grade), position(pos) {
        cout << "A student cadre with position " << position << " is created."
             << endl;
    }
    ~StudentCadre() {
        cout << "A student named by " << name << " is erased." << endl;
    };
    void showInfo() {
        cout << "name = " << name << ", sex = " << sex << ", grade = " << grade
             << "; position = " << position << ".";
    }
};
int main() {
    int num;
    string name, position;
    bool sex;
    int grade;
    Student *header, *student, *curStudent;

    cin >> name >> sex >> grade >> position;
    header = new StudentCadre(name, sex, grade, position);
    curStudent = header;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> name >> sex >> grade;
        student = new Student(name, sex, grade);
        curStudent->setNext(student);
        curStudent = curStudent->getNext();
    }
    ((StudentCadre*)header)->showInfo();
    cout << endl;
    curStudent = header;
    while (curStudent->getNext() != NULL) {
        curStudent = curStudent->getNext();
        curStudent->showInfo();
        cout << endl;
    }

    curStudent = header;
    while (curStudent != NULL) {
        student = curStudent;
        curStudent = curStudent->getNext();
        delete student;
    }
    return 0;
}