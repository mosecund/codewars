//
// Created by Ismael Secundar on 02/02/2023.
//

int past(int h, int m, int s) {
  int result=0;
  result+=((h*3600)+(m*60)+(s))*1000;
  return result;
}
