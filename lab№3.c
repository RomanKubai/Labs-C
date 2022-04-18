#include <stdio.h>
#include <ctype.h>

char capitalize(char m);
int main() {
    int i, a[] = {1, 3, 5, 6, 7};
    char arr[]={'a', 'b', 'c', 'd', 'e','f','h', 'r'};
    for(i=0; i<5; i++)
    {
       arr[a[i]]=capitalize(arr[a[i]]);
    }
    for(i=0; i<sizeof(arr); i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
   char capitalize(char n)
{
    n = toupper(n);
    return(n);
}