#include <iostream>
using namespace std;

/*
 * ABSTRACTION
 *
 * Abstraction exposes WHAT an object can do while hiding
 * HOW it performs that operation.
 *
 * Car        -> Abstract interface (WHAT)
 * SportsCar  -> Concrete implementation (HOW)
 *
 * Example:
 * A driver knows that a car can start, accelerate and brake,
 * but does not need to know how these operations work internally.
 */
class Car {
public:

    // Pure virtual functions define WHAT a Car can do.
    virtual void startEngine() = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;

    // Virtual destructor allows safe deletion through Car*.
    virtual ~Car() = default;
};


/*
 * SportsCar provides the actual HOW/implementation
 * for the behaviours defined by Car.
 */
class SportsCar : public Car {
private:
    int speed = 0;  // Internal implementation detail

public:

    /*
     * override means:
     * "This function is overriding the virtual function
     * declared in the parent class (Car)."
     *
     * It also tells the compiler to verify that we are
     * actually overriding a parent function.
     */
    void startEngine() override {
        cout << "Engine Started\n";
    }

    // Overrides Car::accelerate() and defines HOW it works.
    void accelerate() override {
        speed += 20;
        cout << "Speed: " << speed << " km/h\n";
    }

    // Overrides Car::brake() and defines HOW it works.
    void brake() override {
        speed -= 20;

        if (speed < 0)
            speed = 0;

        cout << "Speed: " << speed << " km/h\n";
    }
};

int main() {

    /*
     * Car is an abstract class, so we cannot create:
     *
     *     Car car;  // ❌ Not allowed
     *
     * We create a SportsCar object and access it through
     * the Car interface.
     */
    SportsCar sportsCar;
    Car* car = &sportsCar;

    /*
     * Client only knows WHAT the car can do.
     * SportsCar internally handles HOW it does it.
     */
    car->startEngine();
    car->accelerate();
    car->brake();

    return 0;
}