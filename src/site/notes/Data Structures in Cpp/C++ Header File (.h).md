---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-header-file-h/","noteIcon":"1"}
---

---
A header file (.h) defines the interface to the class, which includes:

- Declaration of **all** member values.
- Declaration of **all** member functions.

`cpp-class/Cube.h`
```c++
#pragma once

class Cube {
	public:
		double getVolume();
		double getSurfaceArea();
		void setLength(double length);
		
	private:
		double length_;
};
```