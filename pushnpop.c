#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int push();
int pop();
int options();
int i = 0;
int a[100];
int main() {
    int result;
  
    result = options();
    return 0;
}
int options() {
    int result;
    int n;
    printf("enter your choice:\n 1.push\n 2.pop\n 3.exit");
    scanf("%d",&n);
        if(n == 1)
            result = push();
        else if(n == 2)
            result = pop();
        else if(n == 3)
            exit(0);
    if(result == 0)
            options();
    return 0;
}
int push() {
    int x,j,d;
    printf("enter the element to be pushed:");
    scanf("%d",&x);
    a[i] = x;
    i++;
    printf("element is pushed\n");
    for(j = 0;j < i; j++)
        printf("%d",a[j]);
    printf("\n enter your choice:\n 1.to continue this topic\n 2.menu\n 3.exit");
    scanf("%d",&d);
    if(d == 1)
        push();
    else if(d == 2)
        return 0;
    else
        exit(0);
}
int pop() {
    int d,j;
    i--;
    for(j = 0; j < i; j++)
        printf("%d",a[j]);
    if(i == 0) {
        printf("no elements in array to pop\n");        
        exit(0);
    }
    printf("\n enter your choice:\n 1.to continue this topic\n 2.menu\n 3.exit");
    scanf("%d",&d);
    if(d == 1)
        pop();
    else if(d == 2)
        return 0;
    else
        exit(0);    
}
              


