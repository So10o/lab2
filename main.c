#include<stdio.h> 
#include<locale.h> 

void main(void) 
{ 

setlocale (LC_ALL, "RUS"); 

printf ("%100s \n", "Это текст"); 
printf ("%0s \n", "Это текст"); 
printf ("%0s \n\t", "Это текст"); 

printf ("%0.3f\n ", 12.234657); 

printf ("Остаток от деления %d на %d равен %f.2\n ", 5, 2, 5 / 2); 
printf ("Остаток от деления %d на %d равен %f.2\n ", 7, 5, 7 / 5); 
printf ("Умножение %d на %d равно %d\n", 2000, 4, 2000 * 4); 

printf ("%g.0 разделить %e.0 равно %f.0\n ", 5., 2., 5. / 2); 
printf ("%d разделить %d равно %d\n ", 5., 2., 5. / 2); 
printf ("%f разделить %f равно %f\n ", 5., 2., 5. / 2); 
printf ("%g разделить %g равно %g\n ", 5., 2., 5. / 2); 
printf ("%e разделить %e равно %e\n ", 5., 2., 5. / 2); 



int n = 2, k = 3; 
printf ("Сейчас %d часов %d минут 00 секунд\n", n, k); 
printf ("Идёт %d минута суток\n", n); 
printf ("До полуночи осталось %d часов и %d минут\n", n, k); 
printf ("С 8:00 прошло %d секунд\n", k); 
printf ("Текущий час = %d/24 суток и текущая минута = %d/60\n", n, k); 


int N = 3., K = 4., M = 3.; 
printf ("%s\n", "Дано:"); 
printf ("%20d\n", N); 
printf ("%20d\n", 333); 
puts ("            ________"); 
printf ("%s\n\t", "  Ответ:"); 
printf ("    %+008.3f", N / 333.); 

}