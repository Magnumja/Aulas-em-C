#include <stdio.h>

int main()
{
    int x = 0;
    float alturaJoao = 150, alturaJose = 110;

    for (; alturaJoao >= alturaJose; x++)
    {
        alturaJoao += 2;
        alturaJose += 3;
    }

    printf("O José será maior que o João em %d anos.\n", x);

    return 0;
}
