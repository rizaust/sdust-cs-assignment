#include <bits/stdc++.h>
using namespace std;
class Data {
   public:
    Data() {
        a = 0;
        cout << "Data's default constructor." << endl;
    }
    Data(int _a) {
        a = _a;
        cout << "Data " << a << " is created." << endl;
    }
    ~Data(){
        cout<<"Data "<<a<<" is erased."<<endl;
    }
    int getValue() { return a; }
    void setValue(int aaa) { a = aaa; }

   private:
    int a;
};
class DataArray {
   public:
    DataArray() { cout << "DataArray's default constructor."<<endl; }
    DataArray(int aa[10]) {
        for (int i = 0; i < 10; i++) {
            data[i].setValue(aa[i]);
        }
    }
    ~DataArray(){
        cout<<"DataArray's deconstructor."<<endl;
    }
    void setValues(int aa[10]) {
        for (int i = 0; i < 10; i++) {
            data[i].setValue(aa[i]);
        }
    }
    int getSum() {
        int tmp = 0;
        for (int i = 0; i < 10; i++) {
            tmp += data[i].getValue();
        }
        return tmp;
    }

   private:
    Data data[10];
};
int main() {
    DataArray dataArray;
    Data *aData;
    int data[10], tmp;
    int i;
    for (i = 0; i < 10; i++) {
        cin >> data[i];
    }
    dataArray.setValues(data);
    cout << "Sum is " << dataArray.getSum() << endl;

    cin >> tmp;
    aData = new Data(tmp);
    cout << "aData = " << aData->getValue() << endl;
    delete aData;
    return 0;
}