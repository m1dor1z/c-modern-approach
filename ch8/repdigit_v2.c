#include <stdio.h>

int main(void)
{
    int occurrences[10] = {0};
    int i, digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);


    while (n > 0)
    {
        digit = n % 10;
        occurrences[digit]++;
        n /= 10;
    }

    printf("Digit:\t\t");
    for(i = 0; i < 10; i++)
        printf("%d ", i);

    printf("\n");

    printf("Occurrences:\t");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", occurrences[i]);
    }

    printf("\n");
}