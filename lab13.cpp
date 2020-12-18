#include <stdio.h>
#define MAX 1000
 
void Input(int a[], int n){
    for(int i = 1;i < n; i++){
        printf("Numbered for the barrel %d: ", i);
        scanf("%d", &a[i]);
    }
}
 
void Output(int a[], int n){
    for(int i = 1;i < n; i++){
        printf("%4d", a[i]);
    }
}
 
void Delete(int a[], int &n, int pos){  // This is the function to take
    // array empty, can't take.
    if(n <= 1){
        return;
    }
    // if pos <= 0 => delete the first
    if(pos < 0){
        pos = 0;
    }
    // if pos >= n => delete the end
    else if(pos >= n){
        pos = n-1;
    }
    // move array
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    // delete after taking it out.
    --n;
}
 
int main(){
    int a[MAX];
    int n;
    int pos;
    printf("\nEnter the barrel number: ");
    scanf("%d", &n);
    Input(a, n);
    Output(a, n);
    
    printf("\n=======Take the element out======\n");
    printf("\nEnter the desired location: ");
    scanf("%d", &pos);
    Delete(a, n, pos);
    printf("\nThe array after take it out: ");
    Output(a, n);
    printf("\nDone!"); 
}
 