#include <iostream>
using namespace std;

const int Rock =1;
const int Paper =2;
const int Scissors =3;

int userChoice =0;
int getComputerChoice(){
  srand(time(NULL));
  int compChoice = rand( ) % 3 + 1;
  return compChoice;
}
void determineWinner(int userChoice,int compChoice){
  if(userChoice == Rock && compChoice == Paper){
    cout<<"Computer win! Paper wraps rock"<<endl;
  }
  else if(userChoice == Paper && compChoice == Scissors){
    cout<<"Computer win! Scissors cut Paper"<<endl;
  }
  else if(userChoice == Scissors && compChoice == Rock){
    cout<<"Computer win! Rock smahes Scissors"<<endl;
  }
  else if(userChoice == Rock && compChoice == Scissors ){
    cout<<"You win! Rock smahes Scissors"<<endl;
  }
  else if(userChoice == Paper && compChoice == Rock){
    cout<<"You win! Paper wraps rock"<<endl;
  }
  else if(userChoice == Scissors && compChoice == Paper){
    cout<<"You win! Scissors cut Paper"<<endl;
  }
  else {
    cout<<"Tie"<<endl;
  }
}
void displayChoice(int choice){
  string result;
  if(choice == 1){
    result ="Rock";
  }
  else if(choice == 2){
    result ="Paper";
  }
  else if(choice ==3){
    result ="Scissors";
  }
  cout<<result<<endl;

}

int main(){
  cout<<'\t'<<"Rock Paper Scissors"<<endl;
  cout<<"Game Menu"<<endl;
  cout<<"1. Rock"<<endl;
  cout<<"2. Paper"<<endl;
  cout<<"3. Scissors"<<endl;

  cout<<"Enter your choice :";
  cin>>userChoice;
  cout<<"You selected: ";
  displayChoice(userChoice);

  int compChoice = getComputerChoice();
  cout<<"The Computer selected: ";
  displayChoice(compChoice);

  determineWinner(userChoice, compChoice);
}