#include <iostream>
using namespace std;

/*
 * ENCAPSULATION
 *
 * Encapsulation means:
 * 1. Binding data and the methods that operate on that data
 *    together inside a single class.
 * 2. Restricting direct access to internal data and providing
 *    controlled access through public methods.
 *
 * In this example:
 *   speed        -> Data / State
 *   accelerate() -> Behaviour
 *   getSpeed()   -> Controlled access
 *
 * A real car does not allow us to directly manipulate its
 * internal speed. We interact with it through controls.
 */
class Car {
private:
    /*
     * Private data cannot be accessed directly from outside
     * the class.
     *
     * This protects the object's internal state from invalid
     * or uncontrolled modifications.
     */
    int speed = 0;

public:

    /*
     * Public method provides controlled access to the
     * internal speed.
     */
    int getSpeed() const {
        return speed;
    }

    /*
     * Behaviour that operates on the private data.
     *
     * Instead of allowing:
     *
     *     car.speed = 500;  // ❌ Direct access
     *
     * we control how speed changes through this method.
     */
    void accelerate() {
        speed += 20;
    }
};

int main() {

    Car car;

    // Interact with the object through its public interface.
    car.accelerate();
    car.accelerate();

    cout << "Speed: " << car.getSpeed() << " km/h\n";

    /*
     * Direct access is not allowed because speed is private:
     *
     * car.speed = 500;  // ❌ Compile-time error
     *
     * The class controls how its internal data can be accessed
     * or modified.
     */

    return 0;
}