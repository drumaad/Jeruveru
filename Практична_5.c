#include <stdio.h>
#include <windows.h>
#include <math.h>
void result() // функція обрахунку
{
    int n = 0; // змінні
    int check = 0;

    // перевірка, чи не є введене число меншим за 1 та більшим за 10000
    do{
        check = 0; // замість TRUE
        printf("\nВведіть довжину послідовності: ");
        scanf("%d", &n);
        if(n < 1 || n > 10000){ // умова перевірки
            check = 1; 
            printf("\nПослідовність n не може бути меншою за 1 та більшою за 10000\n"); // повідомлення для користувача
        } 
    } while (check == 1); 

    // логіка програми 
    int dp[n + 1]; 
    dp[0] = 1;
    dp[1] = 2;// початок масиву | 1 | 2 | 3 |
    dp[2] = 3;

    for (int i = 3; i <= n; i++){ // обчислюєм формулу
        dp[i] = (dp[i - 1] + dp[i - 2]) % 12345; // формула 
    }

    printf("\nКількість шуканих послідовностей: %d", dp[n]); // показ результату

    system("pause"); // призупинення виконання програми 
}

int main() // головна функція
{
    SetConsoleCP(1251);  // кодування кирилицею
    SetConsoleOutputCP(1251);

    result();  // виклик власної функції 
    exit(3); // примусове завершення програми 
}
