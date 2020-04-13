#include <iostream>
using namespace std;
class Character{
public:
        Character(){
                a='a';
                cout<<"Default constructor is called!"<<endl;
        }
        Character(char b){
                a=b;
                cout<<"Character "<<a<<" is created!"<<endl;
        }
        void setCharacter(char b){
                a=b;
        }
        int getAsciiCode(){
                int b;
                b=(int)a;
                return b;
        }
        char getCharacter(){
                return a;
        }
        ~Character(){
                cout<<"Character "<<a<<" is erased!"<<endl;
        }
private:
        char a;
};
int main()
{
    char ch;
    Character ch1, ch2('a');
    cin>>ch;
    ch1.setCharacter(ch);
    cout<<"ch1 is "<<ch1.getCharacter()<<" and its ASCII code is "<<ch1.getAsciiCode()<<"."<<endl;
    cout<<"ch2 is "<<ch2.getCharacter()<<" and its ASCII code is "<<ch2.getAsciiCode()<<"."<<endl;
    return 0;
}