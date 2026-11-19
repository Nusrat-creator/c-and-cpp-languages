#include <stdio.h>
#include <stdlib.h>

int main (){
    /*for(int i = 4; i >0;i--){
        for(int j = 1 ; j<= 5-i;j++){
            printf("#");
    }
        printf("\n");
}
    for(int k = 1;k<=3;k++){
        for(int f = 1;f<=4-k;f++){
            printf("#");
        }
        printf("\n");
 } menim usulum*/


    for(int i = -(4-1);i<=4-1;i++){
        for(int j = 1;j<=4-abs(i);j++){
            printf("#");
        }
        printf("\n");
    }













    /*for(int i = 0 ; i<=5 ; i++){
        for(int j = 1 ; j<=6-i ; j++){
            printf("#");
        }
        printf("\n");
    }*/









    /*for(int i = 5;i>0;i--){
        for(int j = 0;j<6-i;j++){
            printf("#");
        }
        printf("\n");
    }

    for(int row = 1; row <= 5;row++){
        printf(" %i ", 6-row);
    }*/



}