#include<stdio.h>

int main() {
    int i = 0, n;

    printf("Enter the number.\n");
    scanf("%d", &n);

    char str1[n], str2[n];

    printf("Enter the 1 string.\n");
    scanf("%s", str1);

    printf("Enter the 2 string.\n");
    scanf("%s", str2);

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] > str2[i]) {
        printf("String 1 is greater than string 2.\n");
    } else if (str1[i] < str2[i]) {
        printf("String 2 is greater than string 1.\n");
    } else {
        printf("Both strings are the same.\n");
    }

    return 0;
}
