#include<stdio.h>
#include<stdlib.h>

int main () {
int number = 0;
printf("Enter a number: ");
scanf("%d", &number);

char *result = malloc( number * sizeof(char) );
if (result == NULL) {
    printf("Memory allocation failed\n");
    return 1;
}
for (int i = 0; i < number; i++) {
    printf("Enter character %d: ", i + 1);
    scanf(" %c", &result[i]);
}for (int i = 0; i < number; i++) {
    printf(" %c ", result[i]);
}
free(result);
return 0;
}