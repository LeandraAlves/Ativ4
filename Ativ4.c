/* Leia duas strings e compare-as, indicando se são iguais ou diferentes.*/

#include <stdio.h>
#include <string.h>

int main() {
    char string1[50], string2[50];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    if (strcmp(string1, string2) == 0) {
        printf("As strings sao iguais\n");
    } else {
        printf("As strings sao diferentes\n");
    }
}