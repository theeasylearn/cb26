// 1 guess the number : take input from user until he enters the key                               -> 3 marks

// 2 length of password : print "strong" if length > 6, print "weak " if length <= 6 USING LOOP    -> 3 marks

// 3 Multiplication table : take n {input} from user and print table of n                          -> 3 marks

// 4   A                                                                                           -> 3 marks
//     B C
//     D E F

// 5 Celsius to Fahrenheit conversion : (0°C × 9/5) + 32 = 32°F                                    -> 3 marks

// 6 print the highest marks of three students                                                     -> 3 marks

// 7 print highest num of given two nums using TERNARY OPERATOR                                    -> 3 marks

// 8 print reverse of a number                                                                     -> 3 marks

// 9 swap two nums variable                                                                        -> 1 mark

// total                                                                                           25 marks

#include <stdio.h>
void main()
{
    // 1
    /*
    int key = 10;
    int input;

    do {
        printf("Enter a number : ");
        scanf("%d", &input);
    } while (key != input);

    printf("You have entered the key");
    */

    //    2
    /*
        int password = 1234567 ;
        int count = 0;

        while (password != 0) {
            count++; // count =  1 // 2 // 3 // 4 // 5 // 6
            password /= 10; // pass = 12345// 1234 // 123 // 12 // 1 // 0
        }

        if (count > 6) printf("Strong ");
        else printf("Weak ");
        */

    //    3
    /*
        int num;
        printf("Enter a number : ");
        scanf("%d", &num);

        // printf("%d \n", num * 1);
        // printf("%d \n", num * 2);
        // printf("%d \n", num * 3);
        // printf("%d \n", num * 4);
        // printf("%d \n", num * 5);

        for (int i = 1; i <= 10 ; i++) {
            printf("%d * %d = %d \n", num, i, num * i);
        }
        */

    //    4

    //     A                                                                                           -> 3 marks
    //     B C
    //     D E F
    /*
        char ch = 'A';

        // printf("%c ", ch);
        // printf("\n");

        // ch++; // B
        // printf("%c ", ch);
        // ch++; // C
        // printf("%c ", ch);
        // printf("\n");

        // ch++;
        // printf("%c ", ch);
        // ch++;
        // printf("%c ", ch);
        // ch++;
        // printf("%c ", ch);

        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", ch);
                ch++; // B

                // printf("* ");
            }
            printf("\n");
        }

        */

    //    5
    /*
        float c , f ;
        c = 10;

        f = c * 9 / 5 + 32 ;

        printf("%.2f ", f);

    */
    // 6
    /*
    int marks1 = 10, marks2 = 20, marks3;

    printf("Enter marks : ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    if (marks1 >= marks2)
    {
        if (marks1 >= marks3)
        {
            printf("%d", marks1);
        }
        else
        {
            printf("%d", marks3);
        }
    }
    else
    {
        if (marks2 >= marks3)
        {
            printf("%d ", marks2);
        }
        else
        {
            printf("%d", marks3);
        }
    }

    */

//    7
/*
   int n1 = 1, n2 = 1;

//    condition ? true : false ;
    (n1 > n2) ? printf("%d" , n1) : printf("%d", n2);
*/


    // 8
/*
    int num = 2345;
    int rnum = 0;

    while (num != 0)
    {
        printf("%d    %d\n", rnum, num);
        rnum = rnum * 10 + num % 10; // rnum = 321  
        num = num / 10; // 0
    }
    
        printf("%d \n", rnum);
    */


//    9 
/*
    int num1 = 1, num2 = 2;

    int temp = num1; // temp = 1 
    num1 = num2; // num1 = 2 
    num2 = temp; // num2 = 1

    printf("%d \t %d", num1, num2);
    // num1 = num1 + num2; // num1= 3 
    // num2 = num1 - num2; // n2 = 1 
    // num1 = num1 - num2; // n1 = 2

    */

}