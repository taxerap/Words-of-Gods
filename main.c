#include <stdio.h>

double m[] = { 0.0000000000000000000000160955323765985544618857184314, 771 };

int main( void )
{
    if (m[1]--)
    {
        m[0] *= 2;
        main();
    }
    else
    {
        printf((char *)m);
        printf("\n");
    }
}
