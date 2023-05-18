#include <iostream>

void sobel(int **img, int **out, int m, int n);
void mat_mul3(int **img);

int main() {

  return 0;
}

void sobel(int **img, in **out, int m, int n) {
  int sobelx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
  int sobely[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};
  int padLen = 3;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      mat_mul3(img[]);
    }
  }
}
void mat_mul3(int **img, int **out) {
  int sobelx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
  int sobely[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      out[i][j] = (img[i][j] * sobelx[j][i]) + (img[i][j] * sobel[j][i]); 
    }
  }
}
