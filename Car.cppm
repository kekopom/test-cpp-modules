export module Car;
export import CarType;
import std;

export class Car {
public:
  void setNumberOfDoors(int doors) { numberOfDoors = doors; }
  void setType(CarType carType) { type = carType; }

  CarType getType() const { return type; }
  int getNumberOfDoors() const { return numberOfDoors; }

private:
  int numberOfDoors;
  CarType type{};
};

export std::ostream &operator<<(std::ostream &os, const Car &c) {
  return os << "Car type: " << c.getType()
            << ", Number of doors: " << c.getNumberOfDoors();
}
