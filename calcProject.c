#include<stdio.h>

#include<stdlib.h>

#include<math.h>

long result=0;

int k=0;

void add()

{

    int a;int b;

    if(k==0)

    {

        printf("                        Enter two numbers :\n");

        printf("                        ");

        scanf("%d",&a);

        printf("                        ");

        scanf("%d",&b);

        result=a+b;

    }

    else

    {

        printf("                        Enter a number\n");

        printf("                        ");

        scanf("%d",&a);

        result=result+a;

    }

}

void sub()

{

    int a;int b;

    if(k==0)

    {

        printf("                        Enter two numbers :\n");

        printf("                        ");

        scanf("%d",&a);

        printf("                        ");

        scanf("%d",&b);

        result=a-b;

    }

    else

    {

        printf("                        Enter a number\n");

        printf("                        ");

        scanf("%d",&a);

        result=result-a;

    }

}

void mul()

{

    int a;int b;

    if(k==0)

    {

        printf("                        Enter two numbers :\n");

        printf("                        ");

        scanf("%d",&a);

        printf("                        ");

        scanf("%d",&b);

        result=a*b;

    }

    else

    {

        printf("                        Enter a number\n");

        printf("                        ");

        scanf("%d",&a);

        result=result*a;

    }

}

void divide()

{

    int a;int b;

    if(k==0)

    {

        printf("                        Enter two numbers :\n");

        printf("                        ");

        scanf("%d",&a);

        printf("                        ");

        scanf("%d",&b);

        result=a/b;

    }

    else

    {

        printf("                        Enter a number\n");

        printf("                        ");

        scanf("%d",&a);

        result=result/a;

    }

}

void rem()

{

    int a;int b;

    if(k==0)

    {

        printf("                        Enter two numbers :\n");

        printf("                        ");

        scanf("%d",&a);

        printf("                        ");

        scanf("%d",&b);

        result=a%b;

    }

    else

    {

        printf("                        Enter a number\n");

        printf("                        ");

        scanf("%d",&a);

        result=result%a;

    }

}

void clear()

{

   result=0;

}

void power()

{

    int a;int n;

    if(k==0)

    {

        printf("                        Enter a number\n");

        printf("                        ");

        scanf("%d",&a);

        printf("                        Enter power\n");

        printf("                        ");

        scanf("%d",&n);

        result=pow(a,n);

    }

    else

    {

        printf("                        Enter power\n");

        printf("                        ");

        scanf("%d",&n);

        result=pow(result,n);

    }

}

void square()

{

    int a;

    if(k==0)

    {

        printf("                        Enter a number\n");

        printf("                        ");

        scanf("%d",&a);

        result=pow(a,2);

    }

    else

    {

        result=pow(result,2);

    }

}

void main()

{

    int ch;

    while(1)

    {

        system("CLS");

        printf("\n\n");

        for(int i=0;i<20;i++)

        {

            printf("\t\t");

        }

        printf("        =====CALCULATOR=====\n");

        for(int j=0;j<100;j++)

            printf("__");

        printf("\n\n");

        for(int i=0;i<50;i++)

            printf("  ");

        printf("_________________");

        printf("\n");

        printf("\n");

        for(int i=0;i<49;i++)

            printf("  ");

        printf(" ||  Result = %d   ||\n",result);

        for(int i=0;i<50;i++)

            printf("  ");

        printf("_________________");

        printf("\n");

        printf("\n\n                \t\t\t\t\t-----   Menu   ---\n\n");

        printf("                        1. Add\n");

        printf("                        2. Subtract\n");

        printf("                        3. Multiply\n");

        printf("                        4. Divide\n");

        printf("                        5. Remainder\n");

        printf("                        6. Square\n");

        printf("                        7. Power\n");

        printf("                        8. Clear all\n");

        printf("                        9. Exit\n");

        printf("                        Enter your choice...\n\n");

        printf("                        ");

        scanf("%d",&ch);

        switch(ch)

        {

        case 1:

            add();

            k=1;

            break;

        case 2:

            sub();

            k=1;

            break;

        case 3:

            mul();

            k=1;

            break;

        case 4:

            divide();

            k=1;

            break;

        case 5:

            rem();

            k=1;

            break;

        case 6:

            square();

            k=1;

            break;

        case 7:

            power();

            k=1;

            break;

        case 8:

            clear();

            k=0;

            break;

        case 9:

            exit(1);

            break;

        default :

            printf("                        Enter valid choice...\n");

            system("PAUSE");



        }

    }

}
