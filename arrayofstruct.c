#include <stdio.h>
#include <stdlib.h>
//number is array to input the answer, choice is an integer to input the number from the user just to display the question
int number[3][3], modified_check,i, j;
void display_question1();
void display_question2();
void display_question3();
void display_question4();
void display_question5();
void input_array();
void display_input_array1();
void display_input_array2();
void display_input_array3();
void display_input_array4();
void display_input_array5();
void Check();
void answer();
void Modify();
void display_correct_answer1();
void display_correct_answer2();
void display_correct_answer3();
void display_correct_answer4();
void display_correct_answer5();


int z;
int g=3;

int main()
{
    printf("Instructions for solving KenKen\n\n");
    printf("1. This is a 3x3 Puzzle, so we you will have to fill the boxes with numbers 1,2 and 3 only.\n\n");
    printf("2. The boxes inside '*' are called cages\n\n");
    printf("3. There is a number with a sign on the top-left of every cage.\n\n");
    printf("4. This number denotes the expected answer in those boxes and you have to fill in numbers with respect to it only.\n\n");
    printf("5. A number in a box cannot be repeated more than once in its respective row and column.");
    printf("\n");
    printf("\n----------------------------------------------------------------------------------------------------");
    int x;

    for(z=1;z<6;z++)
    {
        if(z==1)
        {
            display_question1();
            printf("\n\n");
            printf("--------------------------------------------------\n");
            input_array();//function call to input answer/array
            printf("\nYour Inputs :\n");
            display_input_array1();
            Check();//function to check the answer;
            printf("\n[1] Next Puzzle\n");
            printf("[2] Exit\n");
            printf("Enter index : ");
            scanf("%d", &x);
        }
        else if(z==2 && x==1)
        {
            display_question2();
            printf("\n");
            printf("--------------------------------------------------\n");
            input_array();//function call to input answer/array
            printf("\nYour Answer :\n");
            display_input_array2();
            Check();//function to check the answer;
            printf("\n[1] Next Puzzle\n");
            printf("[2] Exit\n");
            printf("Enter index : ");
            scanf("%d", &x);
        }
        else if (z==3 && x==1)
        {
            display_question3();
            printf("\n");
            printf("--------------------------------------------------\n");
            input_array();//function call to input answer/array
            printf("\nYour Answer :\n");
            display_input_array3();
            Check();//function to check the answer;
            printf("\n[1] Next Puzzle\n");
            printf("[2] Exit\n");
            printf("Enter index : ");
            scanf("%d", &x);
        }
        else if (z==4 && x==1)
        {
            display_question4();
            printf("\n");
            printf("--------------------------------------------------\n");
            input_array();//function call to input answer/array
            printf("\nYour Answer :\n");
            display_input_array4();
            Check();//function to check the answer;
            printf("\n[1] Next Puzzle\n");
            printf("[2] Exit\n");
            printf("Enter index : ");
            scanf("%d", &x);
        }
        else if (z==5 && x==1)
        {
            display_question5();
            printf("\n");
            printf("--------------------------------------------------\n");
            input_array();//function call to input answer/array
            printf("\nYour Answer :\n");
            display_input_array5();
            Check();//function to check the answer;
            printf("\n[1] Next Puzzle\n");
            printf("[2] Exit\n");
            printf("Enter index : ");
            scanf("%d", &x);
        }
        
        
    }
    printf("\nTHANK YOU !");
    return 0;
}

//function to display question
void display_question1()
{
    printf("\n\n Solve the Puzzle :\n");
    printf("\n*************************************");
	printf("\n* 1-    1x1 |       1x2 * 2/    1x3 *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*************************-----------*");
	printf("\n* 2-    2x1 |       2x2 *       2x3 *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 1     3x1 * 6x    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_question2()
{
    printf("\n\n Solve the Puzzle :\n");
    printf("\n*************************************");
	printf("\n* 5+    1x1 |       1x2 * 2-    1x3 *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*************************-----------*");
	printf("\n* 1-    2x1 |       2x2 *       2x3 *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 3     3x1 * 2/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_question3()
{
    printf("\n\n Solve the Puzzle :\n");
    printf("\n*************************************");
	printf("\n* 12x   1x1 |       1x2 * 1     1x3 *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*-----------*************************");
	printf("\n*       2x1 * 1-    2x2 |       2x3 *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*-----------*************************");
    printf("\n*       3x1 * 3/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_question4()
{
    printf("\n\n Solve the Puzzle :\n");
    printf("\n*************************************");
	printf("\n* 1     1x1 * 1-    1x2 * 2/    1x3 *");
    printf("\n*           *           *           *");
    printf("\n*           *           *           *");
    printf("\n*           *           *           *");
    printf("\n*************-----------*-----------*");
	printf("\n* 6x    2x1 * 1-    2x2 *       2x3 *");
    printf("\n*           *           *           *");
    printf("\n*           *           *           *");
    printf("\n*           *           *           *");
    printf("\n*-----------*************************");
    printf("\n*       3x1 * 3/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_question5()
{
    printf("\n\n Solve the Puzzle :\n");
    printf("\n*************************************");
	printf("\n* 6x    1x1 * 3/    1x2 |       1x3 *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*-----------*************************");
	printf("\n*       2x1 |       2x2 * 2     2x3 *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 3     3x1 * 1-    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}


//function to input the answers in the cells
void input_array()
{
    printf("\nEnter your answers in designated boxes/cells : \n");
    //input the array
    int i;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the number in (%dx%d) cell : ", i+1, j+1);
            scanf("%d", &number[i][j]);
        }
    }
}

//function to display inputted array
void display_input_array1()
{
    printf("\n*************************************");
	printf("\n* 1-    1x1 |       1x2 * 2/    1x3 *");
    printf("\n*           |           *           *");
    printf("\n*     %d     |     %d     *     %d     *", number[0][0], number[0][1], number[0][2]);
    printf("\n*           |           *           *");
    printf("\n*************************-----------*");
	printf("\n* 2-    2x1 |       2x2 *       2x3 *");
    printf("\n*           |           *           *");
    printf("\n*     %d     |     %d     *     %d     *", number[1][0], number[1][1], number[1][2]);
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 1     3x1 * 6x    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     %d     *     %d     |     %d     *", number[2][0], number[2][1], number[2][2]);
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}

void display_input_array2()
{
    printf("\n*************************************");
	printf("\n* 5+    1x1 |       1x2 * 2-    1x3 *");
    printf("\n*           |           *           *");
    printf("\n*     %d     |     %d     *     %d     *",number[0][0], number[0][1], number[0][2] );
    printf("\n*           |           *           *");
    printf("\n*************************-----------*");
	printf("\n* 1-    2x1 |       2x2 *       2x3 *");
    printf("\n*           |           *           *");
    printf("\n*     %d     |     %d     *     %d     *", number[1][0], number[1][1], number[1][2]);
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 3     3x1 * 2/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     %d     *     %d     |     %d     *",number[2][0], number[2][1], number[2][2]);
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_input_array3()
{
    printf("\n*************************************");
	printf("\n* 12x   1x1 |       1x2 * 1     1x3 *");
    printf("\n*           |           *           *");
    printf("\n*     %d     |     %d     *     %d     *",number[0][0], number[0][1], number[0][2] );
    printf("\n*           |           *           *");
    printf("\n*-----------*************************");
	printf("\n*       2x1 * 1-    2x2 |       2x3 *");
    printf("\n*           *           |           *");
    printf("\n*     %d     *     %d     |     %d     *", number[1][0], number[1][1], number[1][2]);
    printf("\n*           *           |           *");
    printf("\n*-----------*************************");
    printf("\n*       3x1 * 3/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     %d     *     %d     |     %d     *",number[2][0], number[2][1], number[2][2]);
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_input_array4()
{
    printf("\n*************************************");
	printf("\n* 1     1x1 * 1-    1x2 * 2/    1x3 *");
    printf("\n*           *           *           *");
    printf("\n*     %d     *     %d     *     %d     *",number[0][0], number[0][1], number[0][2] );
    printf("\n*           *           *           *");
    printf("\n*************-----------*-----------*");
	printf("\n* 6x    2x1 * 1-    2x2 *       2x3 *");
    printf("\n*           *           *           *");
    printf("\n*     %d     *     %d     *     %d     *", number[1][0], number[1][1], number[1][2]);
    printf("\n*           *           *           *");
    printf("\n*-----------*************************");
    printf("\n*       3x1 * 3/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     %d     *     %d     |     %d     *",number[2][0], number[2][1], number[2][2]);
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_input_array5()
{
    printf("\n*************************************");
	printf("\n* 6x    1x1 * 3/    1x2 |       1x3 *");
    printf("\n*           *           |           *");
    printf("\n*     %d     *     %d     |     %d     *",number[0][0], number[0][1], number[0][2] );
    printf("\n*           *           |           *");
    printf("\n*-----------*************************");
	printf("\n*       2x1 |       2x2 * 2     2x3 *");
    printf("\n*           |           *           *");
    printf("\n*     %d     |     %d     *     %d     *", number[1][0], number[1][1], number[1][2]);
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 3     3x1 * 1-    3x2 |       3x3 *");
    printf("\n*           *           |           *");
   printf("\n*     %d     *     %d     |     %d     *",number[2][0], number[2][1], number[2][2]);
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}

// function to check the answer
void Check()
{
	printf("\n\n Press [1] to check answer: ");
	scanf("%d", &modified_check);
	if(modified_check == 1)
	{
		answer();
	}

}
//function to match each element of the input to the answer in the database
void answer()
{
    int ans[3][3];
    int count =0;
    switch(z)
    {
    case 1:
        {
            int ans[3][3]={{2,3,1},{3,1,2},{1,2,3}};
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {

                    if(number[i][j]==ans[i][j])//comparing every element of input array with  the answer in the database
                    count++;
                }
            }
            if(count==9)//count==9 means that every element in the input array is equal to the answer in the database
            {
                printf("\n\t\tYOU WIN !!!");
            }
            else //even if single element does not match, the input array is wrong
            {
                printf("\n\t\t Oops!! Try again");
                Modify();
            }

        }
        break;
    case 2:
        {
            int ans[3][3]={{2,3,1},{1,2,3},{3,1,2}};
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {

                    if(number[i][j]==ans[i][j])//comparing every element of input array with  the answer in the database
                    count++;
                }
            }
            if(count==9)//count==9 means that every element in the input array is equal to the answer in the database
            {
                printf("\n\t\tYOU WIN !!!");
            }
            else //even if single element does not match, the input array is wrong
            {
                printf("\n\t\t Oops!! Try again");
                Modify();
            }


        }
        break;
    case 3:
        {
            int ans[3][3]={{3,2,1},{1,3,2},{2,1,3}};
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {

                    if(number[i][j]==ans[i][j])//comparing every element of input array with  the answer in the database
                    count++;
                }
            }
            if(count==9)//count==9 means that every element in the input array is equal to the answer in the database
            {
                printf("\n\t\tYOU WIN !!!");
            }
            else //even if single element does not match, the input array is wrong
            {
                printf("\n\t\t Oops!! Try again");
                Modify();
            }
        }
        break;
    case 4:
        {
            int ans[3][3]={{1,3,2},{3,2,1},{2,1,3}};
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {

                    if(number[i][j]==ans[i][j])//comparing every element of input array with  the answer in the database
                    count++;
                }
            }
            if(count==9)//count==9 means that every element in the input array is equal to the answer in the database
            {
                printf("\n\t\tYOU WIN !!!");
            }
            else //even if single element does not match, the input array is wrong
            {
                printf("\n\t\t Oops!! Try again");
                Modify();
            }
        }
        break;
    case 5:
        {
            int ans[3][3]={{2,1,3},{1,3,2},{3,2,1}};
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {

                    if(number[i][j]==ans[i][j])//comparing every element of input array with  the answer in the database
                    count++;
                }
            }
            if(count==9)//count==9 means that every element in the input array is equal to the answer in the database
            {
                printf("\n\t\tYOU WIN !!!");
            }
            else //even if single element does not match, the input array is wrong
            {
                printf("\n\t\t Oops!! Try again");
                Modify();
            }
        }
        break;
    }
    
}

// function to modify the answer

void Modify()
{
	int modify_choice;
	printf("\n\n [1] Modify answer");
    printf("\n\n [2] Display Solution");
    printf("\n\n Enter index : ");
	scanf("%d", &modify_choice);
    if(modify_choice == 1)
	{
        while(g!=0)
        {
            printf("You have %d life left",g);
            g--;
            if(z==1)
            {
                display_question1();//function call to display the unsolved puzzle
                printf("--------------------------------------------------\n");
                input_array();//function call to input answer/array
                Check();//function to check the answer;
            }
            else if(z==2)
            {
                display_question2();//function call to display the unsolved puzzle
                printf("--------------------------------------------------\n");
                input_array();//function call to input answer/array
                Check();//function to check the answer;
            }
            else if(z==3)
            {
                display_question3();//function call to display the unsolved puzzle
                printf("--------------------------------------------------\n");
                input_array();//function call to input answer/array
                Check();//function to check the answer;
            }
            else if(z==4)
            {
                display_question4();//function call to display the unsolved puzzle
                printf("--------------------------------------------------\n");
                input_array();//function call to input answer/array
                Check();//function to check the answer;
            }
            else if(z==5)
            {
                display_question5();//function call to display the unsolved puzzle
                printf("--------------------------------------------------\n");
                input_array();//function call to input answer/array
                Check();//function to check the answer;
            }
            

        }
    }
	else
	{
	    printf("\n\nThe correct solution is:\n");
		if(z==1)
        {
            display_correct_answer1();//function call
        }
        else if(z==2)
        {
            display_correct_answer2();//function call
        }
        else if(z==3)
        {
            display_correct_answer3();//function call
        }
        else if(z==4)
        {
            display_correct_answer4();//function call
        }
        else if(z==5)
        {
            display_correct_answer5();//function call
        }
	}

}
//function to display the correct solution
void display_correct_answer1()
{
     //2,3,1},{1,2,3},{3,1,2}
    printf("\n*************************************");
	printf("\n* 1-    1x1 |       1x2 * 2/    1x3 *");
    printf("\n*           |           *           *");
    printf("\n*    2      |     3     *     1     *");
    printf("\n*           |           *           *");
    printf("\n*************************-----------*");
	printf("\n* 2-    2x1 |       2x2 *       2x3 *");
    printf("\n*           |           *           *");
    printf("\n*     3     |     1     *     2     *");
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 1     3x1 * 6x    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     1     *     2     |     3     *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_correct_answer2()
{
    //2,3,1},{1,2,3},{3,1,2}
    printf("\n*************************************");
	printf("\n* 5+    1x1 |       1x2 * 2-    1x3 *");
    printf("\n*           |           *           *");
    printf("\n*    2      |     3     *     1     *");
    printf("\n*           |           *           *");
    printf("\n*************************-----------*");
	printf("\n* 1-    2x1 |       2x2 *       2x3 *");
    printf("\n*           |           *           *");
    printf("\n*     1     |     2     *     3     *");
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 3     3x1 * 2/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     3     *     1     |     2     *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_correct_answer3()
{
    //{3,2,1},{1,3,2},{2,1,3}
    printf("\n*************************************");
	printf("\n* 12x   1x1 |       1x2 * 1     1x3 *");
    printf("\n*           |           *           *");
    printf("\n*     3     |     2     *     1     *");
    printf("\n*           |           *           *");
    printf("\n*-----------*************************");
	printf("\n*       2x1 * 1-    2x2 |       2x3 *");
    printf("\n*           *           |           *");
    printf("\n*     1     *     3     |     2     *");
    printf("\n*           *           |           *");
    printf("\n*-----------*************************");
    printf("\n*       3x1 * 3/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     2     *     1     |     3     *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_correct_answer4()
{
    //{1,3,2},{3,2,1},{2,1,3}
    printf("\n*************************************");
	printf("\n* 1     1x1 * 1-    1x2 * 2/    1x3 *");
    printf("\n*           *           *           *");
    printf("\n*     1     *     3     *     2     *");
    printf("\n*           *           *           *");
    printf("\n*************-----------*-----------*");
	printf("\n* 6x    2x1 * 1-    2x2 *       2x3 *");
    printf("\n*           *           *           *");
    printf("\n*     3     *     2     *     1     *");
    printf("\n*           *           *           *");
    printf("\n*-----------*************************");
    printf("\n*       3x1 * 3/    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     2     *     1     |     3     *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}
void display_correct_answer5()
{
    //{2,1,3},{1,3,2},{3,2,1}
    printf("\n*************************************");
	printf("\n* 6x    1x1 * 3/    1x2 |       1x3 *");
    printf("\n*           *           |           *");
    printf("\n*     2     *     1     |     3     *");
    printf("\n*           *           |           *");
    printf("\n*-----------*************************");
	printf("\n*       2x1 |       2x2 * 2     2x3 *");
    printf("\n*           |           *           *");
    printf("\n*     1     |     3     *     2     *");
    printf("\n*           |           *           *");
    printf("\n*************************************");
    printf("\n* 3     3x1 * 1-    3x2 |       3x3 *");
    printf("\n*           *           |           *");
    printf("\n*     3     *     2     |     1     *");
    printf("\n*           *           |           *");
    printf("\n*************************************");
    printf("\n\n");
}