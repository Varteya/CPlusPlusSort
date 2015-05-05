#include <iostream>
#include "CustomSort.h"

using namespace std;

int main() {
    int* test = new int[11];
    test[0] = 5;
    test[1] = 3;
    test[2] = 1;
    test[3] = 2;
    test[4] = 13;
    test[5] = 3;
    test[6] = 234;
    test[7] = 3;
    test[8] = 7;
    test[9] = -1;
    test[10] = 1;
    int size = 11;

    bool Sorted = isSorted(test, size);
    //print(test, size);
    sort(test, size);
    print(test, size);
    bool nowSorted = isSorted(test, size);


    return 0;
}