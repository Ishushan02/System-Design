#include<iostream>
using namespace std;

class Car{

    protected:
        int wheels;
        int extratyres;

    public:
        string model;
        string name;

    Car(string model, string name){
        this->model = model;
        this->name = name;
        wheels = 4;
        extratyres = 2;
    }

    void startCar(){
        cout << "Start the Car: " << endl;
    }

    void stopCar(){
        cout << "Stop the Car: " << endl;
    }

    virtual void accelerate() = 0;
    virtual void decelerate() = 0;
};


class Electric: public Car{
    public:
        int maxSpeed;

        Electric(int maxSpeed, string model, string name):Car(model, name){
            this->maxSpeed = maxSpeed;
        }

    void accelerate(){
        cout << "Accelerate with a static speed of 30 km/hr " << endl;
    }

    void decelerate(){
        cout << "Decelerate with a static speed of 30 km/hr " << endl;
    }

};


class SportsCar: public Car{
    public:
        int maxSpeed;

        SportsCar(int maxSpeed, string model, string name):Car(model, name){
            this->maxSpeed = maxSpeed;
        }

    void accelerate(){
        cout << "Accelerate with a static speed of 30 km/hr " << endl;
    }

    void accelerate(int speed){
        cout << "Accelerate with a dynami speed of " << speed << "  km/hr " << endl;
    }

    void decelerate(){
        cout << "Decelerate with a static speed of 30 km/hr " << endl;
    }

    void decelerate(int speed){
        cout << "Decelerate with a dynami speed of " << speed << "  km/hr " << endl;
    }

};


int main(){


    cout << "This is Method Overloadind wherein we can have dynamic Params sent " << endl;
    SportsCar* sc = new SportsCar(300, "GTR", "Mercedes");
    sc->startCar();
    sc->accelerate(); 
    sc->accelerate(50); 
    sc->decelerate();
    sc->decelerate(30);
    sc->stopCar();

    cout << "This is Method Overriding wherein we can have dynamic Methods declared in parent Class and used as we like in Child CLass " << endl;
    Electric* ec = new Electric(200, "Model S", "Tesla");
    ec->startCar();
    ec->accelerate();
    ec->decelerate();
    ec->stopCar();
    
}