#include <stdio.h>

int main (){
    int a=5;
    int b=31;
    while (a!=b){
        if (a<b){
            b=b-a;
        }
        if (b<a){
            a=a-b;
        }
    }
    printf ("%d\n", a);
    return 0;
}
