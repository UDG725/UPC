void basic_mode()
{
    long factor = 2, no_of_factors = 0, num[2];
    char bm_selec[10], experssion[1000]; extern char temp;

    while(1)
    {
        bm_selec:

        printf("\n  If you want to solve a mathematical expression enter 'math-exp',"
        "\n  If you want to multiplication table of a number enter 'm-t',"
        "\n  If you want to get factors of a number enter 'factorize',"
        "\n  If you want to go back enter 'back'.");

        printf("\n\n  Enter here : ");
        scanf("%s" , bm_selec);
        scanf("%c" , &temp);

        clrscr();
        if(strcmp(bm_selec , "math-exp")==0)
        {
            printf("\n  You have selected to solve a mathematical expression");

            printf("\n\n  Please note the opreators : "
            "\n    for addition '+'"
            "\n    for subtraction '-'"
            "\n    for multiplication '*'"
            "\n    for division '/'"
            "\n    for exponential power '^'");

            printf("\n\n  Enter the mathematical expression : ");
            scanf("%s" , experssion);
            printf("\n  Answer : %lf" , eval(experssion));
        }
        else if(strcmp(bm_selec , "m-t") == 0)
        {
            printf("\n  You have selected multiplication table of a number.");

            printf("\n\n  Enter the number of which you want the multiplication table");
            printf("\n\n  Enter here : ");
            scanf("%ld" , &num[0]);

            num[1] = 1;
            while (num[1]<=10){
                printf("\n  %ld x %ld = %ld" , num[0], num[1], num[0]*num[1]);
                ++num[1];
            }
            num[0]=0; num[1]=0;

            scanf("%c" , &temp);
        }
        else if(strcmp(bm_selec , "factorize")==0)
        {
            printf("\n  You have selected to factorize a number.");

            printf("\n\n  Enter the number you want to factorize : ");
            scanf("%ld" , &num[0]);
            num[1]=num[0];

	        printf("\n  %ld = " , num[0]);
            while(true)
            {
		        if(num[0]>=-1 && num[0]<=1)
                {
                    printf("%ld." , num[0]);
                    break;
                }
                else if(num[0]%factor==0)
                {
                    printf("%ld*" , factor);
                    num[0] /= factor;
                } 
                else 
			        ++factor;
            }
            
            num[0]=num[1];

            printf("\n\n  Factors of %ld are : ", num[0]);
            if(num[0]==1 || num[0]==-1) 
		        printf("%ld, %ld.", num[0], -num[0]);
	        else if(num[0]==0) 
		        fprintf(stderr, "Math Error.");
	        else
	        {
		        printf("1, -1, ");
		        for(factor=2;; ++factor)
		        {
			        if (num[0]==factor || num[0]==-factor)
                    {
                        printf("%ld, %ld.", num[0], -num[0]);
                        break;
                    }
                    else if (num[0]%factor==0)
                        printf("%ld, %ld, ", factor, -factor);
		        }
	        }

            num[0]=num[1];
            
            if(num[0]>=-1 && num[0]<=1)
	        {
		        printf("\n\n  %ld is nor prime nor composite.", num[0]);
	        }
	        else
	        {
		        long factor = 2, no_of_factors = 0;
		        num[0] = labs(num[0]);
		        while(true)
		        {
			        if(num[0]%factor==0 && num[0]!=factor)
			        {
				        ++no_of_factors;
				        num[0] /= factor;
			        }
			        else if(num[0]%factor==0 && num[0]==factor) 
				        num[0] /= factor;
			        else if(num[0]==1 || num[0]==-1) 
				        break;
			        else
				        ++factor;
		        }

		        if(no_of_factors==0)
			        printf("\n\n  %ld is a prime number.", num[1]);
		        else
			        printf("\n\n  %ld is a composite number.", num[1]);
	        }

            factor=2; no_of_factors=0; num[0]=NULL; num[1]=NULL;
            scanf("%c" , &temp);
        }
        else if(strcmp(bm_selec , "back")==0)
        {
            clrscr();
            loading();
            clrscr();
            mode_selection();
        }
        else
        {
            printf("\n  Invalid input! Please retry.\n");
            goto bm_selec;
        }

        printf("\n"); my_pause(); clrscr();
    }
}