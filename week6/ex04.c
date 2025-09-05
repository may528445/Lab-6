#include <stdio.h>

typedef struct {
    float x, y;
} Vector;

int main(void){
    Vector u,v,r;
    printf("u_x: "); scanf("%f",&u.x);
    printf("u_y: "); scanf("%f",&u.y);
    printf("v_x: "); scanf("%f",&v.x);
    printf("v_y: "); scanf("%f",&v.y);
    r.x = u.x + v.x;
    r.y = u.y + v.y;
    printf("Resultant vector is equvalence to %.1fi + %.1fj\n", r.x, r.y);
    return 0;
}
