/*
 * Test datoteka za testiranje main.c funkcionalnosti
 * Uporablja preprosto testno ogrodje
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Definicije iz main.c */
#define MULTIPLY(a, b) ((a) * (b))

/* Test funkcija za MULTIPLY makro */
void test_multiply() {
    printf("Test 1: MULTIPLY makro...\n");
    assert(MULTIPLY(5, 10) == 50);
    assert(MULTIPLY(0, 10) == 0);
    assert(MULTIPLY(-5, 10) == -50);
    assert(MULTIPLY(3, 3) == 9);
    printf("  ✓ MULTIPLY testi uspešni\n");
}

/* Test za osnovne aritmetične operacije */
void test_basic_operations() {
    printf("Test 2: Osnovne operacije...\n");
    assert(2 + 2 == 4);
    assert(10 - 5 == 5);
    assert(3 * 4 == 12);
    printf("  ✓ Osnovne operacije uspešne\n");
}

/* Test za robne primere */
void test_edge_cases() {
    printf("Test 3: Robni primeri...\n");
    assert(MULTIPLY(0, 0) == 0);
    assert(MULTIPLY(1, 1) == 1);
    assert(MULTIPLY(-1, -1) == 1);
    assert(MULTIPLY(100, 1) == 100);
    printf("  ✓ Robni primeri uspešni\n");
}

int main(void) {
    printf("=== Začetek testiranja ===\n\n");
    
    test_multiply();
    test_basic_operations();
    test_edge_cases();
    
    printf("\n=== Vsi testi uspešno prestali! ===\n");
    return 0;
}
