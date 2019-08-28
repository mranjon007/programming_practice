#include <iostream>

using namespace std;


// for(int i=0, i<n; i++){
//     printf("%d\n", i);
// }

void forward_loop(int i, int n)
{
    if(i==n)
    {
        return;
    }
    printf("%d\n", i);
    forward_loop(i+1, n);
}


// for(int i=n, i>0; i--){
//     printf("%d\n", i);
// }

void backword_loop(int i, int n)
{
    if(i==n){
        return;
    }
    backword_loop(i+1, n);
    printf("%d\n", i);
}


int main()
{
    printf("Forword Loop\n");
    forward_loop(0, 5);
    printf("Backword Loop\n");
    backword_loop(0, 5);
    return 0;
}