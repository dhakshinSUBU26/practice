#include <iostream>
using namespace std;

class car {
    string name;
    string id;
    float mileage;
    float distanceTravelled;

    public:

    car() {
        cout << "default contructor" << endl;
        distanceTravelled=0;
    }
    car(string name, string id){
        cout << "parametried constuctor" << endl;
        this->name=name;
        this->id = id;
        distanceTravelled = 0;
    }
    ~car(){
        cout << "destructor called" << endl;
    }
    string getName(){
        return this->name;
    }
    string getId(){
        return id;
    }

    float getmileage();
    void travel(float);
    float getdistanceTravelled();
};

float car::getmileage() {
    return mileage;
}

void car::travel(float KmsTravelled){
    distanceTravelled += KmsTravelled;
}

float car::getdistanceTravelled(){
    return distanceTravelled;
}

int main(){
    car c1("carname","1234");
    car c2;
}