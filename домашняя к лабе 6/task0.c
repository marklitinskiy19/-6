#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_CTYPE, "RUS");
    int n;
    printf("������� ����������� �����: ");
    scanf("%d", &n);

    int a = n / 100;        
    int b = n / 10 % 10;     
    int c = n % 10;        

    if (a == b && b == c) {
        printf("��� ��� ������� �����");
    }
    else if (a == b) {
        printf("����� ����� � �������� �����");
    }
    else if (a == c) {
        printf("����� ����� � ������ �����");
    }
    else if (b == c) {
        printf("����� �������� � ������ �����");
    }
    else {
        printf("��� ������� ��������");
    }

    return 0;
}