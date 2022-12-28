#include "utility.hpp"
extern "C" {
    #include "basic_mode.h"
    #include "conversion_mode.h"
    #include "about.h"
}

void mode_selection()
{
    char CALC_MODE[15];

    while(1)
    {
        mode_selec:

        printf("\n  If you want to do basic calculation (e.g. : solve a mathematical expression, factorize, etc.) then enter 'basic',"
        "\n  If you want to do conversion of units (e.g. : kg to g/tons, km to m/cm, l to ml, etc.) enter 'convert',"
        /*"\n  If you want to do algebraic formula calculation (e.g. : percentage, simple interest, etc.) enter 'alg-frml',"
        "\n  If you want to do geometry formula calculation (e.g. : perimeter, area, circumference, etc.) enter 'geo-frml'."*/
        "\n  To know about the developer or about the team or to report a bug enter 'about',"
        "\n  If you want to exit then enter 'exit'.");

        printf("\n\n  Enter here : ");
        scanf("%s" , CALC_MODE);

        clrscr();
        if(strcmp(CALC_MODE , "basic")==0)
        {
            printf("\n  You have selected basic mode.\n");
            loading();
            clrscr();
            basic_mode();
        }
        else if(strcmp(CALC_MODE , "convert")==0)
        {
            printf("\n  You have selected conversion mode.\n");
            loading();
            clrscr();
            conversion_mode();
        }
        else if(strcmp(CALC_MODE , "alg-frml")==0 || strcmp(CALC_MODE , "alg-frml -v.2.2")==0)
        {
            loading();
            clrscr();
            printf("\n  You found out an upcoming update!\n");
            my_pause();

            if(strcmp(CALC_MODE , "alg-frml -v.2.2")==0)
            {
                clrscr();
                //alg_frml_mode();
            }
        }
        else if(strcmp(CALC_MODE , "geo-frml")==0)
        {
            loading();
            clrscr();
            printf("\n  You found out an upcoming update!\n");
            my_pause();
            //geo_frml_mode();
        }
        else if(strcmp(CALC_MODE , "about")==0)
        {
            loading();
            clrscr();
            about();
        }
        else if(strcmp(CALC_MODE , "exit")==0)
        {
            clrscr();
            printf("\n  Thank you for using this app!");
            fflush(stdout);
            Sleep(3000);
            clrscr();
            exit(0);
        }
        else
        {
            printf("\n  Invalid input! Please retry.\n");
            goto mode_selec;
        }
    }
}

int main()
{
    clrscr(); printf("\033]0; Ultimate Portable Calculator \007");
    printf("\n  Hello User! Welcome to SSyntaKul Apps's Ultimate Portable Calculator");
    printf("\n\n  Please pick an option below and enter as asked.\n");
    mode_selection();
    return 0;
}