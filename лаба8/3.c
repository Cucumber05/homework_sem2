#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            printf("пробел %d\n", c);
        } else if (c == '\t') {
            printf("\\t %d\n", c);
        } else if (c == '\n') {
            printf("\\n %d\n", c);
        } else if (c < 32 || c > 126) {
            printf("непечатаемый символ%d\n", c);
        } else {
            printf("%c %d\n", c, c);
        }
    }
    return 0;
}
