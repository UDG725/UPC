void conversion_mode()
{
    char cm_selec[6], entry[5]; extern char temp;
    double unit_value;

    while(1)
    {
        cm_selec:

        printf("\n  If you want to convert units of length enter 'length',"
        "\n  If you want to convert units of mass/weight enter 'mass',"
        "\n  If you want to convert units of volume enter 'volume',"
        "\n  If you want to go back enter 'back'.");

        printf("\n\n  Enter here : ");
        scanf("%s" , cm_selec);

        clrscr();
        if(strcmp(cm_selec , "length")==0)
        {
            printf("\n  To convert centimeter(s) to meter(s) enter 'cm-m',"
            "\n  To convert centimeter(s) to kilometer(s) enter 'cm-km',"
            "\n  To convert meter(s) to centimeter(s) enter 'm-cm',"
            "\n  To convert meter(s) to kilometer(s) enter 'm-km',"
            "\n  To convert kilometer(s) to centimeter(s) enter 'km-cm',"
            "\n  To convert kilometer(s) to meter(s) enter 'km-m'.");

            printf("\n\n  Enter here : ");
            scanf("%s" , entry);

            clrscr();
            if(strcmp(entry , "cm-m")==0)
            {
                printf("\n  Enter the value of centimeter(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of meter(s) is %.5lf" , unit_value/100);
            }
            else if(strcmp(entry , "cm-km")==0)
            {
                printf("\n  Enter the value of centimeter(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of kilometer(s) is %.5lf" , unit_value/100000);
            }
            else if(strcmp(entry , "m-cm")==0)
            {
                printf("\n  Enter the value of meters(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of centimeter(s) is %.5lf" , unit_value*100);
            }
            else if(strcmp(entry , "m-km")==0)
            {
                printf("\n  Enter the value of meter(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of kilometer(s) is %.5lf" , unit_value/1000);
            }
            else if(strcmp(entry , "km-cm")==0)
            {
                printf("\n  Enter the value of kilometer(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of centimeter(s) is %.5lf" , unit_value*100000);
            }
            else if(strcmp(entry , "km-m")==0)
            {
                printf("\n  Enter the value of kilometer(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of meter(s) is %.5lf" , unit_value*1000);
            }
            else
            {
                printf("\n  Invalid input! Please retry.");
            }
        }
        else if(strcmp(cm_selec , "mass")==0)
        {
            printf("\n  To convert gram(s) to kilogram(s) enter 'g-kg',"
            "\n  To convert gram(s) to ton(s) enter 'g-t',"
            "\n  To convert kilogram(s) to gram(s) enter 'kg-g',"
            "\n  To convert kilogram(s) to ton(s) enter 'kg-t'"
            "\n  To convert ton(s) to gram(s) enter 't-g'"
            "\n  To convert ton(s) to kilogram(s) enter 't-kg'");

            printf("\n\n  Enter here : ");
            scanf("%s" , entry);

            clrscr();
            if(strcmp(entry , "g-kg")==0)
            {
                printf("\n  Enter the value of gram(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of kilogram(s) is %.5lf" , unit_value/1000);
            }
            else if(strcmp(entry , "g-t")==0)
            {
                printf("\n  Enter the value of gram(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of ton(s) is %.5lf" , unit_value/1000000);
            }
            else if(strcmp(entry , "kg-g")==0)
            {
                printf("\n  Enter the value of kilogram(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of gram(s) is %.5lf" , unit_value*1000);
            }
            else if(strcmp(entry , "kg-t")==0)
            {
                printf("\n  Enter the value of kilogram(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of ton(s) is %.5lf" , unit_value/1000);
            }
            else if(strcmp(entry , "t-g")==0)
            {
                printf("\n  Enter the value of ton(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of gram(s) is %.5lf" , unit_value*1000000);
            }
            else if(strcmp(entry , "t-kg")==0)
            {
                printf("\n  Enter the value of ton(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of kilogram(s) is %.5lf" , unit_value*1000);
            }
            else
            {
                printf("\n  Invalid input! Please retry.");
            }
        }
        else if(strcmp(cm_selec , "volume")==0)
        {
            printf("\n  To convert mililitre(s) to litre(s) enter 'ml-l',"
            "\n  To convert mililitre(s) to kilolitre(s) enter 'ml-kl',"
            "\n  To convert litre(s) to mililitre(s) enter 'l-ml',"
            "\n  To convert litre(s) to kilolitre(s) enter 'l-kl'"
            "\n  To convert kilolitre(s) to mililitre(s) enter 'kl-ml'"
            "\n  To convert kilolitre(s) to litre(s) enter 'kl-l'");

            printf("\n\n  Enter here : ");
            scanf("%s" , entry);

            clrscr();
            if(strcmp(entry , "ml-l")==0)
            {
                printf("\n  Enter the value of mililitre(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of litre(s) is %.5lf" , unit_value/1000);
            }
            else if(strcmp(entry , "ml-kl")==0)
            {
                printf("\n  Enter the value of mililitre(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of kilolitre(s) is %.5lf" , unit_value/1000000);
            }
            else if(strcmp(entry , "l-ml")==0)
            {
                printf("\n  Enter the value of litre(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of mililitre(s) is %.5lf" , unit_value*1000);
            }
            else if(strcmp(entry , "l-kl")==0)
            {
                printf("\n  Enter the value of litre(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of kilolitre(s) is %.5lf" , unit_value/1000);
            }
            else if(strcmp(entry , "kl-ml")==0)
            {
                printf("\n  Enter the value of kilolitre(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of mililitre(s) is %.5lf" , unit_value*1000000);
            }
            else if(strcmp(entry , "kl-l")==0)
            {
                printf("\n  Enter the value of kilolitre(s) : ");
                scanf("%lf" , &unit_value);
                printf("\n  The value of litre(s) is %.5lf" , unit_value*1000);
            }
            else
            {
                printf("\n  Invalid input! Please retry.");
            }
        }
        else if(strcmp(cm_selec , "temperature")==0)
        {
            printf("\n  You found out an upcoming update!");
        }
        else if(strcmp(cm_selec , "currency")==0)
        {
            printf("\n  You found out an upcoming update!");
        }
        else if(strcmp(cm_selec , "data")==0)
        {
            printf("\n  You found out an upcoming update!");
        }
        else if (strcmp(cm_selec , "time")==0)
        {
            printf("\n  You found out an upcoming update!");
        }
        else if(strcmp(cm_selec , "back")==0)
        {
            clrscr();
            loading();
            clrscr();
            mode_selection();
        }
        else
        {
            printf("\n  Invalid input! Please retry.\n");;
            goto cm_selec;
        }

        scanf("%c" , &temp); printf("\n");
        my_pause(); clrscr();
    }
}