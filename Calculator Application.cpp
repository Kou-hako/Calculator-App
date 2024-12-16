#include<stdio.h>
#include<math.h>
int bintodecimal(){
	int bin, num = 0, power = 1, rem;
	printf("Enter the binary number you would like to convert to decimal\n");
	scanf("%d", &bin);
	 while (bin != 0)
	 {
	 	rem = bin % 10;
	 	num = num + (rem*power);
	 	bin = bin / 10;
	 	power = power * 2;
	 }
	 return num;
}
int decimaltobin(){
	int num, remainder = 0, i = 0, binary[8];
	printf("Input an integer value to convert it into binary\n");
	scanf("%d", &num);
	while (num!=0)
	{
		remainder = num % 2;
		i = i + 1;
		num = num / 2;
		binary[i] = remainder;
	 } 
	 printf("Binary representation is as follows\n");
	 while (i!=0)
	 {
	 	
	 	printf("%d", binary[i]);
	 	i = i - 1;
	 }
}
int main(){
	int exit = 0, op; 
	float num1, num2;
	printf("Welcome to my calculator application\n");
	printf("\n\n");
	while (exit==0){
		
		printf("Input one of the following options for your desired calculation\n\n");
		printf("Input 1 for Arithmetic operations\n");
		printf("\nInput 2 for Fibonacci series\n");
		printf("\nInput 3 for Trigonometric functions\n");
		printf("\nInput 4 for basic differentiation of any polynomial (Denominator must be 1)\n");
		printf("\nInput 5 for finding roots of a polynomial (Quadratic Formula Application)\n");
		printf("\nInput 6 for finding the distance between two points\n");
		printf("\nInput 7 to calculate combinations\n");
		printf("\nInput 8 to calculate permutations\n");
		printf("\nInput 9 for number system conversions\n");
		
		scanf("%d", &op);
		printf("\n");
			while (op < 1 || op > 9){
			
			printf("Wrong input, please input one of the options mentioned above\n");
			scanf("%d", &op);}
		
		
		if (op == 1){
			int oper; 
			float ans;
			
			printf("Enter one of the following numbers for your desired operation\n");
			printf("For addition, enter 1\n");
			printf("For subtraction, enter 2\n");
			printf("For multiplication, enter 3\n");
			printf("For division, enter 4\n");
			printf("For square function enter 5\n");
			printf("For cube function enter 6\n");
			printf("To find a number raised to a power of your choosing enter 7\n");
			
			scanf("%d", &oper);
			while (oper < 1 || oper > 7){
			printf("Wrong input, please input one of the options mentioned above\n");
			scanf("%d", &oper);
				
			}
			float num;
			
			if (oper == 1){
				printf("Enter the two numbers you want to perform your calculation with\n");
			    scanf("%f", &num1);
			    scanf("%f", &num2);
			    
				ans = num1 + num2;
			}
			
			else if (oper == 2){
				printf("Enter the two numbers you want to perform your calculation with\n");
			    scanf("%f", &num1);
			    scanf("%f", &num2);
			    
				ans = num1 - num2;
			}
			
			else if (oper == 3){
				printf("Enter the two numbers you want to perform your calculation with\n");
			    scanf("%f", &num1);
			    scanf("%f", &num2);
			    
				ans = num1 * num2;
			}
			
			else if (oper == 4){
				printf("Enter the two numbers you want to perform your calculation with\n");
			    scanf("%f", &num1);
			    scanf("%f", &num2);
			    
				ans = num1 / num2;
			}
			
			else if (oper == 5){
				
				printf("Enter the number you want to find the square of\n");
				scanf("%f", &num);
				ans = num * num;
			}
			
			else if (oper == 6){
				printf("Enter the number you want to find the cube of\n");
				scanf("%f", &num);
				ans = num * num * num;
			}
			
			else if (oper == 7){
				int i, pow;
				float a;
				
				printf("Enter the power you want to raise number to\n");
				scanf("%d", &pow);
				printf("Enter the number you want to raise\n");
				scanf("%f", &num);
				
				a = num;
				for (i=2;i<=pow;i++){
					num = num * a;
				}
				ans = num;
			}
			printf("Your answer is %0.2f\n", ans);
			printf("To quit the program enter 1, to continue calculations enter 0\n");
			scanf("%d", &exit);
			}
			
			else if (op == 2){
			printf("Welcome to Fibonacci series application\n");
			int n, i; 
			long next, a = 0, b = 1;
			
			printf("Enter the number of terms you want for the series\n");
			scanf("%d", &n);
			
			printf("The Fibonacci series is as follows\n");
			printf("%d, %d, ", a, b);
			next = a + b;
			for (i = 3; i <= n; ++i){
            printf("%ld, ", next);
            a = b;
            b = next;
            next = a + b;
			}
			printf("\n");
			printf("To exit the application enter 1, to continue calculations enter 0\n");
			scanf("%d", &exit);	
			}
			
			else if (op == 3){
			    float degree, radian;
			    const float pi = 3.14159;
				
				printf("The calculation for the angle will be done for all trigonometric functions\n");
				printf("Enter the angle in degrees\n");
				
				scanf("%f", &degree);
				radian = degree * (pi/180.0);
				printf("Sin (%0.3f) = %f\n", degree, sin(radian));
				printf("Cos (%0.3f) = %f\n", degree, cos(radian));
				printf("Tan (%0.3f) = %f\n", degree, tan(radian));
				printf("CoSec (%0.3f) = %f\n", degree, 1/sin(radian));
				printf("Sec (%0.3f) = %f\n", degree, 1/cos(radian));
				printf("Cot (%0.3f) = %f\n", degree, 1/tan(radian));
				printf("To quit the program enter 1, to continue calculations enter 0\n");
			    scanf("%d", &exit);
			}
			    
			else if (op == 4){
				float x, a[10], y1, dy1;
                int deg, i;

                printf("Enter the degree of polynomial equation: ");
                scanf("%d", &deg);
				printf("Enter the value of x for which the equation is to be evaluated: ");
                scanf("%f", &x);

                for (i = 0; i <= deg; i++) {
                printf("Enter the coefficient of x to the power %d: ", i);
                scanf("%f", &a[i]);
                }
                float d[10], pd = 0, ps;
                
				for (i = 0; i <= deg; i++) {
                ps = pow(x, deg - (i + 1));
                d[i] = (deg - i) * a[deg - i] * ps;
                pd = pd + d[i];
                }
                printf("\nThe value of the derivative of the polynomial equation at x = %.2f is: %.2f", x, pd);
                printf("\nTo quit the program enter 1, to continue calculations enter 0\n");
			    scanf("%d", &exit);
			    }
			    
				else if (op == 5){
			    float a, b, c;
	            float d, x1, x2;
	            printf("This program helps calculate the roots for quadratic equations\n");
	            printf("Enter the value of a, b and c respectively\n");
	            scanf("%f %f %f", &a, &b, &c);
	            
				while (a==0) {
				printf("A must be greater than 0. Not 2nd degree\n");
				printf("Enter the value of a, b and c again\n");
				scanf("%f%f%f", &a, &b, &c);
				}
	            
	            
            	d = (b*b) - 4*(a*c); d=int(d);
	            if (d < 0){
				printf("There are no real roots\n");
	        }
				else if (d == 0)		
		        {
		        x1 = (-b)/(2*a);
		        printf("There are two equal roots\n");
		        printf("%.3f %.3f\n", x1, x1);
	           }
            	else 
              	{
		        x1 = ((-b)-sqrt(d))/(2*a);
		        x2 = ((-b)+sqrt(d))/(2*a);
		        printf("There are two different roots\n");
		        printf("%.3f %.3f\n", x1, x2);
				}
		        
		        printf("To quit the program enter 1, to continue calculations enter 0\n");
			    scanf("%d", &exit);
		    }
		        
				else if (op == 6){
		        	float x1, x2, y1, y2, x, y, dist;
		        	printf("Please enter the x and y coordinates respectively of the first point\n");
		        	scanf("%f", &x1);
		        	scanf("%f", &y1);
		        	printf("Please enter the x and y coordinates respectively of the second point\n");
		        	scanf("%f", &x2);
		        	scanf("%f", &y2);
		        	
		        	x = (x2-x1) * (x2-x1);
		        	y = (y2-y1) * (y2-y1);
		        	dist = sqrt(x + y);
		        	
		        	printf("The distance between (%0.3f, %0.3f) and (%0.3f, %0.3f) is = %0.4f units\n", x1, y1, x2, y2, dist);
		        	printf("To exit the application enter 1, to continue calculations enter 0\n");
			        scanf("%d", &exit);	
				}
				
				else if (op == 7){
					int n1, n2, a, nf=1, mf = 1, sub, bf=1;
                    float comb;
                    printf("Enter the total number of objects in the set (the value of n)\n");
                    scanf("%d", &n1);
                    printf("Enter the value of r\n");
                    scanf("%d", &n2);
                    
                    	while (n1<n2)
                    {
	                printf("Wrong data, value of n must be greater than value of r\n");
	                printf("Enter value of n again\n");
	                scanf("%d", &n1);
	                printf("Enter value of r again\n");
	                scanf("%d", &n2);
                    }

                    for (a=1;a<=n1;a++)
                    {
	                nf = nf * a;	
                    }
                    for (a=1;a<=n2;a++)
                    {
                    mf = mf * a;
                    }
                    sub = n1 - n2;
                    for(a=1;a<=sub;a++)
                    {
	                bf = bf * a;
                    }
                    comb = (nf/(mf * bf));
                    printf("The possible combinations for %dC%d are %.1f\n", n1, n2, comb);  
                    printf("To quit the program enter 1, to continue calculations enter 0\n");
			        scanf("%d", &exit);
				}
				
				else if (op == 8){
					int n1, n2, nf = 1, mf = 1, a, sub; 
					float perm;
					printf("Enter the total number of objects in the set (the value of n)\n");
					scanf("%d", &n1);
					printf("Enter the value of r\n");
					scanf("%d", &n2);
					
					while (n1<n2)
                    {
	                printf("Wrong data, value of n must be greater than value of r\n");
	                printf("Enter value of n again\n");
	                scanf("%d", &n1);
	                printf("Enter value of r again\n");
	                scanf("%d", &n2);
                    }

                    for (a=1;a<=n1;a++)
                    
                    {
	                nf = nf * a;
						
					}
                    sub = n1 - n2;
                    
                    for (a=1;a<=sub;a++)
                    {
                    	
	                mf = mf * a;
						
					}
					
					perm = nf/mf;
					printf("The permutations for %dP%d is = %0.1f\n", n1, n2, perm);
					printf("To quit the program enter 1, to continue calculations enter 0\n");
			        scanf("%d", &exit);
				}
			else if (op==9){
				int oper, result;
				
				printf("\nInput 1 if you would like to convert from binary to decimal\n");
				printf("\nInput 2 if you would like to convert from decimal to binary\n");
				scanf("%d", &oper);
				while (oper > 2 || oper < 1){
					
				printf("Wrong input, please enter one of the following options\n");
				printf("\nInput 1 if you would like to convert from binary to decimal\n");
				printf("\nInput 2 if you would like to convert from decimal to binary\n");
				scanf("%d", &oper);
				
				}
				if (oper==1){
					result = bintodecimal();
					printf("\nThe decimal form of this binary number is : %d\n", result);
				}
				else if (oper==2){
				decimaltobin();
					}	
				}
				printf("\nTo quit the program enter 1, to continue calculations enter 0\n");
			    scanf("%d", &exit);
		    }
		        printf("\nThank you for using my calculator application\n");
		        return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
