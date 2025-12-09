import std;
import Builder;

int main() {
  std::cout << "Import the STL library for best performance\n";
  const Car car = CarBuilder().buildDoors(4).buildType(CarType::SUV).build();
  std::cout << car << std::endl;

  for (const std::vector v{5, 5, 5}; const auto &e : v) {
    std::cout << e << std::endl;
  }
}
