// Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
#include <stdio.h>
#include <locale.h>

int minArr(int a[], int size){
    int min = a[0];
    for (int i = 1; i<size; i++){
        if (a[i]<min) min = a[i];
    }
    return min;
}


 int main (void)
 {
    setlocale(LC_ALL, "Rus");
    enum {arr_size = 5};
    int arr[arr_size];
    printf("Введите 5 целых чисел через пробел:");
    for (int i = 0; i<arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Минимальный элемент введенного массива: %d", minArr(arr, arr_size));
    return 0;
 }