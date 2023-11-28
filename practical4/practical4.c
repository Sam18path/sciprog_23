#include <stdio.h>
#include <math.h>

double converttoradians(double degree);
double calarea(int n);

int main() {
    int n = 12;
    double area;
    area = calarea(n);
   int i;
double arr[n+1];
for(i=0;i<=n;i++){
arr[i]=tan(converttoradians(5.0*i));
printf("The value of tan(x) when x=%d is %.2f ",i*5,arr[i]);
printf("\n");

}

    printf("The approximation of tan(x) from 0-60 degrees using  trapezoidal rule is %.3f", area);
printf("\n");
printf("The actual value of tan(x) from 0-60 degrees is:%.3f",log(2.0));

    return 0;
}

double converttoradians(double degree) {
    return (degree * M_PI) / 180.0;
}

double calarea(int n) {
    int i;
    double arr[n + 1], rad, w;
    for (i = 0; i < n + 1; i++) {
        rad = tan(converttoradians(5.0 * i));
        arr[i] = rad;
    }
    double area = arr[0] + arr[n];
    for (i = 1; i < n; i++) {
        area = area + 2.0 * arr[i];
    }
    w = converttoradians((60.0 - 0) / (2.0 * n));
    area = area * w;
    return area;
}

