#include <bits/stdc++.h>

using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
string p1, p2;
int flag=0;

void Board(char space[][3]);
void change_for_p1(int p1_turn);
void change_for_p2(int p2_turn);
int Turn_1(string p1);
int Turn_2(string p2);
int win_lose(char space[][3]);

void Board(char space[][3]){

    cout<<"-------------------"<<endl;
    cout<<"|  "<<space[0][0]<<"  "<<"|  "<<space[0][1]<<"  "<<"|  "<<space[0][2]<<"  |"<<endl;
    cout<<"|-----|-----|-----|"<<endl;
    cout<<"|  "<<space[1][0]<<"  "<<"|  "<<space[1][1]<<"  "<<"|  "<<space[1][2]<<"  |"<<endl;
    cout<<"|-----|-----|-----|"<<endl;
    cout<<"|  "<<space[2][0]<<"  "<<"|  "<<space[2][1]<<"  "<<"|  "<<space[2][2]<<"  |"<<endl;
    cout<<"-------------------"<<endl;

}

int win_lose(char space[][3]){

    if (space[0][0] == 'X' && space[0][1] == 'X' && space[0][2] == 'X'){
        cout<<p1<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    else if (space[0][0] == 'O' && space[0][1] == 'O' && space[0][2] == 'O'){
        cout<<p2<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }

    else if (space[1][0] == 'X' && space[1][1] == 'X' && space[1][2] == 'X'){
        cout<<p1<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    else if (space[1][0] == 'O' && space[1][1] == 'O' && space[1][2] == 'O'){
        cout<<p2<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }

    else if (space[2][0] == 'X' && space[2][1] == 'X' && space[2][2] == 'X'){
        cout<<p1<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    else if (space[2][0] == 'O' && space[2][1] == 'O' && space[2][2] == 'O'){
        cout<<p2<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }

    else if (space[0][0] == 'X' && space[1][0] == 'X' && space[2][0] == 'X'){
        cout<<p1<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    else if (space[0][0] == 'O' && space[1][0] == 'O' && space[2][0] == 'O'){
        cout<<p2<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }

    else if (space[0][1] == 'X' && space[1][1] == 'X' && space[2][1] == 'X'){
        cout<<p1<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    else if (space[0][1] == 'O' && space[1][1] == 'O' && space[2][1] == 'O'){
        cout<<p2<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }

    else if (space[0][2] == 'X' && space[1][2] == 'X' && space[2][2] == 'X'){
        cout<<p1<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    else if (space[0][2] == 'O' && space[1][2] == 'O' && space[2][2] == 'O'){
        cout<<p2<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }

    else if (space[0][0] == 'X' && space[1][1] == 'X' && space[2][2] == 'X'){
        cout<<p1<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    else if (space[0][0] == 'O' && space[1][1] == 'O' && space[2][2] == 'O'){
        cout<<p2<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }

    else if (space[0][2] == 'X' && space[1][1] == 'X' && space[2][0] == 'X'){
        cout<<p1<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    else if (space[0][2] == 'O' && space[1][1] == 'O' && space[2][0] == 'O'){
        cout<<p2<<" W I N S"<<endl;
        flag = 1;
        return flag;
    }
    
    return flag;
}

void change_for_p1(int p1_turn){

    switch(p1_turn){

        case 1:
        space[0][0] = 'X';
        break;

        case 2:
        space[0][1] = 'X';
        break;

        case 3:
        space[0][2] = 'X';
        break;

        case 4:
        space[1][0] = 'X';
        break;

        case 5:
        space[1][1] = 'X';
        break;

        case 6:
        space[1][2] = 'X';
        break;

        case 7:
        space[2][0] = 'X';
        break;

        case 8:
        space[2][1] = 'X';
        break;

        case 9:
        space[2][2] = 'X';
        break;
        
        default:
        cout<<"Invalid input."<<endl;
        exit(0);
    }
}

void change_for_p2(int p2_turn){

    switch(p2_turn){

        case 1:
        space[0][0] = 'O';
        break;

        case 2:
        space[0][1] = 'O';
        break;

        case 3:
        space[0][2] = 'O';
        break;

        case 4:
        space[1][0] = 'O';
        break;

        case 5:
        space[1][1] = 'O';
        break;

        case 6:
        space[1][2] = 'O';
        break;

        case 7:
        space[2][0] = 'O';
        break;

        case 8:
        space[2][1] = 'O';
        break;

        case 9:
        space[2][2] = 'O';
        break;
        
        default:
        cout<<"Invalid input."<<endl;
        exit(0);
    }
}

int Turn_1(string p1){
    
    int p1_turn;
    cout<<p1<<"'s turn: "<<endl;
    cin>>p1_turn;
    change_for_p1(p1_turn);
    Board(space);
    if (win_lose(space) && flag==1){
        return 1;
    }

    if (space[0][0] != '1' && space[0][1] != '2' && space[0][2] != '3' && 
        space[1][0] != '4' && space[1][1] != '5' && space[1][2] != '6' &&
        space[2][0] != '7' && space[2][1] != '8' && space[2][2] != '9'){

        return 2;
    }

    return 0;
}

int Turn_2(string p2){

    int p2_turn;
    cout<<p2<<"'s turn: "<<endl;
    cin>>p2_turn;
    change_for_p2(p2_turn);
    Board(space);
    if (win_lose(space) && flag==1){
        return 1;
    }

    return 0;
}

int main(){

    int res = 0;

    cout<<"Enter Player 1's name: \n";
    getline(cin, p1);
    cout<<"Enter Player 2's name: \n";
    getline(cin, p2);

    cout<<p1<<" has X symbol and will start first."<<endl;
    cout<<p2<<" has O symbol and will start second."<<endl;

    Board(space);
    
    for (int i=1; i<=5; i++){
        res = Turn_1(p1);
        if (res == 1 || res == 2){
            break;
        }
        else{
            res = Turn_2(p2);
            if (res == 1 || res == 2){
                break;
            }
        }
    }
    
    if (res == 2){
        cout<<"Game ended with no result"<<endl;
    }

    return 0;
}
