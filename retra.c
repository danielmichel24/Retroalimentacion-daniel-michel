#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void arreglo()
{
    int i,total=0,prom=0,a[5];
    for (i=0;i<5;i++){
    printf("dime un numero ");
    scanf("%d",&a[i]);
    total=a[i]+total;
    system("cls");
    }
    for (i=0;i<5;i++){
    printf("%d \n",a[i]);
    }
    printf("total= %d\n",total);
    prom=total/i;
    printf("promedio= %d \n",prom);
    return(0);
}

