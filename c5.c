#include<stdio.h>
#include<math.h>

void  MENUOPTIONS();
void solvelinear();
void calculatefactorial();
void solvequadratic();

int main() {

int choice;
do{
MENUOPTIONS();
scanf("%d",&choice);

switch(choice) {
case 1:
solvelinear();
break;
case 2:
calculatefactorial();
break;
case 3:
solvequadratic();
break;
case 4:
printf("\n you have exit  the programm");
break;

case 5:
printf("\n you have entered the wrong option ");
break;
}
}while(choice!=4);
return 0;
}

void MENUOPTIONS() {
printf("\n <<<<<<<<<<<<< >>>>>>>>>>>");

 printf("\n 1. slovelinear ");
printf("\n  linear equation (ax+b=0)");

 printf("\n 2. calculatefactorial");
printf("\n  factorial for the entered number  (n!)");

 printf("\n 3. solvequadratic");
printf("\n  quadratic equation (ax^2+bx+c=0)");
printf("\n 4. exit");
printf("\n enter your choice");
}

void solvelinear() {
int a,b,x;
printf("\n enter the values of a,b");
printf("\n enter a=");
scanf("%d",&a);
printf("\n enter b=");
scanf("%d",&b);

//now checking the conditions as linear,infinitely many  or  no soltions//

if(a!=0){
x=-b/a;
printf("\n linear solution:x=%d",x);
}else if(a==0 && b==0){
printf("\n infinitely many solutions");
}
else if(a==0 && b!=0){
printf("\n no solution ");
}
}

void calculatefactorial() {
int n;
printf("\n enter the digits(0-12):");
scanf("%d",&n);
if(n<0 || n>12){
printf("\n digits must be entered between 0 - 12");
}
else{

int fact =1;
for (int i=1;i<=n;i++){
fact *= i;
}
printf("\n %d! =%d",n,fact);
}
}

void solvequadratic() {
double a,b,c;
 double discriminant,root1,root2;
printf("\n enter the values of a , b and c");

printf("\n  enter the value of a=");

scanf("%lf",&a);
printf("\n enter the value of b=");

scanf("\n %lf",&b);
printf("\n enter the value of c=");

scanf("\n %lf",&c);

if (a == 0){
printf("\n not a quadratic equation ");
}
else{
discriminant =(b*b)-(4*a*c);
 if (discriminant>0){
printf("\n two distinct real roots ");
 // checking what are the  two roots //
root1=(-b+sqrt(discriminant))/(2*a);
root2=(-b-sqrt(discriminant))/(2*a);
printf("\n root1=%.2lf,root2=%.2lf",root1,root2);
}else if (discriminant == 0){
printf("\n two equal roots ");
root1=-b/(2*a);
printf("\n root1=root2=%.2lf",root1);
}
else{
printf("\n  no real roots ");
}
}
}
