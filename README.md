# Домашнее задание к работе номер 7

## Условие задачи:

Определение названия математической операции по введенному символу (+, -, *, /), Вариант 24

## 1.Алгоритм и блок схема:

### Алгоритм:

1.Начало
2.Объявление переменной c типа char
3.Ввод символа пользователем
4.Проверка символа через switch-case и вывод соответствующей операции
5.Конец

### Блок-схема:

<img width="2804" height="1904" alt="676249681-1f2089f6-b8ee-483c-ab73-e468704e65e4" src="https://github.com/user-attachments/assets/32bda44f-b36f-4276-86f9-633baa81707e" />




## 2.Реализация программы

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES

int homework_or_individual_assignment() {
    puts("HOMEWORK----------------------------------------------------------------------------------------------------------------");
    char c = 0;
    printf("Enter a math symbol:\n");
    scanf_s(" %c", &c, 1);
    switch (c) {
        case '+':
            printf("This is addition\n");
            break;
        case '-':
            printf("This is subtraction\n");
            break;
        case '*':
            printf("This is multiplication\n");
            break;
        case '/':
            printf("This is division\n");
            break;
        default: 
            printf("Enter another symbol\n");
            break;
    }
    return 0;
}
```

## 3.Вывод: Я написал консольную программу на C с использованием оператора switch-case для распознавания математических знаков операций и вывода их текстового описания

## 4.Информация о разработчике:

Серебряков Артем Григорьевич, бТИИ-261
