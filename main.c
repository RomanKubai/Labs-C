#include <stdio.h>
#define size 8

int arr[size];

int dominator() 
{
    int dom, temp, tempCount, half, count = 1;
    half = size / 2;

    for (int i = 0; i < size; i++)
    {
        tempCount = 0;
        temp = arr[i];
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == temp)
            {
                tempCount++;
                if (tempCount > count)
                {
                    dom = temp;
                    count = tempCount;
                }
            }
        }
    }

    if (count > half) return dom;
    else return -1;
}

void print() 
{
    printf_s("%d", dominator());
}

int main() 
{
    
    for (int i = 0; i < size; i++) 
    {
       printf_s("arr[%d]=", (i+1));
       scanf_s("%d", &arr[i]);
       if (arr[i]<0)  
       { 
           printf_s("Enter only a positive value!");
           printf_s("\narr[%d]=", (i+1));
           scanf_s("%d", &arr[i]);
       }
    }

    print();

}
