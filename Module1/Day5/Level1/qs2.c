/* Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure. */

  #include <stdio.h>

struct Complex {
    float real;
    float img;
};
void readComplexNumber(struct Complex* c) {
    printf("Enter real part: ");
    scanf("%f", &c->real);
    printf("Enter imaginary part: ");
    scanf("%f", &c->img);
}
void writeComplexNumber(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.img);
}
struct Complex addComplexNumber(struct Complex c1, struct Complex c2) {
    struct Complex sum;
    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;
    return sum;
}
struct Complex multiplyComplexNumber(struct Complex c1, struct Complex c2) {
    struct Complex product;
    product.real = (c1.real * c2.real) - (c1.img * c2.img);
    product.img = (c1.real * c2.img) + (c1.img * c2.real);
    return product;
}
int main() {
    struct Complex complex1, complex2, sum, product;
    printf("Enter the first complex number:\n");
    readComplexNumber(&complex1);
    printf("\nEnter the second complex number:\n");
    readComplexNumber(&complex2);
    printf("\nComplex numbers:\n");
    writeComplexNumber(complex1);
    writeComplexNumber(complex2);
    sum = addComplexNumber(complex1, complex2);
    printf("\nAddition:\n");
    writeComplexNumber(sum);
    product = multiplyComplexNumber(complex1, complex2);
    printf("\nMultiplication:\n");
    writeComplexNumber(product);
    return 0;
}
