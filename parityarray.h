//
// Created by Kristóf Kovács on 2024. 12. 12..
//

#ifndef PARITYARRAY_H
#define PARITYARRAY_H

typedef struct ParityArray {
    unsigned int max_size;

    int* array_pointer;

    unsigned int even_idx;
    unsigned int odd_idx;
} ParityArray;

int InitParityArray(ParityArray*, unsigned int);

int InsertToParityArray(ParityArray*, int);

void PrintParityArray(const ParityArray*);

void DisposeParityArray(ParityArray*);

#endif // PARITYARRAY_H
