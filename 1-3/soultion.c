#include <stdio.h>

int main() {
    int num, hr, min, sec;

    // get the number
    scanf("%d", &num);

    // get hour
    hr = num/3600;

    // get min
    min = ((num-3600*hr)/60);

    // get sec
    sec = ((num-3600*hr-60*min));

    // print out
    printf("%d:%d:%d\n",hr, min, sec);

    return 0;
}

