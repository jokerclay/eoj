#include <stdio.h>

int main() {
    int a, b, c;
    // 使用 scanf 函数时别忘记 &
    // a 的地址， b 的地址 作为参数
    // 存储到 a b  变量中
    scanf("%d%d",&a, &b);
    printf("%d", a+b);
    return 0;
}

