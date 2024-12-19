#include<stdio.h>

long long int g_data = 0x8877665544332211;

int main(void){
    int *pAddress = (int*)&g_data;

    printf("value of pAddress %p is %x\n", pAddress, *pAddress);

    pAddress = pAddress + 1;

    printf("value of pAddress %p is %x\n", pAddress, *pAddress);
}