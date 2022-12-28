void basic_mode()
{
    int factor_found = 0, factor = 2, no_of_factors = 0, num[2];
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
            printf("\n  Answer : %lf\n" , eval(experssion));
        }
        else if(strcmp(bm_selec , "m-t") == 0)
        {
            printf("\n  You have selected multiplication table of a number.");

            printf("\n\n  Enter the number of which you want the multiplication table");
            printf("\n\n  Enter here : ");
            scanf("%d" , &num[0]);

            num[1] = 1;
            while (num[1]<=10){
                printf("\n  %d x %d = %d" , num[0], num[1], num[0]*num[1]);
                ++num[1];
            }
            num[0]=0; num[1]=0;
            
            printf("\n");
            scanf("%c" , &temp);
        }
        else if(strcmp(bm_selec , "factorize")==0)
        {
            printf("\n  You have selected to factorize a number.");

            printf("\n\n  Enter the number you want to factorize : ");
            scanf("%d" , &num[0]);
            num[1]=num[0];

	        printf("\n  %d = " , num[0]);
            while(factor_found==0)
            {
                if((num[0]%factor==0) && (num[0]!=0))
                {
                    printf("%d*" , factor);
                    num[0] = num[0]/factor;
                }
                else if(num[0]==-1 || num[0]==0 || num[0]==1)
                {
                    printf("%d." , num[0]);
                    factor_found=1;
                }
                else
                {
                    ++factor;
                }
            }
            factor=2; factor_found=0; num[0]=num[1];

            printf("\n\n  Factors of %d are : ", num[0]);
	        if(num[0]==1 || num[0]==-1)
	        {
		        printf("%d,%d.", num[0], num[0]*-1);
	        }
	        else if(num[0]==0)
	        {
		        printf("Math Error");
	        }
	        else
	        {
		        printf("1, -1, ");
		        while(factor_found==0)
		        {
			        if(num[0]%factor==0 && num[0]!=factor && num[0]!=factor*(-1))
			        {
				        printf("%d, %d, ", factor, (factor*(-1)));
				        ++factor;
			        }
			        else if(num[0]==factor || num[0]==factor*(-1))
			        {
				        printf("%d, %d.", num[0], (num[0]*(-1)));
				        ++factor_found;
			        }
			        else
			        {
				        ++factor;
			        }
		        }
	        }
            factor=2; factor_found=0; num[0]=num[1]; no_of_factors=0;
            
            if(num[0]==1 || num[0]==0)
	        {
		        printf("\n\n  %d is nor prime nor composite.\n", num[0]);
	        }
	        else if(num[0]<=-1)
	        {
		        printf("\n\n  It is very complicated to determine if a negative number is prime or composite.\n");
	        }
	        else
	        {
		        while(factor_found==0)
		        {
			        if(num[0]%factor==0 && num[0]!=factor && factor!=1)
			        {
				        ++no_of_factors;
				        num[0]=num[0]/factor;
			        }
			        else if(num[0]%factor==0 && (num[0]==factor || factor==1))
			        {
				        num[0]=num[0]/factor;
			        }
			        else if(num[0]==1)
			        {
				        ++factor_found;
			        }
			        else
			        {
			        	++factor;
			        }
		        }

		        if(no_of_factors==0)
		        {
		        	printf("\n\n  %d is a prime number.\n", num[1]);
		        }
		        else if(no_of_factors!=0)
		        {
		        	printf("\n\n  %d is a composite number.\n", num[1]);
		        }
	        }
            factor=2; factor_found=0; no_of_factors=0; num[0]=0; num[1]=0;
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

        my_pause(); clrscr();
    }
}