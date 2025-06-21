import std;
import Builder;

int main() {
  std::cout << "Import the STL library for best performance\n";
  Car car = CarBuilder().buildDoors(4).buildType(CarType::SUV).build();
  std::cout << car << std::endl;

  std::vector<int> v{5, 5, 5};
  for (const auto &e : v) {
    std::cout << e << std::endl;
  }
}
