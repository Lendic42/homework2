#include <stdio.h>

int main(void)
{
    float area = 100.0f;
    int people = 10000;

    printf("Плотность населения: %.2f человек на км2\n", people / area);

    return 0;
}
