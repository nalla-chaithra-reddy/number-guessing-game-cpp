#include <iostream>
using namespace std;

void inputNumber(int &number);

int main() {
  cout<<"========================================\nNUMBER GUESSING GAME\n========================================"<<endl;
  cout<<"I'm thinking of a number between 1 and 100.\nTry to guess the number!\n========================================"<<endl;
  

  int guessnumber=20;
  int number;
  inputNumber( number);


  

  for( int i=1 ; ;i++ ){
    if(number<guessnumber){
      cout<<"Your guess: "<<number<<"\nToo low!\n"<<"Try again."<<endl;
      inputNumber(number);
    }else if(number>guessnumber){
      cout<<"Your guess: "<<number<<"\nToo high!\nTry again.\n";
      inputNumber(number);
    }else if(number==guessnumber){
      cout<<"========================================\nCORRECT!\n             YOU WON THE GAME.             \n========================================";
      cout<<"\nYou guessed the number in "<<i<<" attempts."<<endl;
      cout<<"Thanks for playing!\n";
      cout<<"========================================\n";
      break;

    }
  }
  return 0;

}

void inputNumber(int &number){
  cout<<"Enter number: ";
  cin>>number;
}