#include <bits/stdc++.h>
using namespace std;
class Person {
   public:
    string name;
    char answer[30];
    int limit;
    int isFriend(Person anotherPerson, int questionNum, int frn) {
        int sameNum = 0;
        for (int k = 0; k < questionNum; k++) {
            if (answer[k] == anotherPerson.answer[k]) {
                sameNum++;
            }
        }
        if (sameNum >= limit) {
            if (frn != 0) {
                cout << ",";
            }
            cout << anotherPerson.name;
            return 1;
        }
        return 0;
    }
};
int main() {
    int width = 0;
    int times, questionNum;
    Person persons[110];
    cin >> times >> questionNum;
    for (int i = 0; i < times; i++) {
        cin >> persons[i].name;
        if (persons[i].name.length() > width) width = persons[i].name.length();
        for (int j = 0; j < questionNum; j++) {
            cin >> persons[i].answer[j];
        }
        cin >> persons[i].limit;
    }
    for (int i = 0; i < times; i++) {
        cout << left << setw(width) << persons[i].name << ":";
        int friendsNum = 0;
        for (int j = 0; j < times; j++) {
            if (i != j) {
                friendsNum +=
                    persons[i].isFriend(persons[j], questionNum, friendsNum);
            }
        }
        if (friendsNum == 0) cout << "NONE!";
        cout << endl;
    }
}