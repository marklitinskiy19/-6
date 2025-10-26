#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_CTYPE, "RUS");
    int n;
    printf("¬ведите трехзначное число: ");
    scanf("%d", &n);

    int a = n / 100;        
    int b = n / 10 % 10;     
    int c = n % 10;        

    if (a == b && b == c) {
        printf("все три разр€да равны");
    }
    else if (a == b) {
        printf("число сотен и дес€тков равно");
    }
    else if (a == c) {
        printf("число сотен и единиц равно");
    }
    else if (b == c) {
        printf("число дес€тков и единиц равно");
    }
    else {
        printf("¬се разр€ды различны");
    }

    return 0;
}