#include <bits/stdc++.h>
using namespace std;

class Person {
   public:
    Person() {
        age = 0;
        name = "no name";
        cout << "A person whose name is " << '"' << name << '"'
             << " and age is " << age << " is created!" << endl;
    }
    Person(char *_n, int _age) {
        age = _age;
        name = _n;
        cout << "A person whose name is " << '"' << name << '"'
             << " and age is " << age << " is created!" << endl;
    }
    Person(const Person &_p) {
        age = _p.age;
        name = _p.name;
        cout << "A person whose name is " << '"' << name << '"'
             << " and age is " << age << " is cloned!" << endl;
    }
    ~Person() {
        cout << "A person whose name is " << '"' << name << '"'
             << " and age is " << age << " is erased!" << endl;
    }
    void showPerson() {
        cout << "This person is " << '"' << name << '"' << " whose age is "
             << age << "." << endl;
    }
    Person &setName(char *n) {
        name = n;
        return *this;
    }
    Person &setAge(int a) {
        age = a;
        return *this;
    }

   private:
    int age;
    char *name;
};
int main()
{
    int cases;
    char str[80];
    int age;

    Person noname, Tom("Tom", 16), anotherTom(Tom);
    cin>>cases;
    for (int ca = 0; ca < cases; ca++)
    {
        cin>>str>>age;
        Person newPerson(str, age);
        newPerson.showPerson();
    }
    anotherTom.setName(str).setAge(18);
    anotherTom.showPerson();
    noname.showPerson();
    return 0;
}