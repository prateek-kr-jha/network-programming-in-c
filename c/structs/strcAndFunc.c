#include <stdio.h>

// If you have a struct, use dot (.).
// If you have a pointer to a struct, use arrow (->).
// comparing struct -> compare each field
// copying: strct a = b;

struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *sat, float price)
{
    // (*sat).price = price;
    sat->price = price;
}

int main(void)
{
    struct car saturn = {.speed=17, .name="Saturn SL/2"};
    struct car b = saturn;


    printf("Name: %s\n", b.name);
    printf("Price: %f\n", b.price);
    printf("Speed: %d\n", b.speed);
    
}