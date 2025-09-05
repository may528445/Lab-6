#include <stdio.h>
#include <math.h>

static void print_clean_float(double x){
    char buf[64];
    snprintf(buf, sizeof(buf), "%.6g", x);
    fputs(buf, stdout);
}

int main(void){
    double x1,y1,x2,y2;
    printf("x1: "); scanf("%lf",&x1);
    printf("y1: "); scanf("%lf",&y1);
    printf("x2: "); scanf("%lf",&x2);
    printf("y2: "); scanf("%lf",&y2);
    double d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance between (");
    print_clean_float(x1); printf(", "); print_clean_float(y1);
    printf(") and ("); print_clean_float(x2); printf(", "); print_clean_float(y2);
    printf(") is %.3f unit(s)\n", d);
    return 0;
}
