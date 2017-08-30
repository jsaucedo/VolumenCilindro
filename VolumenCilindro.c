# include < stdio.h >
# define PI 3.141592

int main() {

    float radio, altura, volumen;

    printf("Ingresa el radio del cilindro: ");
    scanf("%f", & radio);
    printf("Ingresa la altura del cilindro: ");
    scanf("%f", & altura);

    volumen = PI * radio * radio * altura;
    printf("El volumen del cilindro es %f", volumen);
    printf("\nFin del algoritmo\n");
    return 0;
  }
