#include<stdio.h>
#include<math.h>

long int power(long int a, long int b, long int p)
{
    long int result = 1;
    a = a % p;

    while(b > 0)
    {
        result = (result * a) % p;
        b--;
    }

    return result;
}

int main()
{
    long int P, G, a, b;
    long int A, B;
    long int keyA, keyB;

    printf("Enter prime number (P): ");
    scanf("%ld", &P);

    printf("Enter primitive root (G): ");
    scanf("%ld", &G);

    printf("Enter private key of User A: ");
    scanf("%ld", &a);

    printf("Enter private key of User B: ");
    scanf("%ld", &b);

    A = power(G, a, P);
    B = power(G, b, P);

    printf("Public key of A: %ld\n", A);
    printf("Public key of B: %ld\n", B);

    keyA = power(B, a, P);
    keyB = power(A, b, P);

    printf("Shared secret key for A: %ld\n", keyA);
    printf("Shared secret key for B: %ld\n", keyB);

    return 0;
}
