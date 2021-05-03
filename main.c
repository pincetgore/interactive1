/*задание 2:
*Software by Ilya Makarov
*Made in QTCreator
*2021
*/

#include <stdio.h>

int main(int argc, const char** argv)
{
    //задание 1
    printf("Hello World!\n");

    //задание 3
    int a;
    printf("Введите число: ");
    scanf ("%d", &a);
    printf ("Квадрат числа равен = %d\n", a*a);

    //задание 4.1
    float Uo, R1, R2, result;
    printf ("Расчет формулы Ui = Uo/(R1/(R2+R1))\n");
    printf("Введите Uo: ");
    scanf ("%f", &Uo);
    printf("Введите R1: ");
    scanf ("%f", &R1);
    printf("Введите R2: ");
    scanf ("%f", &R2);
    result = Uo/(R1/(R2+R1));
    printf ("Ui = %f\n", result);
    calcr1();
    calcr2();
    return 0;
}

int calcr1 (){
//Задание 4.2
    printf ("Расчет формулы R1 = R2*Uo/(Ui-Uo)\n");
    float Uo, R2, Ui, result;
    printf("Введите Uo: ");
    scanf ("%f", &Uo);
    printf("Введите Ui: ");
    scanf ("%f", &Ui);
    printf("Введите R2: ");
    scanf ("%f", &R2);
    result = R2*Uo/(Ui-Uo);
    printf ("R1 = %f\n", result);
    return 0;
}

int calcr2 (){
    //Задание 4.3
    printf ("Расчет формулы R2 = ((Ui*R1)/Uo)-R1\n");
    float Uo, R1, Ui, result;
    printf("Введите Uo: ");
    scanf ("%f", &Uo);
    printf("Введите Ui: ");
    scanf ("%f", &Ui);
    printf("Введите R1: ");
    scanf ("%f", &R1);
    result = ((Ui*R1)/Uo)-R1;
    printf ("R2 = %f\n", result);

    return 0;
}
