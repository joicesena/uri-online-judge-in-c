#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    int c;
    int maiorAB;
    int maiorDeTodos;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    maiorAB = (a + b + abs(a - b)) / 2;
    maiorDeTodos = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maiorDeTodos);

    return 0;
}
