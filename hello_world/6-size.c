#include <stdio.h>

int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;

printf("Size of char: %ld byte\n", sizeof(charType));
printf("Size of int: %ld bytes\n", sizeof(integerType));
printf("Size of long int %zu bytes\n", sizeof(long int));
printf("Size of long long int %zu bytes\n", sizeof(long long int));
printf("Size of float %zu bytes\n", sizeof(float));
return (0);

}
