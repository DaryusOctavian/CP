#include <stdio.h>
#include <string.h>

int main() {
  while (1) {
    int n;
    scanf("%d", &n);
    if (!n)
      break;
    int C[100], g[100], s[100], b[100], cg = 0, cs = 0, cb = 0, Canada = 1000;
    char cn[100];
    for (int i = 0; i < n; i++) {
      scanf("%s%d%d%d", cn, g + i, s + i, b + i);
      if (!strcmp(cn, "Canada")) {
        Canada = i;
        cg = g[i];
        cs = s[i];
        cb = b[i];
      }
    }
    double p[3];
    p[0] = 1;
    p[1] = 1.0 / 3;
    p[2] = 1.0 / 9;
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        for (int k = 0; k < 3; k++) {
          int good = 1;
          for (int m = 0; m < n; m++)
            if (m != Canada &&
                (cg - g[m]) * p[i] + (cs - s[m]) * p[j] + (cb - b[m]) * p[k] <
                    0)
              goto B;
          printf("Canada wins!\n");
          goto C;
        B:;
        }
  A:
    printf("Canada cannot win.\n");
  C:;
  }
}
