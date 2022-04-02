#include <stdio.h>

int main() {
    // get number
    int num;
    scanf("%d", &num);

    // print out
    void print_out(int num) {
        printf("sin(");
        printf("%d)",num);
        print_out(num);
        num--;
    }
    print_out(num);

    return 0;
}

