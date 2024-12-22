#include "parityarray.h"

int main(void) {
    ParityArray parityArray;
    InitParityArray(&parityArray, 3);

    InsertToParityArray(&parityArray, 1);
    InsertToParityArray(&parityArray, 3);
    InsertToParityArray(&parityArray, 2);

    PrintParityArray(&parityArray);

    // ---

    InitParityArray(&parityArray, 10);

    for (int i = 0; i < 10; ++i) {
        InsertToParityArray(&parityArray, i + 1);
    }

    PrintParityArray(&parityArray);

    return 0;
}
