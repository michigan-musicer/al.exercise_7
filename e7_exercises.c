#include "e7_exercises.h"

// Part 1. Warmup

// Fill in the following function so that it returns an 
// array of chars (a string) that is dynamically allocated.

// NOTE: this function allocates a string dynamically.

// NOTE: recall that all strings in C are terminated by an additional 
//       null character ('\0').

char* create_string(char* src, size_t len) {
    char* str = NULL;
    // add code here



    // do not remove code after this point!
    strcpy(str, src);
    return str;
}

// Fill in the following function so that victim is freed from
// dynamic memory.
void delete_string(char* victim) {
    // add code here

}

// Examine the following programs and determine if calling them 
// will cause errors. If there is an error, explain why
// the error occurs. I recommend writing your answers out.
// If you would like to test these functions, add a function 
// call to the main function below.

void f1() {
    int x = 100;
    int* x_ptr = &x;
    printf("x at address %x has value %d\n", x_ptr, x);
    free(x_ptr);
}

void f2() {
    int* x_ptr = malloc(4);
    *x_ptr = 8;
    printf("value at address %x is %d\n", x_ptr, *x_ptr);
}

void f3() {
    int* x_ptr = malloc(4);
    *x_ptr = 8;
    printf("value at address %x is %d\n", x_ptr, *x_ptr);
    free(x_ptr);
}

void f4() {
    int* x_ptr = malloc(2);
    *x_ptr = 8;
    printf("value at address %x is %d\n", x_ptr, *x_ptr);
    free(x_ptr);
}

void f5() {
    int* x_ptr = malloc(4);
    *x_ptr = 8;
    printf("value at address %x is %d\n", x_ptr, *x_ptr);
    free(x_ptr);
    free(x_ptr);
}

void f6() {
    int* x_ptr = malloc(4);
    *x_ptr = 8;
    printf("value at address %x is %d\n", x_ptr, *x_ptr);
    free(x_ptr);
    *x_ptr = 100;
    printf("value at address %x is %d\n", x_ptr, *x_ptr);
}

void f7() {
    char* str = malloc(5);
    strcpy(str, "hello");
    printf("string contents: %s\n", str);
    free(str);
}

// filled in to allow you to test warmup functions.
// Add function calls to f1, f2... if you would like to 
// see what happens when those functions run.
int main() {
    char* test = "Hello";
    char* copy = create_string(test, strlen(test));
    printf("test is %s, copy is %s\n", test, copy);
    delete_string(copy);
}
