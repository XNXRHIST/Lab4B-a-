#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 2; i <= 20; i += 2) {
        sum += i * i;
    }

    printf("Сума квадратів всіх парних чисел у діапазоні [1;20]: %d\n", sum);

    return 0;
}
