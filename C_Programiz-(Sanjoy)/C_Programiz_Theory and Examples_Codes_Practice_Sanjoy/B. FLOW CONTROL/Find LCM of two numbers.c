/// Find LCM of two numbers

/// C Program to Find LCM of two Numbers

/// LCM using while and if

//#include <stdio.h>
//int main() {
//    int n1, n2, min;
//    printf("Enter two positive integers: ");
//    scanf("%d %d", &n1, &n2);
//    // maximum number between n1 and n2 is stored in min
//    min = (n1 > n2) ? n1 : n2;
//    while (1) {
//        if (min % n1 == 0 && min % n2 == 0) {
//            printf("The LCM of %d and %d is %d.", n1, n2, min);               //// LCM : Lowest Common Multiple
//            break;
//        }
//        ++min;
//    }
//    return 0;
//}
//return 0;
//}


/// LCM Calculation Using GCD

//#include <stdio.h>
//int main() {
//    int n1, n2, i, gcd, lcm;
//    printf("Enter two positive integers: ");
//    scanf("%d %d", &n1, &n2);
//    for (i = 1; i <= n1 && i <= n2; ++i) {
//
//        // check if i is a factor of both integers
//        if (n1 % i == 0 && n2 % i == 0)
//            gcd = i;
//    }
//    lcm = (n1 * n2) / gcd;
//    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
//    return 0;
//}

/// Practice...

#include <stdio.h>
int main() {
    int n1, n2, i, gcd, lcm;
    printf("Enter two positive int n1 : ");
    scanf("%d", &n1);
    printf("Enter two positive int n12 : ");
    scanf("%d", &n2);
    for (i = 1; i <= n1 && i <= n2; ++i) {

        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;
    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}
