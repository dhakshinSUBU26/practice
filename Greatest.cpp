#include<iostream>
using namespace std;
class Greatest{
    int a,b,c;
    public:
    Greatest(int x,int y, int z){
        a=x;
        b=y;
        c=z;
    }

void findGreatest(){
    if (a>b) {
        if(a>c){
            cout << "a is greater";
        }
        else{
            cout << "c is greater";
        }
    }
    else {
        if(b>c){
            cout << "b is greater";
        }
        else{
            cout << "c is greater ";
        }

    }    
}
};
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    Greatest obj(a,b,c);
    obj.findGreatest();
    return 0;
}
