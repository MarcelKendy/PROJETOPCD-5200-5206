//Passo 01 - Sequencial
//Ezequiel - Marcel


#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define arraySize 1000000 

int* initialize_array(){
    return malloc(arraySize * sizeof(int));
}

void build_array(int seed, int array[]){
    srand(seed);
	int i;
    for(i=0; i<arraySize; i++){
        array[i] = rand() % arraySize + 1; 
    }
}

void print_array(int seed, int array[], char fileName[]){
    FILE *fp;
    fp = fopen(fileName, "w");
	int i;
    for(i=0; i<arraySize; i++){
        fprintf(fp, "ARRAY%d[%d]: %d\n", seed, i, array[i]);
    }

    fclose(fp);
}

void insertion_sort(int array[]){
    int i, key, j;
    for (i=1; i<arraySize; i++){
        key = array[i];
        j = i-1;

        while ((j>=0) && (array[j]>key)){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;

        printf("%d\n", i);
    }
}

int main(){
    int *array1 = initialize_array();
    int *array2 = initialize_array();

    build_array(1, array1);
    build_array(2, array2);

    print_array(1, array1, "original_array_1.txt");
    print_array(2, array2, "original_array_2.txt");

    insertion_sort(array1);
    insertion_sort(array2);

    print_array(1, array1, "ordered_array_1.txt");
    print_array(2, array2, "ordered_array_2.txt");

	clock_t t = clock();
	t = clock() - t;
	printf ("%f",((float)t)/CLOCKS_PER_SEC);
	
    return 0;
}
