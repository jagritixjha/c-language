#include <stdio.h>
#include <conio.h>

void main()
{
  int value = 42;
  int *ptr1 = &value;
  int **ptr2 = &ptr1;

  printf("2227010701049\n");
  printf("Value: %d\n", value);
  printf("Address of value: %p\n", &value);
  printf("Pointer to value: %p\n", ptr1);
  printf("Address of pointer to value: %p\n", &ptr1);
  printf("Pointer to pointer to value: %p\n", ptr2);
  printf("Value of pointer to pointer to value: %p\n", *ptr2);
  printf("Value of value using pointer to pointer to value: %d\n", **ptr2);
  getch();
}
