---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/writing-a-c-program/c-classes/","noteIcon":"1"}
---

---
**C++ classes** encapsulate data and associated functionality into an **object**:

![classObject.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/classObject.png)

```c++
class Cube {
	public:
		double getVolume();
		// ...
		
	private:
		double length_;
};
```


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/writing-a-c-program/encapsulation/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




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

In C++, the [[Data Structures in Cpp/Writing a C++ Program/C++ Header File (.h)\| interface]] (.h file) to the class is defined separately from the [[ C++ Implementation File (.cpp)\| implementation]] (.cpp file).



</div></div>


