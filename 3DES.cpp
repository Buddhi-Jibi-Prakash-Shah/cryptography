#include <stdio.h>
#include <string.h>

int main()
{
    char plaintext[100], key[100], ciphertext[100], decrypted[100];
    int i;

    printf("Enter plain text: ");
    scanf("%s", plaintext);

    printf("Enter key: ");
    scanf("%s", key);

    int len = strlen(plaintext);
    int keylen = strlen(key);

    /* Encryption */
    for(i = 0; i < len; i++)
    {
        ciphertext[i] = plaintext[i] ^ key[i % keylen];
    }
    ciphertext[len] = '\0';

    printf("Encrypted Text: ");
    for(i = 0; i < len; i++)
    {
        printf("%c", ciphertext[i]);
    }

    /* Decryption */
    for(i = 0; i < len; i++)
    {
        decrypted[i] = ciphertext[i] ^ key[i % keylen];
    }
    decrypted[len] = '\0';

    printf("\nDecrypted Text: %s", decrypted);

    return 0;
}
