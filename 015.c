    #include <stdio.h>
   int power(int a, int b) {
    if (b == 0) {
        return 1; 
    } else if (b > 0) {
        return a * power(a, b - 1); 
    } else {
        return 1 / power(a, -b);
    }
}
int main() {
       int a, b;
    printf("Enter base (a) and exponent (b): ");
    scanf("%d %d", &a, &b);
    printf("%d^%d = %d\n", a, b, power(a, b));
    return 0;
}