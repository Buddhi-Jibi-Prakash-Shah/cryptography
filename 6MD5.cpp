#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    unsigned int hash = 0;

    printf("Enter the message: ");
    fgets(input, sizeof(input), stdin);

    int len = strlen(input);

    // Simple hash calculation (MD5 demonstration style)
    for(int i = 0; i < len; i++) {
        hash = hash * 31 + input[i];
    }

    printf("\nHash of the input string (MD5 demo): %08x\n", hash);

    return 0;
}
