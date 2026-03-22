#include <stdio.h>

#define MULTIPLY(a, b) ((a) * (b))

#ifdef DEBUG
    #define MESSAGE "Debug mode active"
#else
    #define MESSAGE "Production mode active"
#endif

void print_result(int res) {
    printf("Result: %d\n", res);
}

int main(void) {
    int x = 5;
    int y = 10;
    int result = MULTIPLY(x, y);

    printf("%s\n", MESSAGE);
    print_result(result);

    return 0;
}
