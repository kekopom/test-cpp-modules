export module Car;
import Car.Type; // exemple of submodule. Client can import it without importing the whole Car module.
import std;

export class Car
{
public:
    void setNumberOfDoors(const int doors) { numberOfDoors = doors; }
    void setType(const CarType carType) { type = carType; }

    [[nodiscard]] CarType getType() const { return type; }
    [[nodiscard]] int getNumberOfDoors() const { return numberOfDoors; }

private:
    int numberOfDoors{0};
    CarType type{};
};

export std::ostream& operator<<(std::ostream& os, const Car& c)
{
    return os << "Car type: " << c.getType()
        << ", Number of doors: " << c.getNumberOfDoors();
}
