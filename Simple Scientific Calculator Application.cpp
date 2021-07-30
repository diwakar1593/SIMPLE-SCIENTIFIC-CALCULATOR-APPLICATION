// C Program for Simple Calculator Application

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>

// Function Prototype Declaration
void menu();
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
int factorial();
void power();
void square();
void cube();

//Main Block
int main()
{
	char cal_oper;
	int X=1;
	// Funtion Call
	menu();
	while(X=1)
	{
	printf("\n Enter the calculator Operation you want to do:-");
	cal_oper=getch();

	
	switch(cal_oper)
	{
		case '1' : addition();
		           break;
		           
		case '2' : subtraction();
		           break;
		           
		case '3' : multiplication();
		  		   break;
		  		   
		case '4' : division();
				   break;
				   
		case '5' : modulus();
				   break;
				   
		case '6' : factorial();
				   break;
				   
		case '7' : power();
				   break;
				   
        case '8' : square();
				   break;
				   		
		case '9' : cube();
				   break;
				   					   
		case 'M' :
		case 'm' : menu();
		      	   break;
		      	   
		case 'Q' :
		case 'q' : exit(0);
				   break;
				   
		case 'C' :
		case 'c' : system("cls");
		           menu();
		           break;
		           
		default  : system("cls"); 
		
		printf("\n-----------------You have enter an invalid option.-----------------\n");
		printf("\n------------Please enter a valid option from menu below.------------\n");
		menu();
		      			       	        
	 
	}
	
	
    }
	
}

//Function Definitions

//Menu Function Definitions
void menu()
{
	printf("\n\t\t\t\t\tWELCOME TO SIMPLE SCIENTIFIC C-CALCULATOR.\n ");
	printf("\n-----Press 'Q' or 'q' to quit.-----");
	printf("\n-----Press 'M' or 'm' to display menu option.-----");
	printf("\n-----Press 'C' or 'c' to clear the screen and display menu option.-----\n\n\n");
	
	printf("->\t Enter 1 for Addition. \n");
    printf("->\t Enter 2 for Subtraction. \n");
    printf("->\t Enter 3 for Multiplication. \n");
    printf("->\t Enter 4 for Division. \n");
    printf("->\t Enter 5 for Modulus. \n");
    printf("->\t Enter 6 for Factorial. \n");
    printf("->\t Enter 7 for Power. \n");
    printf("->\t Enter 8 for Square Root. \n");
    printf("->\t Enter 9 for Cube Root. \n");
}

//Addition Function Definitions
void addition()
{   
    int n,i;
	float sum=0;
	printf("\n Enter the total number of element you want to add:- ");
	scanf("%d",&n);
	printf("\n Enter the number of %d element one by one :- \n ",n);
	float add[n];
	for(i=0;i<n;i++)
	{
		scanf("%f",&add[i]);
	}
	for (i=0;i<n;i++)
	{
		sum=sum+add[i];
	}
	printf("\nSum of entered number is :-\t%f",sum);
}

////Subtraction Function Definitions
void subtraction()
{

	float a,b,c;
	printf("\n Enter the two number you want to subtract:-\n ");
	scanf("%f%f",&a,&b);
	c=a-b;
	printf("\n Difference of entered number is:-\t%f",c);
	
}


//Multiplication Function Definitions
void multiplication()
{
	int n,i;
	float product=1;
	printf("\n Enter the total number of element you want to multiply:- ");
	scanf("%d",&n);
	printf("\n Enter the number of %d element one by one :- \n ",n);
	float mul[n];
	for(i=0;i<n;i++)
	{
		scanf("%f",&mul[i]);
	}
	for (i=0;i<n;i++)
	{
		product=product*mul[i];
	}
	printf("\nProduct of entered number  is :-\t%f",product); 
}

//Division Function Definitions
void division()
{
    float a, b, d; 
    printf("\nPlease enter first number  : "); 
    scanf("%f", &a); 
    printf("Please enter second number : "); 
    scanf("%f", &b);
    d=a/b;
    printf("\nDivision of entered numbers :-\t%f",d);
}

//Modulus Function Definitions
void modulus()
{
    int a, b, d=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers :- %d\n",d);
}

//Factorial Function Definitions
int factorial()
{
	int num,fact=1,n;
 
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
    n=num;
    if (num<0)
    {
        printf("\nPlease enter a positive number to find factorial and try again. ");
        printf("\nFactorial can't be found for negative values. It can be only positive or 0  \n");
        return (1);
    }               

    while(num>=1)
    {
	
    fact=fact*num;
    num--;
    }
    printf("\n");
    printf("Factorial of entered number %d is :-%d\n",n,fact);
    return 0;
}

//Power Function Definitions
void power()
{
	int a,num, p;
    printf("\nEnter two numbers to find the power. \n");
    printf("number : ");
    scanf("%d",&a);
 
    printf("power : ");
    scanf("%d",&num);
 
    p=pow(a,num);
 
    printf("\n%d to the power %d :- %d \n",a,num,p);
}

//Square root  Function Definitions
void square()
{
	int num;
	float sq;
	printf("\nEnter the number to find square root :\n");
	scanf("%d",&num);
	sq=sqrt((float)num);
	printf("Square Root of %d is :- \t%f",num,sq);
}

//Cube root  Function Definitions
void cube()
{
	int num;
	float cube;
	printf("\nEnter the number to find cube root :\n");
	scanf("%d",&num);
	cube=pow((float)num,0.33334);
	printf("Cube Root of %d is :- \t%f",num,cube);
}
