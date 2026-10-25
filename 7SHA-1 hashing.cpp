#include <stdio.h>
#include <string.h>

unsigned int simple_hash(char *msg)
{
    unsigned int hash = 0;
    int i;

    for(i = 0; msg[i] != '\0'; i++)
    {
        hash = hash * 31 + msg[i];
    }

    return hash;
}

int main()
{
    char message[100];
    unsigned int hash;

    printf("Enter message: ");
    scanf("%s", message);

    hash = simple_hash(message);

    printf("SHA-1 Hash (simulated): %u\n", hash);

    return 0;
}
