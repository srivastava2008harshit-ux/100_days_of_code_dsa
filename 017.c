#include <stdio.h>
void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int main() {
    char codeName[100];
    printf("Enter the code name: ");
    scanf("%s", codeName);
    reverseString(codeName);
    printf("Mirror format: %s\n", codeName);
    return 0;
}