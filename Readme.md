# 🎉 SimpleMath Library 🎉

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)](https://shields.io)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

Welcome to **SimpleMath**, a C++ library providing basic arithmetic operations, trigonometric functions, and advanced mathematical functions. 🌟

## 📚 Features
- 🔢 Basic arithmetic operations: `add`, `subtract`, `multiply`, `divide`
- 📐 Trigonometric functions: `sine`, `cosine`, `tangent`
- 🚀 Advanced mathematical functions: `power`, `squareRoot`

## 📂 Project Structure
```plaintext
SimpleMath/
├── include/
│   └── simplemath.h       <-- Header file
├── src/
│   └── simplemath.cpp     <-- Source file
├── tests/
│   └── main.cpp           <-- Test program
├── CMakeLists.txt         <-- CMake configuration file
└── README.md              <-- Project documentation
```
## 🚀 Getting Started
Follow these steps to get started with the SimpleMath library:

1. Clone the Repository
```sh
git clone https://github.com/aditya26062003/SimpleMath.git
cd SimpleMath
```
2. Create a Build Directory
```sh
mkdir build
cd build
```
3. Generate Build Files with CMake
```sh
cmake ..
```
4. Build Your Project
```sh
cmake --build .
```
5. Run the Test Program
```sh
./test_program
```
## 📄 Example Usage
Here's an example of how to use the SimpleMath library:

```cpp
#include <iostream>
#include "simplemath.h"

int main() {
    using namespace SimpleMath;

    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;
    std::cout << "5 / 3 = " << divide(5, 3) << std::endl;

    std::cout << "sin(30) = " << sine(30 * M_PI / 180) << std::endl;
    std::cout << "cos(30) = " << cosine(30 * M_PI / 180) << std::endl;
    std::cout << "tan(30) = " << tangent(30 * M_PI / 180) << std::endl;

    std::cout << "2^3 = " << power(2, 3) << std::endl;
    std::cout << "sqrt(16) = " << squareRoot(16) << std::endl;

    return 0;
}
```
## output :- 
![output](https://github.com/aditya26062003/SimpleMath/blob/main/test_output.jpg)
## 📜 License
This project is licensed under the MIT License - see the [LICENSE](https://github.com/aditya26062003/SimpleMath/blob/main/LICENSE) file for details.

<!--## 🙌 Contributing
Contributions are welcome! Please open an issue or submit a pull request for any changes.

## 🛠️ Built With
* C++
* CMake

Made with ❤️ by Aditya Singh
