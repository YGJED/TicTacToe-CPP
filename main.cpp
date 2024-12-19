#include <iostream>
using namespace std;

void setup();
  void draw();
  void input();
  void logic();

char board[3][3]={'1','2','3','4','5','6','7','8','9'};
char turn='x';

bool gameOver=false;

int main() {
 setup();
  while(!gameOver){
   draw();
logic();
input();
    }
  
return 0;
  }

void setup(){
 
}
  void draw(){
        system("clear");
cout<<"TIC TAC TOE\nC++ VERSION..."<<endl;
  cout<<"Press '0' to quit at any time"<<endl;
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cout<<board[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  void input(){
    int inpt;
    cout<<"Select A Number:\t"; cin>>inpt;
    switch(inpt){
      case 1:
  if (board[0][0]=='x'|| board[0][0]=='o' )
          input();
  else 
    board[0][0]=turn;
      break;
      case 2:
if (board[0][1]=='x'|| board[0][1]=='o' )
          input();
            board[0][1]=turn;

        break;
      case 3:
if (board[0][2]=='x'|| board[0][2]=='o' )
          input();
            board[0][2]=turn;

        break;
      case 4:
if (board[1][0]=='x'|| board[1][0]=='o' )
          input();
            board[1][0]=turn;

        break;
      case 5:
if (board[1][1]=='x'|| board[1][1]=='o' )
          input();
            board[1][1]=turn;

        break;
      case 6:
if (board[1][2]=='x'|| board[1][2]=='o' )
input();
            board[1][2]=turn;

        break;
      case 7:
if (board[2][0]=='x'|| board[2][0]=='o' )
          input();
            board[2][0]=turn;

        break;
      case 8:
if (board[2][1]=='x'|| board[2][1]=='o' )
          input();
            board[2][1]=turn;

        break;
      case 9:
if (board[2][2]=='x'|| board[2][2]=='o' )
          input();
            board[2][2]=turn;

        break;
      case 0:
      gameOver=true;

    }

    }
  void logic(){
    if(turn=='x')
     turn='o';
    else if(turn =='o')
      turn='x';
 

       



  
    if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]||
      board[0][0]==board[1][0]&&board[1][0]==board[2][0]||
      board[0][0]==board[1][1]&&board[1][1]==board[2][2]){
      cout<<"We Have A  WInner!"<<endl;
      cout<<"Player "<<board[0][0]<<" is the winner"<<endl;
    gameOver=true;
  }
    

else if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]||
     board[0][1]==board[1][1]&&board[1][1]==board[2][1]||
      board[0][2]==board[1][1]&&board[1][1]==board[2][0]){
      cout<<"We Have A  WInner!"<<endl;
      cout<<"Player "<<board[1][1]<<" is the winner"<<endl;
    gameOver=true;
  }


else if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]||
     board[0][2]==board[1][2]&&board[1][2]==board[2][2]){
      cout<<"We Have A  WInner!"<<endl;
      cout<<"Player "<<board[2][2]<<" is the winner"<<endl;
    gameOver=true;
  }  

    }

  
  