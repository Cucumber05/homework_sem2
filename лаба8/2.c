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
    source = fopen("source_file.txt", "r"); // открываем файл для чтения
    target = fopen("target_file.txt", "w"); // открываем файл для записи
        int c;
    while ((c =fgetc(source)) !=EOF)  // end of file; Функция fgetc возвращает символ на который ссылается внутренний индикатор позиции файла указанного потока.
    {
        fputc(c, target); //Функция fputc записывает символ в поток и перемещает позицию индикатора положения.
    }
    fclose(source);
    fclose(target);
    printf("Файл скопирован\n");
    return 0;
}