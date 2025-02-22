---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/holder/"}
---

---

_C language_
```C
#include <stdio.h>
#include <string.h>

struct Human{
	char name[30];
	int age;
	struct {
		char street[30];
		int number;
		char city[30];
	};
	float height;
};

int main(){
	struct Human juan;
	strcpy(juan.name, "juan");
	juan.age = 30;
	strcpy(juan.street, "Av. Jazmines");
	juan.number = 752;
	strcpy(juan.city, "Lima");
	juan.height = 1.75;

	printf("Name: %s\n", juan.name);
	printf("Address: %s %d %s\n", juan.street, juan.number, juan.city);
}
```

---
