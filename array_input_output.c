#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("Please enter the count: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}