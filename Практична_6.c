#include <stdio.h>
#include <windows.h>
#include <math.h>

void result()
{
    float res=0; 
    int x[2],y[2],k=1; // масиви для збереження значень

    for (int i = 0; i < 2; i++) // запитуємо координати X у користувача
    {
    printf("x%d: ",k);
    scanf("%d",&x[i]);
    k++;
    }
    k=1;
    for (int i = 0; i < 2; i++)  // запитуємо координати Y у користувача
    {
    printf("y%d: ",k);
    scanf("%d",&y[i]);
    k++;
    }

    res = sqrt(pow(x[1]-x[0],2) + pow(y[1]-y[0],2)); // формула обчислення

    printf("Результат: %.6f\n",res); // вивід результату
}

int main()
{
    SetConsoleCP(1251); // українська
    SetConsoleOutputCP(1251);

    result(); // виклик власної функції

    system("pause"); // ставим програму на паузу
    exit(2); // примусове завершення програми
}
