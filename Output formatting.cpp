#include<bits/stdc++.h>
using namespace std;
int main()
{
    printf("Strings:\n");
    char* s = "Hello";
    printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n",s,s,10,s,4,s,10,4,s);

    printf("Chars:\t%c \n", 65);
    printf("Integers:\n");
    printf("\tDecimal:\t%i %d %.6i %i %.0i %+i % i\n",1,2,3,0,0,4,-4);
    printf("\tHexadecimal:\t%x %x %X %#x\n",5,10,10,6);
    printf("\tOctal: t%o %#o %#o\n",10,10,4);

    printf("Floating Point:\n");
    printf("Rounding:\t%f %.0f %.32f\n",1.5,1.5,1.3);
    printf("Padding:\t05.2f %.2f %5.2f\n", 1.5, 1.5,1.5);
    printf("Scientific:\t%E %e\n",1.5,1.5);
    printf("Hexadecimal:\t%a %A\n",1.5,1.5);
    printf("Special values:\t0/0=%g 1/0=%g\n",0.0/0.0,1.0/0.0);

    printf("Variable width control:\n");
    printf("right-justified variable width: '%*c'\n", 5 ,'x');
    int r = std::printf("left justified variable width: '%*c'\n",-5,'x');
    printf("the last printed %d characters\n",-5,r);

    return 0;
}
