#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){    //making the snake-ladder game
    int num1, num2, num3, i, sum1=0, sum2=0, sum3=0, nols, hh;
    printf("if you want to play with computer, then enter 2, or if you want to play with another player, then enter 1\n");
    scanf("%d", &hh);//chosing the game mode
    int ll = hh;
    printf("\n\n");

    printf("enter the number of ladders or snakes (the total numer of snakes and ladders will be equal XD)\n");
    scanf("%d", &nols);//the players can select with how many snakes and ladders they want to play with
     //players have to enter the stating and ending position of all the snakes and ladders 
    int lads[nols], lade[nols];
    printf("enter the starting possition of all the ladders\n"); 
    for(int j=0; j<nols; j++){ 
        scanf("%d", &lads[j]);
    }
    printf("enter the ending possition of all the ladders\n"); 
    for(int k=0; k<nols; k++){
        scanf("%d", &lade[k]);
    }
    int t = nols;
    int snks[t], snke[t];
    printf("enter the starting possition of all the snakes\n"); 
    for(int l=0; l<t; l++){
        scanf("%d", &snks[l]);
    }
    printf("enter the ending possition of all the snakes\n"); 
    for(int m=0; m<t; m++){
        scanf("%d", &snke[m]);
    }
        printf("\n");
        printf("starting the game\n");//now it's time to start the game
        printf("\n");
    
    char g, h, x;
    while(1){
      printf("\nplayer1-turn, enter a key\n");//player1 is rolling dice
       scanf("%s", &g);
       srand(g*i*i+i*6);
       num1 = (rand() % 6) + 1;
       printf("player1 scores %d\n", num1);//number scored by player1 by rolling the dice
       sum1 += num1;
       if(sum1<100){
      for(int d=0; d<nols; d++){
      while(sum1==lads[d]){
        printf("ladder(%d to %d)\n", lads[d], lade[d]);
        sum1 = lade[d]; //checking if he have gotten any ladder
      }
      
      while(sum1==snks[d]){
        printf("snake(%d to %d)\n", snks[d], snke[d]);
        sum1 = snke[d]; //checking if he have gotten any snake
      }
      }
       }
       else
       if(sum1>100){
         sum1-=num1; //if he is crossing the finishing position , then he can't move
       }
       else
      if(sum1 == 100){
        printf("PLAYER1 WWWWOOOONNNN\n");
       break; //if he is exactly on the finishing position , then he won the match
      }

       printf("position of player1 is = %d\n", sum1);//showing his position after rolling dice
      
      printf("\n");
      
      
      if(ll==1){//same process repeated for player2 if user chosed to play with his friend
      printf("\nplayer2-turn, enter a key\n");
      scanf("%s", &h);
     srand(h*h*i+i*i*45);
     num2 = (rand() % 6) + 1;
      sum2 += num2;
       printf("player2 scores %d\n", num2);
      if(sum2<100){
      for(int c=0; c<nols; c++){
      while(sum2==lads[c]){
        printf("ladder(%d to %d)\n", lads[c], lade[c]);
        sum2 = lade[c];  
      }
      
      while(sum2==snks[c]){
        printf("snake(%d to %d)\n", snks[c], snke[c]);
        sum2 = snke[c]; 
      }
      }
      }
      else
      
       if(sum2>100){
         sum2-=num2;
       }
       else
        if(sum2 == 100){
        printf("PLAYER2 WWWOOOONNN\n");
        break;
      }
       printf("position of player2 is = %d\n", sum2);
       
      printf("\n");
      }
      else
      if(ll==2){//same process repeated for computer if user chosed to play with computer
      
      printf("\ncomputer's-turn\n");
      
     srand(time(NULL));//using time function to generate different values for rand function as computer can't get user input
     num3 = (rand() % 6) + 1;
      sum3 += num3;
       printf("COMPUTER scores %d\n", num3);
      if(sum3<100){
      for(int e=0; e<nols; e++){
      while(sum3==lads[e]){
        printf("ladder(%d to %d)\n", lads[e], lade[e]);
        sum3 = lade[e];  
      }
      
      while(sum3==snks[e]){
        printf("snake(%d to %d)\n", snks[e], snke[e]);
        sum3 = snke[e]; 
      }
      }
      }
      
       if(sum3>100){
         sum3-=num3;
       }
       else
        if(sum3 == 100){
        printf("COMPUTER WWWOOOONNN\n");
        break;
      }
       printf("position of computer is = %d\n", sum3);
       
      
      }
      
    }
    printf("match ends , Congratulations to the winner, please enter 0 to exit\n");
    int ddd;
    scanf("%d", ddd);
      //finally the game ended
   return 0;
}