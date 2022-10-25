#include<stdio.h>

int main() {
    char op, ex = 'n';            //연산자
    int num1, num2;        //입력받을 숫자

    printf("계산기 시작\n");
    while (ex == 'n') {
        printf("수식을 입력해주세요. : ");
        scanf("%d %c %d", &num1, &op, &num2);
        getchar();
        if (op == '+') {
            printf("%d %c %d = %d", num1, op, num2, num1 + num2);
        }
        else if (op == '-') {
            printf("%d %c %d = %d", num1, op, num2, num1 - num2);
        }
        else if (op == '*') {
            printf("%d %c %d = %d", num1, op, num2, num1 * num2);
        }
        else if (op == '/') {
            printf("%d %c %d = %f", num1, op, num2, (float)num1 / num2);
        }
        else if (op == '%') {
            printf("%d %c %d = %d", num1, op, num2, num1 % num2);
        }
        else {

        }
        printf("\n");
        printf("계산기를 종료하시겠습니까? (y/n) : ");
        scanf("%c", &ex);
        getchar();
    }
    printf("계산기를 종료했습니다.");
}
