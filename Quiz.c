#include <stdio.h>
#include <string.h>
#include <math.h>

void displayWelcome();
int main(){
 displayWelcome();
 printf("to start Quiz press s\n");
 printf("to Exit Quiz press  q or e\n");


 char question1[]="In which year did the Gambia attain Independence\n";
 char question2[]="How many planets do we have?\n";
 char question3[]="Which color is the symbol for peace?\n";
 char question4[]="Which language is mostly spoken in the Gambia\n";
 char question5[]="Who is the president of the United states of America\n";


  char *questions[5] = { question1, question2, question3, question4, question5};

  char *option1[]={"1955","1675","1945","1965"};
  char *option2[]={"9","7","6","5"};
  char *option3[]={"black","white","green","yellow"};
  char *option4[]={"jola","aku","mandinka","wollof"};
  char *option5[]={"Barack Njie","Obama Jallow","Barack Obama","Barack Osama"};

  char *answer[5] = { option1[3], option2[0],option3[1],option4[3], option5[2]};

  //printf("%s",option1);
  //quit();

  int counter;
  counter=1;
  int y_answer;
  char index;
  int correctCounter;
  correctCounter=0;
   while(counter < 6){
  char* correct;
  char* yourAnswer;
     switch(counter){
     case 1:
        printf("%s",questions[counter-1]);
      int i;
      for(i=1;i<=4;i++){
      printf("%d) %s\t",i,option1[i-1]);
      }
      printf("\nYour answer:\n");
      scanf("%i",&y_answer);
      index=0;
      index=((int)y_answer-1);
      char* yourAnswer=option1[index];
      char* correct=answer[counter-1];

      //answer[counter];
      printf("Your answer is %s\n",yourAnswer);
      printf("Correct answer is %s\n",correct);
     // char val;
      //val=int strcmp(correct, yourAnswer);
       //printf("%c",val);
     break;
     case 2:
     //printf("do this 2");
      printf("%s",questions[counter-1]);
      for(i=1;i<=4;i++){
      printf("%d) %s\t",i,option2[i-1]);
      }
      printf("\nYour answer:\n");
      scanf("%i",&y_answer);
      index=0;
      index=((int)y_answer-1);
      yourAnswer=option2[index];
      correct=answer[counter-1];

      //answer[counter];
      printf("Your answer is %s\n",yourAnswer);
      printf("Correct answer is %s\n",correct);
     break;
     case 3:
     //printf("do this 3");
        printf("%s",questions[counter-1]);
        for(i=1;i<=4;i++){
      printf("%d) %s\t",i,option3[i-1]);
      }
      printf("\nYour answer:\n");
      scanf("%i",&y_answer);
      index=0;
      index=((int)y_answer-1);
      yourAnswer=option3[index];
      correct=answer[counter-1];

      //answer[counter];
      printf("Your answer is %s\n",yourAnswer);
      printf("Correct answer is %s\n",correct);
     break;
     case 4:
     //printf("do this 4");
        printf("%s",questions[counter-1]);
        for(i=1;i<=4;i++){
      printf("%d) %s\t",i,option4[i-1]);
      }
      printf("\nYour answer:\n");
      scanf("%i",&y_answer);
      index=0;
      index=((int)y_answer-1);
      yourAnswer=option4[index];
      correct=answer[counter-1];
      //answer[counter];
      printf("\nYour answer is %s\n",yourAnswer);
      printf("Correct answer is %s\n",correct);
     break;
     case 5:
     //printf("do this 5");
        printf("%s",questions[counter-1]);
      for(i=1;i<=4;i++){
      printf("%d) %s\t",i,option5[i-1]);
      }
      printf("\nYour answer:\n");

      scanf("%i",&y_answer);
      index=0;
      index=((int)y_answer-1);
      yourAnswer=option5[index];
      correct=answer[counter-1];
      //answer[counter];
      printf("\nYour answer is %s\n",yourAnswer);
      printf("Correct answer is %s\n",correct);
     break;
     default:
     printf("this is default\n");

     }

      //printf("Good bye......\n");

      counter++;
      scanf("%c",&y_answer);
   }


  //printf("%s",questions[0]);
return 0;
}






void getPlayerInfo(char* fn,char* ln,int score){
char* firstname;
char* lastname;
printf("Enter Your First Name");
scanf("%s",&firstname);

printf("Enter Your Last Name");
scanf("%s",&lastname);
 //store it in a file a file along with score...........

}


void viewUserScore(){
  //read from a file

}




void displayWelcome(){
 printf("Welcome to C Language Program Quiz!\n");
 printf("Your knowledge is important to us!\n");
 printf("Enjoy!\n");
}
