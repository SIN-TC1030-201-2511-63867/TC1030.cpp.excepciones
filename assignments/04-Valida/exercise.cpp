#include <iostream>
#include <stdexcept>
#include <string>

int main() 
{
  int num;

  while (true) {
    std::cout << "Ingresa un número entre 1 y 5:";

    try {
      std::cin >> num;

      if (num < 1 || num > 5) {
        std::string mensaje=std::to_string(num) + " es un dato inválido";

        throw std::invalid_argument(mensaje);
      }
      break;
    }
    catch (std::invalid_argument &e) {
      std::cerr << "Ocurrio una excepcion: " << e.what() << "\n";
    }
  }

  std::cout << num << " si es un número entre 1 y 5" << "\n";
  return 0;
}
