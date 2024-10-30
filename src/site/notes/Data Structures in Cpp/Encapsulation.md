---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/encapsulation/","noteIcon":"1"}
---

---
**Encapsulation** encloses data and functionality into a single unit (called a **class**):

![encapsulation.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/encapsulation.png)
In C++, data and functionality are separated into two separate protections: **public** and **private**.

![encapsulationPrivatePublic.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/encapsulationPrivatePublic.png)
### Public vs Private

The protection level determines the access that "client code" has to the member data or functionality:

- **Public** members _can_ be accesses by client code.
- **Private** members _cannot_ be accessed by client code (only used within the class itself).
---

### Encapsulation \# 2

In C++, the [[Data Structures in Cpp/C++ Header File (.h)\| interface]] (.h file) to the class is defined separately from the **implementation** (.cpp file).

