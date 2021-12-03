// #include <stdio.h>
// int main() {
//   int a, b, x, y, t, gcd, lcm;

//   printf("Enter two integers\n");
//   scanf("%d%d", &x, &y);

//   a = x;
//   b = y;

//   while (b != 0) {
//     t = b;
//     b = a % b;
//     a = t;
//   }

//   gcd = a;
//   lcm = (x*y)/gcd;

//   printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
//   printf("Least common multiple of %d and %d = %d\n", x, y, lcm);

//   return 0;
// }





    // LCM
// #include <stdio.h>
// int main() {
//   int x, y, res;
//   printf("Enter two positive integers: ");
//   scanf("%d %d", &x, &y);
//   res = (x > y) ? x : y;
//   while (1) {
//       if (res % x == 0 && res % y == 0) {
//           printf("The LCM obtained from %d and %d is %d.", x, y, res);
//           break;
//       }
//       ++res;
//   }
//   return 0;
// }


#include <stdio.h>
int main() {
  int x, y, i, gcd, lcm;
  printf("Enter two positive integers: ");
  scanf("%d %d", &x, &y);
  for (i = 1; i <= x && i <= y; ++i) {
      if (x % i == 0 && y % i == 0)
          gcd = i;
  }
  lcm = (x * y) / gcd;
  printf("The LCM of %d and %d is %d.\n", x, y, lcm);
  printf("The LCM of %d and %d is %d.", x, y, gcd);
  return 0;
}

