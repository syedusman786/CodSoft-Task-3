#include<iostream>
using namespace std;

class Tic_Tac_Toe
{
private:
    string game[3][3];
    string move;
public:

    Tic_Tac_Toe()
    {
        for(int i=0;i<3;i++)
     {
       for(int j=0;j<3;j++)
       {
        game[i][j]="-";
       }
     }
    }

   void print_board()
    {
      cout<<"-----Your Game Board-----"<<endl<<endl; 
     for(int i=0;i<3;i++)
     {
       for(int j=0;j<3;j++)
       {
        cout<<game[i][j]<<"\t\t";
       }
       cout<<endl<<endl;
     }
    }
    
    void print_numbers()
    {
      int count=1;
      cout<<"*******************************"<<endl;
      cout<<endl<<endl<<endl<<endl;
      for (int i=0;i<3;i++)
      {
        for(int i=0;i<3;i++)
        {
            cout<<count<<"\t\t";
            count++;
        }
        cout<<endl<<endl;
      }
    }
    
    void add_move(int num,int move)
    {

     if (move==1||move==3||move==5||move==7||move==9)
     {  
        int check=1,flag=0;
     for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            if(check==num)
            {
                   game[i][j]="X";
                   flag=1;
                   break;
            }
            else
            check++;

        }
        if (flag==1)
        break;
      }
     }

     if (move==2||move==4||move==6||move==8)
      {
         int check=1,flag=0;
     for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            if(check==num)
            {
                   game[i][j]="O";
                   flag=1;
                   break;
            }
            else
            check++;

        }
        if (flag==1)
        break;
      }
      }

    }

    int check_mate()
    {
       if(game[0][0]=="X" && game[1][0]=="X" && game[2][0]=="X")
       {
        cout<<"Player 1 wins"<<endl;
        return 1;
       }

      else if(game[0][1]=="X" && game[1][1]=="X" && game[2][1]=="X")
       {
        cout<<"Player 1 wins"<<endl;
        return 1;
       }

      else if(game[0][2]=="X" && game[1][2]=="X" && game[2][2]=="X")
       {
        cout<<"Player 1 wins"<<endl;
        return 1;
       }

      else if(game[0][0]=="X" && game[0][1]=="X" && game[0][2]=="X")
       {
        cout<<"Player 1 wins"<<endl;
        return 1;
       }

       else if(game[1][0]=="X" && game[1][1]=="X" && game[1][2]=="X")
       {
        cout<<"Player 1 wins"<<endl;
        return 1;
       }

       else if(game[2][0]=="X" && game[2][1]=="X" && game[2][2]=="X")
       {
        cout<<"Player 1 wins"<<endl;
        return 1;
       }

       else if(game[0][0]=="X" && game[1][1]=="X" && game[2][2]=="X")
       {
        cout<<"Player 1 wins"<<endl;
        return 1;
       }

       else if(game[0][2]=="X" && game[1][1]=="X" && game[2][0]=="X")
       {
        cout<<"Player 1 wins"<<endl;
        return 1;
       }


      else if(game[0][0]=="O" && game[1][0]=="O" && game[2][0]=="O")
       {
        cout<<"Player 2 wins"<<endl;
        return 1;
       }

      else if(game[0][1]=="O" && game[1][1]=="O" && game[2][1]=="O")
       {
        cout<<"Player 2 wins"<<endl;
        return 1;
       }

      else if(game[0][2]=="O" && game[1][2]=="O" && game[2][2]=="O")
       {
        cout<<"Player 2 wins"<<endl;
        return 1;
       }

      else if(game[0][0]=="O" && game[0][1]=="O" && game[0][2]=="O")
       {
        cout<<"Player 2 wins"<<endl;
        return 1;
       }

       else if(game[1][0]=="O" && game[1][1]=="O" && game[1][2]=="O")
       {
        cout<<"Player 2 wins"<<endl;
        return 1;
       }

       else if(game[2][0]=="O" && game[2][1]=="O" && game[2][2]=="O")
       {
        cout<<"Player 2 wins"<<endl;
        return 1;
       }

       else if(game[0][0]=="O" && game[1][1]=="O" && game[2][2]=="O")
       {
        cout<<"Player 2 wins"<<endl;
        return 1;
       }

       else if(game[0][2]=="O" && game[1][1]=="O" && game[2][0]=="O")
       {
        cout<<"Player 2 wins"<<endl;
        return 1;
       }
    }
};





int main ()
{
    Tic_Tac_Toe t1;
    string name1,name2;
    int move,flag=0;
    
    cout<<endl;
    cout<<"-----Tic Tac Toe Game-----"<<endl<<endl;

    cout<<"Enter player 1 name: ";
    getline(cin>>ws,name1);

    cout<<"Enter player 2 name: ";
    getline(cin>>ws,name2);
    
    cout<<endl;
    cout<<name1<<" move is X"<<endl;
    cout<<name2<<" move is O"<<endl<<endl<<endl;

    t1.print_board();

    cout<<endl<<endl<<endl;

    for(int i=1;i<=9;i++)
    {
    
    t1.print_numbers();
    cout<<"Choose your move: ";
    cin>>move;
   
    t1.add_move(move,i);

    cout<<endl<<endl<<endl;

    t1.print_board();
    flag=t1.check_mate();

     if (flag==1)
     {
        break;
     }
    }
    
    if (flag!=1)
    {
       cout<<"Game is draw"<<endl;
    } 
}