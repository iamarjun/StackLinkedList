#include <stdio.h>
#include "stack.h"

int main() {

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print();
    pop();
    print();
    pop();
    print();
    printf("%d",Top());
    if (isEmpty() == 0)
        printf("stack empty !!");
    else
        printf("Nope !");
    return 0;
}