#include <stdio.h>
// struct lass with only dat members and no methods
struct car {
    char *name;
    float price;
    int speed;
};

int main(void)
{
    struct car saturn = {.name="Saturn SL/2",.price=2456.12,.speed=50};

    printf("Name: %s\n", saturn.name);
    printf("Price: %f\n", saturn.price);
    printf("Speed: %d\n", saturn.speed);
    
}