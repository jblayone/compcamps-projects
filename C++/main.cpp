#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int lives;

int main(){
  srand (time(NULL));
  int number;
  number = rand() % 5 + 1;

  cout << "I am thinking of a number between 1-5" << endl;
  cout << "Can you guess it within 5 tries" << endl;

  int guess;
  cin>>guess;

  lives = 5;

  do {

  if (guess > number) {
    cout<<"Too High, try again. You have " << lives << " left" << endl;
    cin>>guess;
    lives--;
  }

  if (guess < number) {
    cout<<"Too Low, try again. You have " << lives << " left" << endl;
    cin>>guess;
    lives--;
  }

  if (guess == number) {
    if (lives == 5){
      cout<<"You are correct, you are lit. " << "You did it in " << "1 try";
    }
    if (lives != 5){
      cout<<"You are correct, you are lit. " << "You did it in " << 5 - lives + 1 << " tries";
    }
    return 0;
  }
} while(lives > 0);

  cout<<"You lose"<<endl;

  return 0;
}
