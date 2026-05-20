#include<stdio.h>

int main(){
int n = 0;
unsigned long long fatorial = 1;

printf("digite um numero\n");
scanf("%d",&n);

for(int i = 1; i<= n;i++){
    fatorial *= i;
}
printf("o fatorial de %d é %llu \n", n, fatorial);
printf("feito por benjamim messias");

return 0;
}
