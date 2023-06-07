#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source_file[100], target_file[100];
    FILE *source, *target;
    printf("Введите имя исходного файла: ");
    scanf("%s", source_file);
    printf("Введите имя итогового файла: ");
    scanf("%s", target_file);
    source = fopen("source_file.txt", "rb");
    target = fopen("target_file.txt", "wb");

    return 0;
}