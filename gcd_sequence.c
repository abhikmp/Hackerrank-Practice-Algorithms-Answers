#include<stdio.h>

int gcd(int a, int b) {
    if(a == 0) {
        return b;
    }
    return gcd(b%a,a);
}
int calculate_gcd(int a[],int c) {
    if(c == 0) {
        return 0;
    }
    int result = a[0];
    for(int i=1;i<c;++i) {
        result = gcd(a[i],result);
    }
    return result;
}
int store_arr( int a1[], int a1_c, 
                int arr[], int n) {

                    int a2[100];
                    int a2_c=0;
                    int k=0;
                    int arr1[100],arr2[100];
                    int arr1_c = 0, arr2_c = 0;
                    for(int i=0;i<n;++i) {
                        if(a1[k] == i && k<a1_c) {
                            k++;
                            continue;
                        }
                        a2[a2_c] = i;
                        a2_c++;
                    }

                    for(int i=0;i<a1_c;++i) {
                        arr1[arr1_c] = arr[a1[i]];
                        arr1_c++;
                    }
                    
                    for(int i=0;i<a2_c;++i) {
                        arr2[arr2_c] = arr[a2[i]];
                        arr2_c++;
                    }
                    // printf("arr1 = ");
                    // for(int i=0;i<arr1_c;++i) {
                    //     printf("%d ",arr1[i]);
                    // }
                    // int r = calculate_gcd(arr1,arr1_c);
                    // printf("    gcd = %d    arr2 = ",r);
                    // for(int i=0;i<arr2_c;++i) {
                    //     printf("%d ",arr2[i]);
                    // }
                    // r = calculate_gcd(arr2,arr2_c);
                    // printf("    gcd = %d\n",r);
                    return (calculate_gcd(arr1,arr1_c) + calculate_gcd(arr2,arr2_c));
                    

}
int gcd_sequence(int arr[], int n) {
    int a1[100];
    int a1_count = 0;
    int gcd = 0;
    int max_gcd = 0;
    for(int count = 0; count < (1<<n); ++count) {
        a1_count = 0;
        for(int j=0;j<n;++j) {
            if((count & (1<<j)) > 0) {
                a1[a1_count] = j;
                a1_count++;
            }
        }
        gcd = store_arr(a1,a1_count,arr,n);

        if(gcd > max_gcd) {
            max_gcd = gcd;
        }
    }
    return max_gcd;
}

void main() {
    `int T, N;
    int arr[100];

    scanf("%d",&T);
    for(int i=0;i<T;++i) {
        scanf("%d",&N);
        for(int j=0;j<N;++j) {
            scanf("%d",&arr[j]);
        }
        
        int result = gcd_sequence(arr,N);
        printf("%d\n",result);
    }
}