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

/* int main(){
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
 */
/* 
 int main() {
    int a = 5, b = 3, c = 2, d = 1;

    // Operación: a + b * c / d
    printf("a + b * c / d = %d\n", a + b * c / d);

    // Operación: a % b
    printf("a %% b = %d\n", a % b);

    // Comparaciones: a == b, a != b
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Operadores bit a bit: a & b, a | b, ~a
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("~a = %d\n", ~a);

    // Operadores lógicos: a && b, a || b
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);

    // Desplazamientos: a << 1, a >> 1
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    // Operadores de asignación compuesta
    a += b;
    printf("a += b => a = %d\n", a);

    a -= b;
    printf("a -= b => a = %d\n", a);

    a *= b;
    printf("a *= b => a = %d\n", a);

    a /= b;
    printf("a /= b => a = %d\n", a);

    a %= b;
    printf("a %%= b => a = %d\n", a);

    return 0;
}
 */
 /* int main(){

int i = 2;
int resultado1;
int resultado2;

resultado1 = i++;
printf("Valor de resultado %d \n", resultado1); //asigna valor de i al resultado y luego incrementa i
printf("Valor de i %d \n", i);

i=2;
resultado2 = ++i;
printf("Valor de resultado %d \n", resultado2); //incrementa valor de i y lo asigna al resultado
printf("valor de i %d \n", i );  
return 0;
}
 */
/* #include <stdint.h>
int main(){
uint32_t a = 0xF0000000;
uint32_t b = 0x00000007;

uint32_t aProbar = a >> 29;

printf("Valor de aProbar %d \n", aProbar);
printf("Valor de b %d \n", b); 

if (aProbar == b){
    printf("Los 3 bits mas altos de A son iguales a los 3 mas bajos de B \n");
}else{
    printf("No son iguales :( \n");
    }

return 0;
} */
//reemplazar este ciclo while por un for
/* int main() {
    int i = 10;
    while(i--){
    printf("i = %d\n",i); // imprime o no el 0?
    }
    } */

/* int main(){
    for(int i=10; i>=0; i--){
        printf("i= %d\n",i);
    }
    return 0;

} */

//ej arreglos

int main(){
    int arr[] = {1,2,3,4};
    int length = sizeof(arr) / sizeof(arr[0]);
    int fst = arr[0];

    for(int i =0; i < length; i++){
        if(i == (length -1)){
            arr[i] = fst;
        }else{
            arr[i] = arr[i+1];
        }
    }
    printf("Arreglo rotado: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}