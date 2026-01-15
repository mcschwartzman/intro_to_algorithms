
#include "Sorting.h"

Sorting::Sorting(){

}

std::vector<int> insert_sort(std::vector<int> input_arr){

    std::vector<int> result = input_arr;

    for (int i; i = 1; i < result.size()){
        
        int key = result[i];

        int j = i - 1;

        while (j >= 0) and (result[j] > key){

            result[j + 1] = result[j];
            j = j - 1;

        }

        result[j + 1] = key;
    }

}