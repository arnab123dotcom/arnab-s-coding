#include <stdio.h>
#define m 50
int main(){
    int a[m],i,j,n,t,xchange;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        xchange=0;
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;
            xchange++;}
            }
        if(xchange==0)
            break;
    }
    printf("The greatest number is: %d\n",a[n-1]);
    printf("The smallest number is: %d\n",a[0]);
    return 0;
}