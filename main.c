#include <stdio.h>
#include "calc.h"
#include "showResult.h"

void main(){
    int a = 2,b = 3;
    printf("%d + %d = ",a,b);
    add(a,b);
    showAnswer();

    printf("%d - %d = ",a,b);
    sub(a,b);
    showAnswer();

    printf("%d * %d =",a,b);
    multipl(a,b);
    showAnswer();

    printf("%d / %d =",a,b);
    divison(a,b);
    showAnswer();
}