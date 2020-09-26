/*Harry Porter Sorting Hat Quiz*/

#include <iostream>

using namespace std;

//Whats Your House?
int main(void) {
  //Int area
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  //String area
  string house;

  //The Main Program
  cout << "=*=*=*=*=*=*=*=*=*=*=*=*=\n";
  cout << "*=*=*=*=*=*=*=*=*=*=*=*=*\n";
  cout << "|-----------------------|\n";
  cout << "| The Sorting Hat Quiz! |\n";
  cout << "|-----------------------|\n";
  cout << "*=*=*=*=*=*=*=*=*=*=*=*=*\n";
  cout << "=*=*=*=*=*=*=*=*=*=*=*=*=\n";
  cout << "Question Time: \n\n";
  cout << "Q1) When I'm dead, I want people to remember me as: \n";
  cout << "  1) The Good.\n";
  cout << "  2) The Great.\n";
  cout << "  3) The Wise.\n";
  cout << "  4) The Bold.\n";
  cout << "  Your Answer: ";
  cin >> answer1;
  
  if(answer1 == 1) {
    cout << "  Hat: Hufflepuff.\n"; 
    hufflepuff++;
  }
  else if(answer1 == 2) {
    cout << "  Hat: Slytherin.\n";
    slytherin++;
  }
  else if(answer1 == 3) {
    cout << "  Hat: Ravenclaw.\n";
    ravenclaw++;
  }
  else if(answer1 == 4) {
    cout << "  Hat: Gryffindor.\n";
    gryffindor++;
  }
  else {
    cout << "  Invalid Input.\n";
  }

  cout << "\n";
  cout << "Q2) Dawn or Dusk?\n";
  cout << "  1) Dawn.\n";
  cout << "  2) Dusk.\n";
  cout << "  Answer: ";
  cin >> answer2;

  switch(answer2) {
    case 1:
      cout << "  Hat: Gryffindor And Ravenclaw.\n";
      gryffindor++;
      ravenclaw++;
      break;
    case 2:
      cout << "  Hat: Hufflepuff And Slytherin.\n";
      break;
      hufflepuff++;
      slytherin++;
    default:
      cout << "  Invalid Input.\n";
      break;
  }

  cout << "\n";
  cout << "Q3) Which kind of instrument most pleases your ear?\n";
  cout << "  1) The Violin.\n";
  cout << "  2) The Trumpet.\n";
  cout << "  3) The Piano.\n";
  cout << "  4) The Drum.\n";
  cout << "  Answer: ";
  cin >> answer3;

  switch(answer3) {
    case 1:
      cout << "  Hat: Slytherin.\n";
      slytherin++;
      break;
    case 2:
      cout << "  Hat: Hufflepuff.\n";
      hufflepuff++;
      break;
    case 3:
      cout << "  Hat: Ravenclaw.\n";
      ravenclaw++;
      break;
    case 4:
      cout << "  Hat: Gryffindor.\n";
      gryffindor++;
      break;
    default:
      cout << "  Invalid Input.\n";
      break;
  }

  cout << "\n";
  cout << "Q4) Which road tempts you most?\n";
  cout << "  1) The wid, sunny, grassy lane.\n";
  cout << "  2) The narrow, dark, lantern-lit alley.\n";
  cout << "  3) The twisting, leaf-strewn path through woods.\n";
  cout << "  4) The cobbled street lined (ancient buildings).\n";
  cout << "  Answer: ";
  cin >> answer4;
  
  if(answer4 == 1) {
    cout << "  Hat: Hufflepuff.\n";
    hufflepuff++;
  }
  else if(answer4 == 2) {
    cout << "  Hat: Slytherin.\n";
    slytherin++;
  }
  else if(answer4 == 3) {
    cout << "  Hat: Gryffindor.\n";
    gryffindor++;
  }
  else if(answer4 == 4) {
    cout << "  Hat: Ravenclaw.\n";
    ravenclaw++;
  }
  else {
    cout << "  Invalid Input.\n";
  }

  if(hufflepuff > slytherin && hufflepuff > gryffindor && hufflepuff > ravenclaw) {
    house = "Hufflepuff.\n";
  }
  else if(slytherin > hufflepuff && slytherin > gryffindor && slytherin > ravenclaw) {
    house = "Slytherin.\n";
  }
  else if(gryffindor > slytherin && gryffindor > hufflepuff && gryffindor > ravenclaw) {
    house = "Gryffindor.\n";
  }
  else if(ravenclaw > gryffindor && ravenclaw > slytherin && ravenclaw > hufflepuff) {
    house = "Ravenclaw.\n";
  }

  cout << "\n";
  cout << "*=*=*=*=*=*=*=*=*=*=*=*\n";
  cout << "=*=*=*=*=*=*=*=*=*=*=*=\n";
  cout << "|---------------------|\n";
  cout << "Your House: " << house;
  cout << "|---------------------|\n";
  cout << "=*=*=*=*=*=*=*=*=*=*=*=\n";
  cout << "*=*=*=*=*=*=*=*=*=*=*=*\n";
}
