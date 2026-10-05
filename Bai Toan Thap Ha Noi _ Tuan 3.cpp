#include <stdio.h>

void hanoi(int n, char A, char B, char C) //A la goc, B la dich, C la trung gian
{
    if (n == 1)
    {
        printf("Chuyen dia 1 tu %c sang %c\n", A, B);
    }
    else
    {
        // Buoc 1: chuyen n-1 dia ben tren tu A sang C
        hanoi(n - 1, A, C, B);

        // Buoc 2: Chuyen dia lon nhat tu A sang B
        printf("Chuyen dia %d tu %c sang %c\n", n, A, B); 

        // Buo2c 3: Chuyen n-1 dia tu C sang B
        hanoi(n - 1, C, B, A);
    }
}
int main()
{
    int n;
    printf("Nhap so dia: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
