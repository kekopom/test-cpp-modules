export module CarType;
import std;

export enum class CarType { SEDAN, SUV, TRUCK, COUPE, CONVERTIBLE };

export std::ostream &operator<<(std::ostream &os, const CarType &p) {
  switch (p) {
  case CarType::SEDAN:
    return os << "Sedan";
  case CarType::SUV:
    return os << "SUV";
  case CarType::TRUCK:
    return os << "Truck";
  case CarType::COUPE:
    return os << "Coupe";
  case CarType::CONVERTIBLE:
    return os << "Convertible";
  }
  return os;
}
