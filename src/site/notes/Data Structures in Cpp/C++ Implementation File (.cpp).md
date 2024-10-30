---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-implementation-file-cpp/","noteIcon":"1"}
---

---
An implementation file (.cpp) contains the code to implement the class (or other C++ code).

`cpp-class/Cube.cpp`
```c++
#include "Cube.h"            // << Header file

double Cube::getVolume(){                // << Define method
	return length_ * length_ * length_;
}

double Cube::getSurfaceArea(){           // << Define method
	return 6 * length_ * length_;
}

void Cube::setLength(double length){      // << Define method
	length_ = length;
}
```

The `#include "Cube.h"` adds the library where the **Cube** class, with its methods and variables (or members).

You might have spotted the `::` syntax; in short, this means that the `getVolume()` function ___belongs___ to the `Cube` class. 

---
### Let's make a program with our class!

`cpp-class/main.cpp`
```c++
#include "Cube.h"            // << Header file

int main(){                  // Staring point of all C++ programs
	Cube c;

	c.setLength(3.48);
	double volume = c.getVolume();
	std::cout << "Volume: " << volume << std::endl;

	return 0;
}
```