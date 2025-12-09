export module Builder;
export import Car.Type;
export import Car;

export class CarBuilder
{
public:
    CarBuilder buildDoors(const int numberOfDoors)
    {
        car.setNumberOfDoors(numberOfDoors);
        return *this;
    }

    CarBuilder buildType(const CarType type)
    {
        car.setType(type);
        return *this;
    }

    Car& build() { return car; }

private:
    Car car{};
};
