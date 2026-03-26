#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...) {
    va_list args;
    va_start(args, count);

    if (type == 'S') {      
        for (int i = 0; i < count; i++) {
            printf("%s", va_arg(args, char*));
            if(i < count - 1){
                printf(" ");
            }
        }
        printf("\n");
    } else if (type == 'C') { 
        for (int i = 0; i < count; i++) {
            printf("%c", va_arg(args, int)); 
        }
        printf("\n");
    } else if (type == 'D') { 
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += va_arg(args, int);
        }
        printf("%d\n", sum);
    }

    va_end(args);
}

int main(){
   my_sum('S', 2, "Hello", "World"); 
   my_sum('C', 3, 'C', 'N', 'U');    
   my_sum('D', 4, 10, 20, 30, 40);   

   return 0;
}
