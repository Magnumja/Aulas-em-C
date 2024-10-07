// sa moram dois irmãos, João e José.
// João tem 150 cm de altura, e cresce 2 cm por ano. José tem 110 cm de altura e cresce 3 cm por ano.
// Faça um algoritmo que calcule e imprima quantos anos serão necessários para que José seja maior que João.

int main()
{

    int x = 0; // x é anos
    float alturaJoao = 150, alturaJose = 110;

    while (alturaJoao >= alturaJose)
    {
        x++;
        alturaJoao += 2;
        alturaJose += 3;
    }

    printf("O jose sera maior que o joao em %d anos", x);

    return 0;
}