// Считать массив из 10 элементов и отобрать в другой массив все числа, у
// которых вторая с конца цифра (число десятков) – ноль.
#include <stdio.h>
#include <locale.h>

void Dec0(int a[], int res[], int size)
{
    int j = 0;
    for (int i = 0; i<size; i++)
    {
        if ((a!=0)&&((a[i]/10)%10 == 0))
        {
            res[j] = a[i];
            j++;
        }
    }

}
int input_arr(int a[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        if ((a[i]!=0)&&((a[i]/10)%10 == 0)) count++;
    }
    return count;
}

 int main (void)
 {
    setlocale(LC_ALL, "Rus");
    enum {ARR_SIZE = 10};
    int arr[ARR_SIZE];
    int size_res;
    printf("Введите %d целых чисел через пробел:", ARR_SIZE);
    size_res = input_arr(arr, ARR_SIZE);
    int res[size_res];
    Dec0(arr, res, ARR_SIZE);
    printf("Числа, у которых вторая с конца цифра (число десятков) – ноль:\n");
    
    for(int i = 0; i<size_res; i++)
    {
       printf("%d\t", res[i]);
    }
    return 0;
 }