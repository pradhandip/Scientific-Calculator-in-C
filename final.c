//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\////
//************************************************************************************//
//*                     INSTITUTE OF ENGINEERING & MANAGEMENT                        *//
//*                           PROBLEM SOLVING USING 'C'                              *//
//*----------------------------------------------------------------------------------*//
//*                     NAME      :   DIP PRADHAN                                    *//
//*                     SECTION   :   G                                              *//
//*                     ROLL      :   46                                             *//
//*                     STREAM    :   ECE                                            *//
//*----------------------------------------------------------------------------------*//
//*                  PROJECT TOPIC : Scientific Calculator making                    *//
//************************************************************************************//
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\////


#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>
#define PI 3.14159

//function definition for ADDITION
int addition()  
{  
    int i, sum = 0, num, f_num; 
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers :\n");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
} 


//function definition for SUBTRACTION
int sub() 
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, res);  
}  
  

//function definition for MULTIPLICATION
int mul() 
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, res);  
}  
  

//function definition for DIVISION
int divide()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, res);  
}  


//function definition for SQUARE
int sq()  
{  
    int n1, res;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &n1);  
      
    res = n1 * n1;    
    printf (" \n The Square of %d is: %d", n1, res);  
}  


//function definition for SQUARE_ROOT
int sqrt1()  
{  
    float res;  
    int n1;  
    printf (" Enter a number to get the Square Root: ");  
    scanf ("  %d", &n1);  
  
    res = sqrt(n1);   
    printf (" \n The Square Root of %d is: %f", n1, res);  
}  

//function definition for power
int power()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.1lf^%.1lf = %.2lf", base, power, result);

    return 0;
}
//function definition for FACTORIAL
int factorial()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
}   


//function definition for LOG_10
int Logarithm()
{
    double num,result;
    printf("Enter the number : ");
    scanf("%lf",&num);

    result = log10(num);
    printf("log(%.1f) = %.2f", num, result);

    return 0;
}


//function definition for ln(Natural Logarithm)
int Natural_Logarithm()
{
    double num,result;
    printf("Enter the number : ");
    scanf("%lf",&num);

    result = log(num);
    printf("log(%.1f) = %.2f", num, result);

    return 0;
}

//___________________________________TRIGONOMETRIC_FUNCTIONS ___________________________________

//function definition for Sin......................
int sin1()
{
  double sinValue,radianVal,degreeVal;
  printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180); // Convert Degree Value to Radian 
  sinValue = sin(radianVal);
  printf("\n The Sine value of %.2f = %.2f ", degreeVal, sinValue);
  return 0;
}


//function definition for cosine..................
int cos1()
{
  double cosValue,radianVal,degreeVal;
  printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180); // Convert Degree Value to Radian 
  cosValue = cos(radianVal);
  printf("\n The cosine value of %.2f = %.2f ", degreeVal, cosValue);
  return 0;
}


//function definition for sec..............

int sec1()
{
  double cosValue,radianVal,degreeVal,a;
  printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180); // Convert Degree Value to Radian 
  cosValue = cos(radianVal);
  a=1/cosValue;
  printf("\n The sec value of %.2f = %.2f ", degreeVal, a);
  return 0;
}


//function definition for tan...............
int tan1()
{
  double tanValue,radianVal,degreeVal;
  printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180); // Convert Degree Value to Radian 
  tanValue = tan(radianVal);
  printf("\n The tan value of %.2f = %.2f ", degreeVal, tanValue);
  return 0;
}


//function definition for cosec...............

int cosec1()
{
  double sinValue,radianVal,degreeVal,a;
  printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180); // Convert Degree Value to Radian 
  sinValue = sin(radianVal);
  a=1/sinValue;
  printf("\n The cosec value of %.2f = %.2f ", degreeVal, a);
  return 0;
}


////function definition for cot......................

int cot1()
{
  double tanValue,radianVal,degreeVal,a;
  printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180); // Convert Degree Value to Radian 
  tanValue = tan(radianVal);
  a=1/tanValue;
  printf("\n The cot value of %.2f = %.2f ", degreeVal, a);
  return 0;
}

//_______________________________________functions for inverse trigonometric functions_____________________________

//function definition for sin inverse ..................
int asin1()
{
  double asinValue,Val;
  printf(" Please Enter the value :  ");
  scanf("%lf", &Val);
  asinValue = asin(Val);
  printf("\n The value of sin inverse of %.2f is = %.2f ", Val, asinValue);
  return 0;
}
//function definition for cos inverse ..................
int acos1()
{
  double acosValue,Val;
  printf(" Please Enter the value :  ");
  scanf("%lf", &Val);
  acosValue = acos(Val);
  printf("\n The value of cos inverse of %.2f is = %.2f ", Val, acosValue);
  return 0;
}

//function definition for tan inverse ..................
int atan1()
{
  double atanValue,Val;
  printf(" Please Enter the value :  ");
  scanf("%lf", &Val);
  atanValue = atan(Val);
  printf("\n The value of tan inverse of %.2f is = %.2f ", Val, atanValue);
  return 0;
}


//___________________________________________PERMUTATION AND COMBINATIONS_____________________________________


int fact(int);

int combination()
{
	int n,r,ncr;
 
  	printf("Enter a number n : ");
  	scanf("%d",&n);
 	printf("Enter a number r : ");
  	scanf("%d",&r);
  	ncr=fact(n)/(fact(r)*fact(n-r));
    printf("Value of %dC%d = %d\n",n,r,ncr);
    return 0;
}
int permutation()
{
	int n,r,npr;
 
  	printf("Enter a number n : ");
  	scanf("%d",&n);
 	printf("Enter a number r : ");
  	scanf("%d",&r);
  	npr=fact(n)/(fact(n-r));
    printf("Value of %dP%d = %d\n",n,r,npr);
    return 0;
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

//_____________values of some constants__________________

//value of pi 
int valpi()
{
    printf("Value of Pi is = 3.14159265359");
    return 0;
}

//value of e
int vale()
{
    printf("Value of Pi is = 2.71828182845904");
    return 0;
}


int main()  
{  
    int output;  
    do  
    {
        printf("\n_____________________________________________________________________________________\n"); 
        printf("\n");
        printf("\t\t\t< < SCIENTIFIC CALCULATOR > >");
        printf ("\n\nSelect an operation : \n");
        printf(".....................................................................................");  
        printf (" \n 1  Addition  \t\t\t 2  Subtraction \t\t 3  Multiplication \n 4  Division \t\t\t 5  Square \t\t\t 6  Square Root \n 7  Factorial \t\t\t 8  Log(Log10)  \t\t 9  Natural Log(ln) \n 10 sin \t\t\t 11 cos \t\t\t 12 tan \n 13 cosec \t\t\t 14 sec \t\t\t 15 cot \n 16 arcSin \t\t\t 17 arcCos \t\t\t 18 arcTan \n 19 Combination \t\t 20 Permutation \t\t 21 Power \n 22 PI \t\t\t\t 23 e \t\t\t\t 24 Exit. \n.....................................................................................\nChoose the Operation : ");      
          
        scanf ("%d", &output);

    switch (output)  
    {  
        case 1:  
            addition(); 
            break;
              
        case 2:  
            sub(); 
            break;
              
        case 3:  
            mul();
            break; 
              
        case 4:  
            divide(); 
            break;  
              
        case 5:  
            sq();   
            break;  
              
        case 6:  
            sqrt1();
            break; 
              
        case 7:  
            factorial();
            break;
        case 8:
            Logarithm();
            break;
        case 9:
            Natural_Logarithm();
            break;
        case 10:
            sin1();
            break;
        case 11:
            cos1();
            break;
        case 12:
            tan1();
            break;
        case 13:
            cosec1();
            break;
        case 14:
            sec1();
            break;
        case 15:
            cot1();
            break;
        case 16:
            asin1();
            break;
        case 17:
            acos1();
            break;
        case 18:
            atan1();
            break;
        case 19:  
            combination();
            break;
        case 20:
            permutation();
            break;
        case 21:
            power();
            break;
        case 22:
            valpi();
            break;
        case 23:
            vale ();
            break;
        case 24:
            exit(0); 
            break;      
        default:  
            printf("\nSomething is wrong !\nPlease enter the correct choice..... ");  
            break;                        
    }  
    printf("\n\n*************************************************************************************\n");
    } while (output != 23);  
      
  
    return 0;        
}


//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||//
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\////
//************************************************************//
//*                                                          *//
//*                 END OF THE PROGRAMMING                   *//
//*                                                          *//
//*                       THANK YOU                          *//
//*                                                          *//
//*               Preapared by - DIP PRADHAN                 *//
//*                                                          *//
//************************************************************//
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\////
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||//
