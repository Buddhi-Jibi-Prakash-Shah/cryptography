#include <stdio.h>
#include <string.h>

int main()
{
    char message[100], key[100];
    char mac[100];
    int i;

    printf("Enter message: ");
    scanf("%s", message);

    printf("Enter secret key: ");
    scanf("%s", key);

    int mlen = strlen(message);
    int klen = strlen(key);

    /* Generate MAC */
    for(i = 0; i < mlen; i++)
    {
        mac[i] = message[i] ^ key[i % klen];
    }

    mac[mlen] = '\0';

    printf("Generated MAC: ");

    for(i = 0; i < mlen; i++)
    {
        printf("%02x", mac[i]);
    }

    printf("\n");

    return 0;
}

