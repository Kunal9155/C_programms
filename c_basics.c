// IGNORE THE ERROR due to repetative use of standard library


// check whether num is positive is or negative
#include<stdio.h>
int main()
{
    int num;
    printf("enter value of num :\n");
    scanf("%d", &num);
    if(num>0){
        printf("num is POSITIVE");
    }
    else{
        printf("num is NEGATIVE");
    }
}
// check whether num is even or odd
#include<stdio.h>
int main()
{
     int num;
     printf("enter your num\n");
     scanf("%d", &num);
     if (num % 2 ==0){
         printf("num is EVEN\n");
     }
     else{
         printf("num is ODD\n");
     }
}
// find  max and min between two
#include <stdio.h>
int main()
{
    int a, b;
    int max,min;
    printf("enter value of a and b\n");
    scanf("%d %d", &a, &b);
    if (a > b){
        max = a;
        min=b;
    }
    if (b > a){
        max = b;
        min=a;
    }
    printf("max is %d and min is %d",max,min);
}
// LEAP YEAR checking
#include<stdio.h>
int main()
{
    int year;
    printf("enter any year\n");
    scanf("%d", &year);
    printf(" given year is \n");
    if (year % 400 == 0){
        printf("LEAP YEAR");
    }
    else if (year % 100 ==0){
        printf("NOT A LEAP YEAR");
    }
    else if (year %4 == 0){
        printf("LEAP YEAR");
    }
    else{
        printf("NOT A LEAP YEAR");
    }
}
// find greatest value among three by using simple method
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a ,b ,c\n");
    scanf("%d %d %d", &a, &b ,&c);
    printf("a is %d \n b is %d \n c is %d",a,b,c);
    if(a>b && a>c){
        printf("\na is largest that is %d", a);
    }
    else if (b>a && b>c){
        printf("\nb is largest that is %d", b);
    }
    else{
        printf("\nc is largest that is %d", c);
    }
}
// find greatest value among three by using nested system
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a ,b ,c\n");
    scanf("%d %d %d", &a, &b ,&c);
    printf("a is %d \n b is %d \n c is %d",a,b,c);
if(a>b){
    if(a>c){
        printf("\na is largest");
    }
    else{
        printf("\nc is largest");
    }
}
if(b>c){
    if(b>a){
        printf("\nb is largest");
    }
    else{
        printf("\na is largest");
    }
}

if(c>a){
    if(c>b){
        printf("\nc is largest");
    }
    else{
        printf("\nb is largest");
    }
}
}
// check wether character is vowel or consonent
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a charcater\n");
scanf("%c", &ch);
printf("your given char is %c", ch);
if(ch == 'a' || ch == 'i' || ch == 'u' || ch == 'o' || ch == 'e' ){
    printf("\n%c is VOWEL", ch);
}
else
{
    printf("\n %c is CONSONENT", ch);
}
}
// PRINT NATURAL NUMBERS FROM 10 TO 20
#include<stdio.h>
int main()
{
    int i=0;
    while (i<=20)
    {
        if (i>=10)
        {
            printf("the value of i is %d\n",i);
        }
        i++;
    }
    
}
// print NATURAL NUMBERS upto 4 when input is four that is 'i'
#include <stdio.h>
int main()
{
    int i;
    int n = 1;
    printf("give us i :\n");
    scanf("%d", &i);
    do
    {
        printf("the value of n is %d\n", n);
        n++;
    } while (n <= i);
}
// FIRST n NATURAL NUMBERS USING FOR LOOP
#include<stdio.h>
int  main()
{
    int i,n;
    printf("enter value of n\n");
    scanf("%d", &n);
    for ( i = 0; i <= n; ++i)
    {
        printf("the value of i is %d\n", i);
    }
    
}
// first natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    int n;
    // printf("enter value of i\n");
    // scanf("%d", &i);
    printf("enter value of n\n");
    scanf("%d", &n);
    // idhr exp 1 hmm khali i bhi likh skte he ,,i user se lekar
    for(i=n; i!= 0; i--)
    {
        printf("the value of i is %d\n", i);
    }
}
// first natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    int n;
    // printf("enter value of i\n");
    // scanf("%d", &i);
    printf("enter value of n\n");
    scanf("%d", &n);
    // idhr exp 1 hmm khali i bhi likh skte he ,,i user se lekar
    for(i=n; i!= 0; i--)
    {
        printf("the value of i is %d\n", i);
    }
}
#include <stdio.h>
int main()
{
    int skip = 5;
    int i = 0;
    while (i < 10){
        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
}
// MULTIPLICATION TABLE
#include<stdio.h>
int main()
{
    int i;
    int n=0;
    printf("enter value of i\n");
    scanf("%d", &i);
    do
    {
        n++;
        printf(":: 10 X %d= %d\n ", n,i*n);
    } while (n<10);
}

#include<stdio.h>
int main()
{
    int i;
    for ( i = 10; i;  i--)
    {
        printf(":: 10 X %d = %d\n",i,10*i);
    }
    return 0;
}
// SUM OF FIRST N NATURAL NO.
#include<stdio.h>
int main()
{
    int i,sum=0;
    int n=10;
    for ( i=1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of first 10 natural no. is %d", sum);
}
// SUM OF FIRST N NATURAL NO.
#include<stdio.h>
int main()
{
    int i =1;
    int sum=0;
    int n=10;
    while (i<=n)
    {
          sum += i;
          i++;
    }
    printf("sum is %d", sum);
    }
// *Write a program to determine whether a character entered by the user is lowercase or not.
    #include<stdio.h>
    int main()
    {
     char ch;
     printf("enter the character\n");
     scanf("%c", &ch);
    //  ASCII table m check kro letter kha se kha tk he
     if (ch<=122 && ch>=97){
         printf("it is lower case");
         }else{
             printf("it is upper case");
         }        

//   Write a program to find whether a year entered by the user is a leap year or not. Take the year as input from the user.
    int year;
    printf("enter a year\n");
    scanf("%d", &year);
    printf("given year is :\n");
    if (year % 4 == 0)
    {
        printf("LEAP YEAR");
    }
    else if (year % 100 == 0)
    {
        printf("NOT A LEAP YEAR");
    }
    else if (year % 4 ==0)
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("NOT A LEAP YEAR");
    }
 
}
// HOW TO DEFINNE VALUE [phele hii]
#include<stdio.h>
#define PI 3.14
#define ohh 12
int kunal(int a,int b){
    return (a*b);
}

int main(){
    int a,b;
    printf("the value of pi is %d\n",PI);
    printf("the value of ohh is %d\n",ohh);
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("enter value of b\n");
    scanf("%d",&b);   
    printf("so the value of c is %d", kunal(a,b));
}
#include <stdio.h>
int main()
{
    int rating;
    // rating of tiktok using SWITCH STATEMENT
    printf("give us rating of TIKTOK\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("you give us 1 star");
        break;
    case 2:
        printf("you give us 2 star");
        break;
    case 3:
        printf("you give us  3 star");
        break;
    case 4:
        printf("you give us 4 star");
        break;
    case 5:
        printf("you give us 5 star");
        break;
    default:
        printf("invalid rating");
    }
    // GRADE SYSTEM RESULT by using logical opretors
    int marks;
    printf("\nenter your marks\n");
    scanf("%d", &marks);
    if (marks > 90 && marks <= 100)
    {
        printf("A grade\n");
    }
    else if (marks >= 80 &&  marks <= 90)
    {
        printf("B grade\n");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("C grade\n");
    }
    else if (marks < 70)
    {
        printf("FAIL");
    }
    // practise set 3  starts now
int a=10;
/*idhar hmne if vali line ek = ye lgaya he ...iska matlab assign krna hota he...equality check krne k lia == hota he*/
if (a=11)
{
    printf("\ni am 11");
}
else
{
    printf("\nin am not 11");
}
//Write a program to find out whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user
int sub1,sub2,sub3;
int total;
int maxm=150;
int subtotal=50;
printf("we have three subjests sub1,sub2,sub3\n");
printf("enter your marks in sub1\n");
scanf("%d", &sub1);
printf("enter your marks in sub2\n");
scanf("%d", &sub2);
printf("enter your marks in sub3\n");
scanf("%d", &sub3);
total=sub1+sub2+sub3;
printf("\ntotal is %d",total);
if (sub1>((33/100)*subtotal) && total>((40/100)*maxm))
{
    printf("YOU ARE PASS");
    
}
else if (sub2>((33/100)*subtotal) && total>((40/100)*maxm))
{
    printf("YOU ARE PASS");
    
}
else if (sub3>((33/100)*subtotal) && total>((40/100)*maxm))
{
    printf("YOU ARE PASS");
}
 else{
     printf("FAIL");
 }
}
// STATEMENTS
#include <stdio.h>
int main()
{
    int num;
    printf("control statements\n");
    //if statements
    printf("enter number num\n");
    scanf("%d", &num);
    if (num < 5)
    {
        printf("num is less than 5");
    }
    printf("if me agr false cond hui to sidha niche aa jayega compiler\n");
    //if-else statement
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if(age<18)
    {
        printf("your age is below 18");
    }
    else
    {
        printf("you are above 18");
    }
    //if-else-if ladder
    // is vale me logical operator lgale abhi ye galat he
    int marks;
    printf("we have four sections\n");
    printf("enter your marks scored in selection paper\n");
    scanf("%d", &marks);
    if(marks>=45)
    {
           printf("you are eligible for O secton for entrance classes\n");
    }
    else if(35<marks<45)
    {
        printf("you are in A section\n");
    }
    else if(15<marks<25)
    {
        printf("you are in B section\n");
    }
    else
    {
    printf("you are in C section\n");
    }
    printf("go and study\n");
    return 0;
} 
// ONE MORE EXAMPLE........ISKO ALAG ME CHALANA YEH MENE SPACE BNABE KE LIA KIA HE 
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>18){
        printf("you are eligible to vote");
    }
    else if(age>=10){
        printf("you can participate in children's vote");
    }
    else{
        printf("GHAR JAO CHUP CHAP");
    }
}
// Practise set of basisc c
_____________________________________________________________________________________________________________________________________________
we have to find area of rectengle
#include <stdio.h>
#define PI 3.14
int main()
{
    int side_1;
    int side_2;
    float area;
    int r, h;
    float vol, celcius, far;
    far = (celcius * 9 / 5) + 32;
    int principal, rate, year;
    int SI;
    SI = ((principal * rate * year) / 100);
    printf("enter value of side_1\n");
    scanf("%d", &side_1);
    printf("you have entered value of side_1 is %d\n", side_1);
    printf("enter value of side_2\n");
    scanf("%d", &side_2);
    printf("you have entered value of side_2 is %d\n", side_2);
    printf("area of rectengle is  side_1*side_2 is %d\n", side_1 * side_2);
    // we have to find area of circle//
    printf("we already defined value of PI\n");
    printf("PI is %f\n", PI);
    printf("give us the value of r\n");
    scanf("%d", &r);
    area = PI * r * r;
    printf("area of circle is PI*r*r is %f\n", area);
    //we have to modify above code into volume of cylinder//
    printf("give us the height of cylinder\n");
    scanf("%d", &h);
    vol = area * h;
    printf("volume of cylinder is %f\n", vol);
    //celcieuc to farenheit
    printf("give us value of celcius\n");
    scanf("%f", &celcius);
    far = (celcius * 9 / 5) + 32;
    printf("farenheite value is %f\n", far);
    //find SIMPLE INTEREST by formula PRT/100//
    printf("give us value of principal\n");
    scanf("%d", &principal);
    printf("give us value of rate\n");
    scanf("%d", &rate);
    printf("give us value of year\n");
    scanf("%d", &year);
    printf("value of simpleinterest is %d\n", SI);
    return 0;
}
_____________________________________________________________________________________________________________________________________________
FACTORIAL USING FOR LOOP 
#include <stdio.h>
int main()
{
    int i = 0, factorial = 1, n = 5;
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial is %d", factorial);
}
_____________________________________________________________________________________________________________________________________________
HOW TO MULTIPLY a number by  ten
#include <stdio.h>
int tentime(int a);

int main()
{
    int f = 4;
    printf("value oof f is %d\n", f);
    printf("after ten times is %u\n", tentime(f));
}

int tentime(int a)
{
    int result = 10 * a;
    return result;
}
_____________________________________________________________________________________________________________________________________________
POINTER TO POINTER
#include <stdio.h>

int main()
{
    int i = 4;
    int *j ;
    int **k ;
    j=&i;
    printf("pointer to pointer \n");
    printf("value of i is %d\n", i);
    printf("address of i is %u\n", j);
    printf("value through address of i is %u\n", *j);
    printf("value through address by k is %u\n", **k);
    return 0;
}
_____________________________________________________________________________________________________________________________________________
FINDING SUM AND AVERAGE BY FUNCTION   

#include <stdio.h>
int sumavg(int a ,int b);
int main()
{
    int u=3 , i=3;
   printf("pta nhi shi h ya galat \n");
   sumavg( u , i);

}

int sumavg(int a, int b)
{
    int sum = a+b;
    printf("the sum  is %d\n", sum);
    int avg = (a+b)/2;
    printf("averege is %d\n", avg);
}
___________________________________________________________________
CREATE ARR OF SIZE 10 and STORE MULTIPLICATION TABLE OF 5 i it 
#include <stdio.h>
int main()
{
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d = %d\n", i + 1, mul[i]);
    }
}





















































































































































