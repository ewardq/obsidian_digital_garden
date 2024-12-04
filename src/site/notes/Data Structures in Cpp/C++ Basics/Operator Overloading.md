---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/operator-overloading/"}
---

---

==Customizes the C++ operands of user-defined types.==

Overloaded operators are [[functions\|functions]] with special function names:
> [! Tip] Syntax
>  `operator` op           ----    Overloaded operator
>  
>  `operator` type        ----    User-defined conversion function
>  
>  `operator` new        ----    Allocation function
>  `operator` new []    ----    
>  
>  `operator` delete     ----    Deallocation function
>  `operator` delete [] ----

from [operator overloading - cppreference.com](https://en.cppreference.com/w/cpp/language/operators)

---
## Example of Operator Overloading
If we want to define a new operation where two objects can be summed together (in this case, complex numbers), we can overload the `+` operator as follows:

```C++
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const& obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main(){
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}
```
This example was extracted from [Operator Overloading in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/operator-overloading-cpp/)

