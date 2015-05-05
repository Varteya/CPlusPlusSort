//
// Created by atamas on 05.05.15.
//

#include <fstream>
#include <iostream>
#include "CustomSort.h"


void sort (int* array, int size){
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size - 1; ++j){
            if (array[j] > array[j + 1]){
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

bool isSorted(int* array, int size){
    for (int i = 0; i < size - 1; i++){
        if (array[i] > array[i + 1]){
            return false;
        }
    }
    return true;
}

void print(int* array, int size){
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
}
