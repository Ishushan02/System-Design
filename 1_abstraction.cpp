/*
    The main work of Abstraction is to hide the Data from other classes. 
*/

#include<iostream>
#include<string>

using namespace std;

// We use Virtual Classes because such that we can define its child classes whenever as per requirement

class Car {
public:
    virtual void startCar() = 0;
    virtual void accelerateCar() = 0;
    virtual void decelerateCar() = 0;
    virtual void stopCar() = 0;
    virtual void shutEngine() = 0;
};



class SportsCar : public Car {
public:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;

    SportsCar(string brand, string model){
        this->brand = brand;
        this->model = model;
        isEngineOn = false;
        currentSpeed = 0;
        currentGear = 0;
    }

    void startCar(){
        cout << " Starting the Engine of the Car " << endl;
        isEngineOn = true;
    }

    void accelerateCar(){
        currentSpeed += 20;
        cout << "Car is Accelerating at the speed of: " << currentSpeed << endl;
    }

    void decelerateCar(){
        currentSpeed -= 20;
        cout << "Car is Decelerating ans is currently at the speed of: " << currentSpeed << endl;
    }

    void stopCar(){
        isEngineOn = false;
        cout << "Car is Stopped " << endl;
    }

    void shutEngine(){
        cout << "Shutting the Engine of the Car" << endl;
    }

};

int main(){
    Car* carObj = new SportsCar("Ford", "Mustang");

    carObj->startCar();
    carObj->accelerateCar();
    carObj->decelerateCar();
    carObj->stopCar();
    carObj->shutEngine();
}