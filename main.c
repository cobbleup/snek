#include <stdio.h>

const int HEIGHT = 10;
const int WIDTH = 10;
char field[HEIGHT + 2][WIDTH + 2] = {};

void setfield() {
  for (int i = 0; i < sizeof(field) / sizeof(field[0]); ++i) {
    for (int j = 0; j < sizeof(field[0]) / sizeof(char); ++j) {
      field[i][j] = ' ';
    }
  }

  for (int i = 0; i < WIDTH + 2; i++) {
    field[0][i] = '#';
    field[HEIGHT + 1][i] = '#';
   }
  for (int i = 0; i < HEIGHT + 2; i++) {
    field[i][0] = '#';
    field[i][WIDTH + 1] = '#';
  }
}

void printfield() {

  for (int i = 0; i < HEIGHT + 2; i++) {
    for (int j = 0; j < WIDTH + 2; j++) {
      printf("%c", field[i][j]);
    }
    printf("\n");
  }

}


void setup() {
    
}


int main() {
  setfield();
  printfield();
}
