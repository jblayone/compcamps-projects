#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int random(int min, int max) //range : [min, max)
{
   static bool first = true;
   if ( first )
   {
      srand(time(NULL)); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (max - min);
}

int solver(){
  int umber;
  umber = random(1, 100000000);

  return umber;

}

int main(){
  srand (time(NULL));
  int number;
  int at;
  number = random(1, 100000000);

  cout << "I am thinking of a number between 1-1000" << endl;
  cout << "Can you guess it" << endl;
  cout << number;

  getch();

  int guess;
  guess = solver();

  while (guess != number) {

  if (guess > number) {
    cout<<"Too High, try again "<<guess<<endl;
    guess = solver();
    at++;
  }

  if (guess < number) {
    cout<<"Too Low, try again "<<guess<<endl;
    guess = solver();
    at++;
  }

  if (guess == number) {
    cout<<"You are correct, you are lit"<<endl<<at;
    getch();
  }
}

  return 0;
}
