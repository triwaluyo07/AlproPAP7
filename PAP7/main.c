#include"header.h"

int main()
{
    printf("===========================================\n");
    printf("\t\t Tugas 1 \n");
    printf("===========================================\n");

    printf("%d + %d = \n",5,6);
    hasil_1=add_rec(5,6);
    printf("%d",5);
    printf("\nHasil : %d",hasil_1);
    printf("\n");
    printf("%d + %d = \n",7,4);
    hasil_2=add_rec(7,4);
    printf("%d",7);
    printf("\nHasil : %d",hasil_2);
    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 2 \n");
    printf("===========================================\n");

    printf("%d - %d = \n",9,2);
    hasil_3=subs_rec(9,2);
    printf("+%d",9);
    printf("\nHasil : %d",hasil_3);
    printf("\n");

    printf("%d - %d = \n",7,4);
    hasil_4=subs_rec(7,4);
    printf("+%d",7);
    printf("\nHasil : %d",hasil_4);
    printf("\n");

    printf("%d - %d = \n",2,5);
    hasil_5=subs_rec(2,5);
    printf("+%d",2);
    printf("\nHasil : %d",hasil_5);
    printf("\n");

    printf("%d - %d = \n",5,5);
    hasil_6=subs_rec(5,5);
    printf("+%d",5);
    printf("\nHasil : %d",hasil_6);
    printf("\n");

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 3 \n");
    printf("===========================================\n");

    printf("%d x %d = \n",9,2);
    printf("\nHasil : %d",mul_rec(9,2));
    printf("\n");

    printf("%d x %d = \n",2,5);
    printf("\nHasil : %d",mul_rec(2,5));
    printf("\n");

    printf("%d x %d = \n",7,4);
    printf("\nHasil : %d",mul_rec(7,4));
    printf("\n");

    printf("%d x %d = \n",5,5);
    printf("\nHasil : %d",mul_rec(5,5));
    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 4 \n");
    printf("===========================================\n");

    printf("%d : %d = \n",20,5);
    printf("\nHasil : %d",div_rec(20,5));
    printf("\n");

    printf("%d : %d = \n",30,5);
    printf("\nHasil : %d",div_rec(30,5));
    printf("\n");

/*    printf("%d %d = \n",35,6);
    printf("\nHasil : %d",div_rec(35,6));
    printf("\n");

    printf("%d \% %%d = \n",25,4);
    printf("\nHasil : %d",div_rec(25,4));
    printf("\n");
*/

    printf("===========================================\n");
    printf("\t\t Tugas 5 \n");
    printf("===========================================\n");

    printf("%d pangkat %d = \n",5,2);
    printf("\nHasil : %d",pow_rec(5,2));
    printf("\n");

    printf("%d pangkat %d = \n",6,4);
    printf("\nHasil : %d",pow_rec(6,4));
    printf("\n");
    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 6 \n");
    printf("===========================================\n");

    printf("Masukkan angka faktorial : ");
    scanf("%d",&fakto);

    printf("Hasil : %d\n",factorial(fakto));
    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 7 \n");
    printf("===========================================\n");
    printf("Deret fibbonanci ke : ");
    scanf("%d",&fibo);

    for(i=0;i<fibo;i++)
    {
        printf("%d ",fibonancci(i));
    }
    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 8 \n");
    printf("===========================================\n");

    int data[]={2,5,7,9,12,16,NULL};
    printf("\n");
    hsl_1=sum_transversal(data,6);
    printf("hasil array= %d \n",hsl_1);

    int data2[] = {3, 5, 6, 8, 1, 8, NULL};
    printf("\n");
    hsl_2=sum_transversal(data2,6);
    printf("hasil array= %d \n",hsl_2);
    return 0;
}
