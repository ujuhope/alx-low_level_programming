#include <stdio.h>

/**
* in_the_beginning - function that prints before main executes
* Return: nothing
*/
void __attribute__((constructor)) in_the_beginning()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
