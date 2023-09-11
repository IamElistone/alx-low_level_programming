#include <stdio.h>

/**
 * main -size of many various types
 *
 * Return: 0 on success
 */

int main(void)
{
printf("size of a char: %lu 1 byte(s)", sizeof(char));
printf("size of int: %lu 4 byte(s)", sizeof(int));
printf("size of a long int: %lu 4 byte(s)", sizeof(long int));
printf("size of a long long int: %lu 8 byte(s)", sizeof(long long int));
printf("size of a float: %lu 4 bytes(s)", sizeof(float));
return (0);

printf("size of a char: %lu 1 byte(s)", sizeof(char));
printf("size of int: %lu 4 byte(s)", sizeof(int));
printf("size of a long int: %lu 8 byte(s)", sizeof(long int));
printf("size of a long long int: %lu 8 byte(s)", sizeof(long long int));
printf("size of a float: %lu 4 bytes(s)", sizeof(float));
return (0);
}
