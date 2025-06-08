/*
    The main work of Encapsulation is to protect the Data from other methods. 
*/

#include<iostream>
#include<string>

using namespace std;



class SportsCar {
private:
    int tyres;
    int wheels;

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
        tyres = 2;
        wheels = 4;
    }

    void startCar(){
        cout << " Starting the Engine of the Car " << endl;
        isEngineOn = true;
    }

    void gettyres(){
        cout << "This many tyres: " << tyres << endl;
    }

    void settyres(int tyre){
        tyres = tyre;
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
    SportsCar* carObj = new SportsCar("Ford", "Mustang");

    carObj->startCar();
    carObj->accelerateCar();
    carObj->decelerateCar();
    carObj->stopCar();
    carObj->shutEngine();

    carObj->brand = "Volkswagen";
    // carObj->tyres = 3; not accessible

    carObj->gettyres();
    carObj->settyres(10);
    carObj->gettyres();
    // Private methods and Objects can only be accessible via getters and setters

}