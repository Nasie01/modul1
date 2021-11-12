#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int k = get_int("Grate: ");
    if(k == 1)
    {
        printf("Погано\n");
    }
    else if (k == 2)
    {
        printf("Незадовільно\n");
    }
    else if (k == 3)
    {
        printf("Задовільно\n");
    }
    else if (k == 4)
    {
        printf("Добре\n");
    }
    else if(k == 5)
    {
        printf("Відмінно\n");
    }
    else
    {
        printf("Помилка\n");
    }
}