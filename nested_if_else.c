#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if(tk >= 20000)
    {
        printf("Ami coxs bazar jabo\n");

        if (tk >= 40000)
        {
            printf("Ami bides jabo");

        }
        else
        {
            printf("Ami ghore fire asbo");
        }
        
    }

    else
    {
        printf("Ami kothao jabo na. Tk nai Gorib");
    }

    return 0;
};