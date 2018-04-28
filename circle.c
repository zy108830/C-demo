#include <stdio.h>

void sort(int sort_arr[]);

int first(int arr[], int arr_length);

int main() {
    int origin_arr[] = {6, 2, 5, 8, 3, 4, 1, 7, 9};
    int sort_arr[]={};
    int len= sizeof(origin_arr)/ sizeof(int);
    for (int i = 0; i < len; i++) {

    }
}

int * sort_arr(int sort_arr[]) {
    int arr[] = {};
    for (int i = 0; i < sizeof(sort_arr); i++) {
        printf("%d\n", sort_arr[i]);
    }
    return arr;
}

int first(int arr[], int arr_length) {
    int first = arr[0];
    for (int i = 0; i < arr_length; i++) {
        if (arr[i] > first) {
            first = arr[i];
        }
    }
    return first;
}