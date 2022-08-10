#include <stdio.h>

int main(){
    int nume, fim = 0, resultado, x;
    scanf("%d", &nume);

    do{
        for(x = 1; x * x <= nume; x++){
            if(nume % x == 0){
                resultado = x;
            }
        }
        fim += 1;
        nume -= resultado;
    }while(nume > 0);

    if(fim % 2 == 0){
        printf("true\n");
    }
    else{
        printf("false\n");
    }

    return 0;
}