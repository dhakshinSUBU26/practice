#include<iostream>
using namespace std;
class ADDSUB{
    int a,b;
    int sum=0;
    int sub=0;
    int mul=0;
    int rem=0;
    int quo=0;
    public:
    ADDSUB(int x,int y){
        a=x;
        b=y;
    }
void AddSubNo(){
    sum=a+b;
    sub=a-b;
    mul=a*b;
    rem=a%b;
    quo=a/b;
    if(sub<0){
        sub= sub*-1;
    }
    cout << sum << endl << sub;
}

};
int main(){
    int a,b;
    cin >> a >> b;
    ADDSUB obj(a,b);
    obj.AddSubNo();
    return 0;
}
