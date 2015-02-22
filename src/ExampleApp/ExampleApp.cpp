#include <iostream>
#include "ExampleLib/ExampleObj.h"

int main(int argc, char** argv) {
  auto obj = new ::ExampleLib::ExampleObj(2);

  std::cout << "2 multiplied by 5 is" << obj.multiplyByFactor(5) << std::endl;
}
