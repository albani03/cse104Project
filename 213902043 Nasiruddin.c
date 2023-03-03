#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *file;
struct score
{
char name[30];
int result;
};
struct score s;
int n, ans, count, right, wrong;
char ch, key;
printf("\n\t# Welcome to the QUIZ GAME #");
start:
printf("\n\n 1. Start Quiz\n 2. Show Scoreboard\n 3. Quit\n\n");
printf("\nChoose key to start the Game: ");
scanf("%d", &n);
switch (n)
{
case 1:
file = fopen("Quiz score.txt", "a"); 
do
{
count = 0;
right = 0;
wrong = 0;
q1:
printf("\n[1] Who is the father of c programming language?\n\n(1) Ken Thompson\n (2) Dennis Ritchie\n (3) Brian Kernighan\n (4) Bjarne Stroustrup\n");
printf("\n\tYour Answer (1,2,3 or 4): ");

scanf("%d", &ans);
if (ans == 2)
{
printf("\n\tCorrect!\n");
right++; 
}
else if (ans == 1 || ans == 3 || ans == 4)
{
printf("\n\tWrong!\n\tRight answer: (2)\n");
wrong++; 
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q1;
}
count++; 
q2:
printf("\n[2]Where was Dennis Ritchie born?\
\n (1) Chicago \n (2)Los lunas\n (3) New York\n (4) Los Angeles\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 3)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 4)
{
printf("\n\tWrong!\nRight answer: (3)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q2;
}
count++;
q3:
printf("\n[3]What language did Dennis Ritchie develop?\
\n (1) C Program\n (2) Java\n (3) Python\n (4) PHP\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 1)
{
printf("\n\tCorrect!\n");
right++;
}

else if (ans == 2 || ans == 3 || ans == 4)
{
printf("\n\tWrong!\nRight answer: (1)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q3;
}
count++;
q4:
printf("\n[4] Value range of char?\
\n (1) 0 to 255\n (2) -128 to 127\n (3) 0 to 65,535\n (4) -32,768 to 32,767\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{
printf("\nCorrect!\n");
right++;
}
else if (ans == 1 || ans == 3 || ans == 4)
{
printf("\nWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q4;
}
count++;
q5:
printf("\n[5] Format Specifier of int?\
\n (1) (F)\n (2) (LD)\n (3) (C)\n (4) (D)\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 4)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{
printf("\n\tWrong!\nRight answer: (2)\n");
wrong++;
}
else

{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q5;
}
count++;
q6:
printf("\n[6] Who invented C programming language?\
\n (1) Charles Babbage\n (2) Grahambel\n (3) Steve Jobs\n (4) Dennis Ritchie\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 4)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{
printf("\n\tWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q6;
}
count++;
q7:
printf("\n[7] Fill the gap #INCLUDE <.......>\
\n (1) main\n (2) int\n (3) stdio.h\n (4) print\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 3)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 4)
{
printf("\n\tWrong!\nRight answer: (3)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q7;
}
count++;

q8:
printf("\n[8] Whice loop expression is this (  ;  ;  ) .\
\n (1) For\n (2) While\n (3) DO While\n ");
printf("\n\tYour Answer (1,2 or 3): ");
scanf("%d", &ans);
if (ans == 1)
{
printf("\n\tCorrect!\n");
right++;
}
else if ( ans == 2 || ans == 3)
{
printf("\nWrong!\nRight answer: (1)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q8;
}
count++;
q9:
printf("\n[9] which function is this a[]?\
\n (1) Loop\n (2) Swich\n (3) Array\n (4) Pointer");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 3)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 4)
{
printf("\nWrong!\nRight answer: (3)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q9;
}
count++;
q10:
printf("\n[10] How many pointers are there in C?\
\n (1) 1\n (2) 2\n (3) 3\n (4) All of them\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);

if (ans == 4)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{
printf("\nWrong!\nRight answer: (1)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q10;
}
count++;
printf("\n\tNumber of questions attempted: %d\n\tCorrect answers: %d\
\n\tWrong answers: %d",
count, right, wrong);
printf("\n\nEnter your name: ");
getchar();
fgets(s.name,29,stdin);
s.result = right;
fprintf(file, "%s %d\n", s.name, s.result); 
printf("***************************************");
printf("\n\nReplay(y/n) ");
scanf("%c", &key);
} 
while (key == 'y');
fclose(file);
goto start;
case 2:
file = fopen("Quiz score.txt", "r"); 
printf("\n\t# Scoreboard #\n");
while (fscanf(file, "%s %d", s.name, &s.result) != EOF)
printf(" Name: %s, Score: %d\n", s.name, s.result);
printf("***************************************");
fclose(file);

goto start;
case 3:
;
return 0;
default:
printf("You entered invalid key");
}
}


