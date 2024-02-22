#include <stdio.h>
#include <stdlib.h>

int main() {
    // mad lib game
    char color[20];
    char pluralNoun[20];
    char crush[20];

    printf("Enter a color: ");
    scanf("%19s", color); // limit input to 19 characters to avoid buffer overflow

    printf("Enter a plural noun: ");
    scanf("%19s", pluralNoun);

    // Consume the newline character left by the previous scanf
    getchar();

    printf("Enter your crush: ");
    fgets(crush, 20, stdin);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", crush);

    return 0;
}
