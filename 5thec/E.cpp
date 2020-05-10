#include <bits/stdc++.h>
using namespace std;
class Data {
   public:
    Data() {
        a = 0;
        cout << "Data's default constructor." << endl;
    }
    ~Data() { cout << "Data " << a << " is erased." << endl; }
    int getValue() { return a; }
    void setValue(int aaa) { a = aaa; }

   private:
    int a;
};
class DataArray {
   public:
    DataArray(int _num, int tmp[]) {
        data = new Data[_num];
        num=_num;
        for (int i = 0; i < _num; i++) {
            data[i].setValue(tmp[i]);
        }
        cout << "DataArray's constructor." << endl;
    }

    ~DataArray() { 
        delete []data;
        cout << "DataArray's deconstructor." << endl; }
    void setValues(int aa[10]) {
        for (int i = 0; i < 10; i++) {
            data[i].setValue(aa[i]);
        }
    }
    int getSum() {
        int tmp = 0;
        for (int i = 0; i < num; i++) {
            tmp += data[i].getValue();
        }
        return tmp;
    }

   private:
    int num;
    Data* data;
};
int main() {
    int i, n;
    Data test, *testP;
    cin >> n;
    int tmp[n];
    for (i = 0; i < n; i++) cin >> tmp[i];
    DataArray datas(n, tmp);
    cout << "Sum is " << datas.getSum() << endl;
    testP = new Data;
    cin >> n;
    testP->setValue(n);
    delete testP;
    return 0;
}