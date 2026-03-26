#include <stdio.h>
#include <stdarg.h>

int average(int count, ...) {
    va_list args;         
    va_start(args, count);  

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }

    va_end(args); 

    if (count == 0) return 0; 
    return sum / count;
}

int main(){

     printf("%d\n", average(3, 10, 20, 30));
     printf("%d\n", average(5, 10, 20, 30, 40, 50));
  
    return 0;
}
