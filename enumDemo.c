#include <stdio.h>
#include <string.h>
int main() {

    enum days {
        sun,mon,tue,wed,thu,fri,sat
    };
    
    enum months {
        jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

    enum months m;
    
    int i = sat;

    printf("%d\n", sat);
    printf("%d\n",i); 
    

    m=aug;    

    printf("%d\n", m);

    
    return 0;

}
