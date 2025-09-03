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

/* int main(){
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
} */
/* 
int a = 20;

int funcion(){
    int a = 10;
    printf("imprimo a %d\n", a);
    return 0;
}

int main(){
    funcion();
    printf("imprimo a %d\n", a);
    return 0; */
/* } */

//ejercicio factorial

/* int factorial(int n){
    int contador = 1;

    while(n > 0){
        contador = contador *n;
        n--;
    }
    return contador;
} 

int main(){
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    if(n<0){
        printf("No hay factorial de numeros negativos");    
    }else{
        printf("El resultado es %d\n", factorial(n));
    }
    

    return 0;
} */

/* #define FELIZ 0
#define TRISTE 1
int estado = TRISTE; // static duration. File scope
void alcoholizar();
void print_estado();
int main(){
print_estado();
alcoholizar();
print_estado();
alcoholizar();alcoholizar();alcoholizar();
print_estado(); // que imprime?
}
void alcoholizar(){
static int cantidad = 0; // static duration. block scope el static sirve para que se mantenga la cantidad y no se reinicie cada vez que se entra a alcoholizar
cantidad++;
if(cantidad < 3){
estado = FELIZ;
}else{
estado = TRISTE;
}
printf("%d\n", cantidad);
}
void print_estado(){
printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
} */


#include <stdio.h>
int g = 10; // file scope 
void functionA() {
int a = 20; // block scope
static int b = 30; 
printf("Dentro de functionA:\n");
printf(" g = %d\n", g);
printf(" a = %d\n", a);
printf(" b = %d\n", b);
// Modificaci´on de las variables
g += 5; // g = 15
a += 10; // a= 30
b += 5; // b =35
}
void functionB() {
int a = 40; // block scope 
static int c = 50;
printf("\nDentro de functionB:\n");
printf(" g = %d\n", g);
printf(" a = %d\n", a);
printf(" c = %d\n", c);
// Modificaci´on de las variables
g += 5; // g = 20
a += 10; // a = 50 
c += 5; // c = 55
}
int main() {
printf("Dentro de main:\n");
printf(" g = %d\n", g);
functionA(); // g + 5
functionB();// g + 5
functionA();// g + 5
functionB();// g + 5
printf("\nFinal en main:\n");
printf(" g = %d\n", g);
return 0;
}