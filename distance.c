#include<stdio.h>
#include<stdlib.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

void main() {
    int a,b,c,d;
    int total_time = 0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int arr[3];
    int lo = min(min(a, b), c);
    int hi = max(max(a, b), c);
    int mid = a+b+c-lo-hi;
    // printf("%d %d %d",lo,mid,hi);
    int d1 = abs(lo-mid);
    int d2 = abs(mid-hi);
    int d3 = abs(lo-hi);
    
    // int d_lo = min(min(d1, d2), d3);
    // int d_hi = max(max(d1, d2), d3);
    // int d_mid = d1+d2+d3-d_lo-d_hi;
    // printf("%d %d %d",d1,d2,d3);
    while(d1 < d) {
        lo--;
        d1 = abs(lo-mid);
        // printf("%d\n",d1);
        d3 = abs(lo-hi);
        total_time++;
    }
    while(d2 < d) {
        hi++;
        d3 = abs(lo-hi);
        d2 = abs(mid-hi);
        total_time++;
    }
    while(d3 < d) {
        printf("third while_loop");   
        // total_time++;
    }
    printf("%d",total_time);
}