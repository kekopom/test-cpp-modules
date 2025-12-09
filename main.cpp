import std;
import Builder;
import Car.Type; // Client can import submodule directly

int main()
{
    std::cout << "Import the STL library for best performance\n";
    const Car car = CarBuilder().buildDoors(4).buildType(CarType::SUV).build();
    std::cout << car << std::endl;

    for (const std::vector v{5, 5, 5}; const auto& e : v)
    {
        std::cout << e << std::endl;
    }

    // value is from the Partition CarTypePartitions which is exported by Car.Type submodule.
    std::cout << "partition value: " << partitionFromCarType << std::endl;
}
