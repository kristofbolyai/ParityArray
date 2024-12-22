//
// Created by Kristóf Kovács on 2024. 12. 12..
//

#include "parityarray.h"

#include <stdio.h>
#include <stdlib.h>

int InitParityArray(ParityArray* parityArray, const unsigned int max_size) {
    parityArray->max_size = max_size;

    parityArray->array_pointer = malloc(max_size * sizeof(int));

    parityArray->even_idx = 0;
    parityArray->odd_idx = max_size - 1;

    return parityArray->array_pointer == NULL ? 1 : 0;
}

int InsertToParityArray(ParityArray* parityArray, const int item) {
    if (parityArray->even_idx > parityArray->odd_idx) return 1;

    if (item % 2 == 0) {
        parityArray->array_pointer[parityArray->even_idx] = item;
        parityArray->even_idx += 1;
    } else {
        parityArray->array_pointer[parityArray->odd_idx] = item;
        parityArray->odd_idx -= 1;
    }

    return 0;
}

void PrintParityArray(const ParityArray* parityArray) {
    if (parityArray->array_pointer == NULL) return;

    for (unsigned int i = 0; i < parityArray->even_idx; ++i) {
        const int value = parityArray->array_pointer[i];

        printf("%d ", value);
    }

    for (unsigned int i = parityArray->odd_idx + 1; i < parityArray->max_size; ++i) {
        const int value = parityArray->array_pointer[i];

        printf("%d ", value);
    }

    printf("\n");
}

void DisposeParityArray(ParityArray* parityArray) {
    free(parityArray->array_pointer);

    parityArray->max_size = 0;
    parityArray->even_idx = 0;
    parityArray->odd_idx = 0;
}
