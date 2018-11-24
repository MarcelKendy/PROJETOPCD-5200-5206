#include <stdio.h>
#include <thread>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
# define arraySize 1000000

void buid_array(int seed, int* array){
    for(int i = 0; i < arraySize; i++){
        array[i] = rand() % arraySize + 1;
    }
}

void print_array(int seed, int* array, const char file[]){
    FILE *fp = fopen(file, "w");

    for(int i = 0; i < arraySize; i++){
        fprintf(fp, "ARRAY%d[%d]: %d\n", seed, i, array[i]);
    }

    fclose(fp);
    fp = nullptr;
}

void insertion_sort(int* array){
    int i, key, j;
    for (i=1; i<arraySize; i++){
        key = array[i];
        j = i-1;

        while ((j>=0) && (array[j]>key)){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
        cout << key << endl;
    }
}

int main(){
   clock_t t = clock();
   int *array1 = new int[arraySize];
   int *array2 = new int[arraySize];

    thread t1(buid_array, 1, array1);
    thread t2(buid_array, 2, array2);
    t1.join();
    cout << "thread 1 (create random array1) finished!" << endl;
    t2.join();
    cout << "thread 2 (create random array2) finished!" << endl;

    thread t3(print_array, 1, array1, "original_array_1.txt");
    thread t4(print_array, 2, array2, "original_array_2.txt");
    t3.join();
    cout << "thread 3 (writing random array1) finished!" << endl;
    t4.join();
    cout << "thread 4 (writing random array2) finished!" << endl;

    thread t5(insertion_sort, array1);
    thread t6(insertion_sort, array2);
    t5.join();
    cout << "thread 5 (sorting random array1) finished!" << endl;
    t6.join();
    cout << "thread 6 (sorting random array2) finished!" << endl;

    thread t7(print_array, 1, array1, "ordered_array_1.txt");
    thread t8(print_array, 2, array2, "ordered_array_2.txt");
    t7.join();
    cout << "thread 7 (writing ordered array1) finished!" << endl;
    t8.join();
    cout << "thread 8 (writing ordered array2) finished!" << endl;
    t = clock() - t;
    cout << "It took " << ((float)t)/CLOCKS_PER_SEC << " seconds to execute this algorithm!" << endl;
    return 0;
    // 938.617 intel core i7 ssd 8gb ram
}
