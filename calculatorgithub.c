// SIMPLE CALCULATOR USING C PROGRAMMING
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void addition();
void substraction();
void multiplication();
void division();
void absolute_value();
void square();
void squareroot();
void sinvalue();
void cosvalue();
int main()
{
int op;
printf("welcome to a choice based calculator:\n");
printf("Enter your choice among the list:\n");
printf("1.Addition\t2.Substraction\t3.Multiplication\n4.Division\t5.Absolute value\t6.Square\n7.Square root\t8.Sin value\t9.Cos value\n");
do
{
scanf("\n%d",&op);
switch(op)
{
case 1:
addition();
break;
case 2:
substraction();
break;
case 3:
multiplication();
break;
case 4:
division();
break;
case 5:
absolute_value();
break;
case 6:
square();
break;
case 7:
squareroot();
break;
case 8:
sinvalue();
break;
case 9:
cosvalue();
break;
}
}while(op>=1&&op<10);
return 0;
}
void addition()
{
printf("Enter the numbers for addition");
float num1,num2,sum;
scanf("%f %f",&num1,&num2);
sum=num1+num2;
printf("Sum is:%f",sum);
}
void substraction()
{
printf("Enter the numbers for substraction:");
float num1,num2,sub;
scanf("%f %f",&num1,&num2);
sub=num1-num2;
printf("Substraction is:%f",sub);
}
void multiplication()
{
 float n1, n2, res;  
 printf ("Enter the numbers for multiplication: ");  
 scanf ("%f  %f", &n1,&n2);  
  res = n1 * n2;    
 printf (" Multiplication is:%f" ,res); 
 }
 void division()
 {
 float num1,num2,res;
 printf("Enter the numbers for Division:");
 scanf("%f %f",&num1,&num2);
 res=num1/num2;
 printf("Division is:%f",res);
 }
 void absolute_value()
 {
 printf("Enter the number:");
 float n;
 scanf("%f",&n);
 printf("Absolute value of number:%f",abs(n));
 }
 void square()
 {
 printf("Enter the number for square:");
 float n;
 scanf("%f",&n);
 printf("Square is:%f",n*n);
 }
void squareroot()
{
printf("Enter a value for square root");
int n;
scanf("%d",&n);
printf("Square root is:%f",sqrt(n));
}
void sinvalue()
{
printf("Enter the value:");
float n,res;
scanf("%f",&n);
res=sin(n*3.1417/180);
printf("sin value:%f",res);
}
void cosvalue()
{
printf("Enter value:");
float n,res;
scanf("%f",&n);
res=cos(n*3.1417/180);
printf("Value is:%f",res);
}

