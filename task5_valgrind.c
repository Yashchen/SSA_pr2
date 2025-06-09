#include <stdlib.h>
int main() {
    int *arr = malloc(100 * sizeof(int));
    arr[0] = 123;
    return 0;
}