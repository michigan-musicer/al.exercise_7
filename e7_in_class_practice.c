#include "e7_in_class_practice.h"

// int* ptr_to_integer = &some_int;
// double* ptr_to_double = &some_double;
// char* string = "hello";
// int** ptr_to_integer_ptr = &ptr_to_integer;

// int main()(){
//     int x = 5;
//     int* ptr_to_x = &x;
//     printf("Value of x is %d\n", *ptr_to_x); // prints 5
//     *ptr_to_x = 10;
//     printf("Value of x is %d\n", *ptr_to_x); // prints 10
// }

// int f(int x) {
//     int y = 7;
//     x = 5;
//     return y;
// }

// int main() {
//     int x = 9;
//     int y = f(x);
//     printf("x has value %d, y has value %d\n", x, y);
// }

// int f(int* x) {
//     int y = 7;
//     *x = 5;
//     return y;
// }

// int main() {
//     int x = 9;
//     int y = f(&x);
//     printf("x has value %d, y has value %d\n", x, y);
// }

// int main() {
//     int arr[] = {0, 1, 2, 3};
//     printf("%d is the same as %d\n", *arr, arr[0]);
//     printf("%d is the same as %d\n", *(arr + 1), arr[1]);
// }

// int* f() {
//     int x = 5;
//     return &x;
// }

// int main() {
//     int* x_ptr = f();
//     printf("value of x is %d\n", *x_ptr);
// }

// int* f() {
//     int* x_ptr = malloc(4);
//     *x_ptr = 5;
//     return x_ptr;
// }

// int main() {
//     int* x_ptr = f();
//     printf("value of x is %d\n", *x_ptr);
//     free(x_ptr);
// }

// int main() {
//     int* x = malloc(4); // int is 4 bytes on my machine
//     free(x);
// }

// int main() {
//     int* arr = malloc(20); // 5 ints
//     for (size_t i = 0; i < 5; ++i) {
//         arr[i] = i + 10;
//     }
//     for (size_t i = 0; i < 5; ++i) {
//         printf("element %lu is %d\n", i, arr[i]);
//     }
//     free(arr);
// }
