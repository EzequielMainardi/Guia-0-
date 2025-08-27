#include <stdio.h>


//ej1
/* int main(){
    printf("Hola Orga!\n");
    return 0;
} */

//ej 2
/* int main(){
    char c =100;
    short s = -8712;
    int i = 123456;
    long l = 1234567890;

    printf("char(%lu): %d \n", sizeof(c), c);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(l), l);
    
    return 0; 
} */

//ej3
//#include <stdint.h>
/* int main(){
    

    printf("int8_t: %zu \n", sizeof(int8_t));
    printf("uint8_t: %zu \n", sizeof(uint8_t));
    printf("int16_t: %zu \n", sizeof(int16_t));
    printf("uint16_t: %zu \n", sizeof(uint16_t));
    printf("int32_t: %zu \n", sizeof(int32_t));
    printf("uint32_t: %zu \n", sizeof(uint32_t));
    printf("int64_t: %zu \n", sizeof(int64_t));
    printf("uint64_t: %zu \n", sizeof(uint64_t));
    
    return 0;

} */




/* int main() {

    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};
size_t length = sizeof(mensaje_secreto) / sizeof(int);
char decoded[length];

for (int i = 0; i < length; i++) {
decoded[i] = (char) (mensaje_secreto[i]); // casting de int a char
}
for (int i = 0; i < length; i++) {
printf("%c", decoded[i]);
}
} */
 //"the gift of words is the gift of deception and illusion"

//ej5

int main(){
    float f = 0.1;
    double d = 0.1;
    int castfi = (int) (f);
    int castdi = (int) (d);

    printf("%f \n",f);
    printf("%f \n",d);

    printf("%d \n",castfi);
    printf("%d \n",castdi);

    return 0;

//al imprimir en pantalla los cast perdemos informacion ya que se imprimen enteros y perdemos el decimal.

}