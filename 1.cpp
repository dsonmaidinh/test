#include <stdio.h>
#include <math.h>

int check(int n){
    for (int i=2; i<5;i++){break;}
    return 0;
}

int main(){
    int n, uoc=0;
    printf("nhap n: ");
    scanf("%d",&n);

    for (int i=2; i <= sqrt(n);i++){
        if (n%i==0) uoc++;
    }
    if (uoc==0) printf("%d la snt",n);
    return 0;
}