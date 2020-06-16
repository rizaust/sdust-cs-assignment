#include <bits/stdc++.h>
using namespace std;
int amazingplus(int a,int b){
    int n,n1,n2,sum=0,j=1;
    while(a>0||b>0)
    {
        n1=a%10;
        n2=b%10;
        n=n1+n2;
        if(n>=10)
            n-=10;
        sum+=n*j;
        j*=10;
        a/=10;
        b/=10;
    }
    return sum;
}
class newInt {
   public:
    int data;
    newInt(int x = 0) : data(x) {
    }
    friend ostream& operator<<(ostream& os, const newInt& q) {
        os << q.data;
        return os;
    }
    friend istream& operator>>(istream& is, newInt& q) {
        is >> q.data;
        return is;
    }
    newInt operator+(newInt d) {
        return amazingplus(data, d.data);
    }
};
int main() {
    int cases;
    newInt a, b, c;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> a >> b;
        c = a + b;
        cout << a << " + " << b << " = " << c << endl;
    }
    return 0;
}