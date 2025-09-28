#include <stdio.h>
#include <locale.h>
int main()
{
    int L1 = 300, L2 = 200, V1 = 20, V2 = 30;
    setlocale(LC_ALL, "RUS");
    int total_length = L1 + L2;
    int total_speed = V1 + V2;
    int time = total_length / total_speed;
    printf("УСЛОВИЯ ЗАДАЧИ:\n");
    printf("Два поезда движутся навстречу друг другу.\n");
    printf("Первый поезд имеет длину: %d м\n", L1);
    printf("Второй поезд имеет длину: %d м\n", L2);
    printf("Скорость первого поезда: %d м/с\n", V1);
    printf("Скорость второго поезда: %d м/с\n", V2);

    printf("РАСЧЕТ:\n");
    printf("Суммарная длина поездов: %d м + %d м = %d м\n", L1, L2, total_length);
    printf("Cкорость сближения: %d м/с + %d м/с = %d м/с\n", V1, V2, total_speed);

    printf("РЕЗУЛЬТАТ:\n");
    printf("Продолжительность прохождения поездов друг мимо друга:\n");
    printf("T = (L1 + L2) / (V1 + V2) = %d / %d = %d секунд\n", total_length, total_speed, time);
    printf("T = %d секунд\n\n", time);
    return 0;


}