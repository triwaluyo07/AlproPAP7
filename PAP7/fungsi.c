#include "header.h"

int add_rec(int num1,int num2)
{
    int hsl_tambah;
    if(num2==0)
    {
        hsl_tambah=num1;

    }
    else
    {
        hsl_tambah=1+add_rec(num1,(num2-1));
        printf("1+");
    }

    return hsl_tambah;
}

int subs_rec(int num1,int num2)
{
    int hsl_kurang;
    if(num2==0)
    {
        hsl_kurang=num1;
    }
    else
    {
        hsl_kurang= subs_rec(num1,(num2-1))-1;
        printf("-1");
    }

    return hsl_kurang;
}

int mul_rec(int num1,int num2)
{
    int hsl_kali;
    if(num2==0)
    {
        hsl_kali=0;
    }
    else
    {
        hsl_kali=mul_rec(num1,num2-1)+num1;
        printf("+%d",num1);
    }
    return hsl_kali;
}

int div_rec(int num1,int num2)
{
    int hsl_bagi;
    if(num1==0)
    {
        hsl_bagi=0;
    }
    else
    {
        hsl_bagi=div_rec((num1-num2),num2)+1;
        printf("-%d",num2);
    }

    return hsl_bagi;
}

int pow_rec(int num1,int num2)
{
    int hasil;
    if(num2==0)
    {
        hasil=1;
    }
    else
    {
        hasil= num1*pow_rec(num1,(num2-1));

        if(num2>1)
        {
            printf("x%d",num1);
        }
        else if (num2==1)
        {
            printf("%d",num1);
        }
    }
    return hasil;
}

int factorial(int n)
{
    int hasil_f;

    if(n==0||n==1)
    {
        hasil_f=1;
    }
    else
    {
        hasil_f= n*factorial(n-1);
    }
    return hasil_f;
}

int fibonancci(int number)
{
    int hasil;

    if(number==1 || number==0)
    {
        return 1;
    }
    else
    {
        hasil=fibonancci(number-1)+fibonancci(number-2);
        return hasil;
    }

}
int sum_transversal(int data[],int cur)
{

    if(cur==0)
    {
        return data[0];
    }
    else
    {
        return(data[cur]+sum_transversal(data,cur-1));
    }
}





































