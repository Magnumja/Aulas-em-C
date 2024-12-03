#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Temperaturas[31];
    int Soma = 0, i;
    float Media;
    int Diferenca;

    for( i = 0; i < 31; i++)
    {
        printf("Digite a Temperatura do %do Dia: ", i + 1);
        scanf("%d", &Temperaturas[i]);

        Soma += Temperaturas[i];
    }

    Media = Soma/31;

    printf("\n A media das temperaturas foi %.2f", Media);
    printf("\n As Diferencas das Temperaturas com a Media sao: ", Media);

    for ( i = 0; i <31; i++ )
    {
        if( Media > Temperaturas[i])
        {
            Diferenca = Media - Temperaturas[i];
            printf("\n %do Dia, %d graus abaixo.", i + 1, Diferenca);
        }
        if( Media = Temperaturas[i] )
        {
            printf("\n %do Dia, 0 graus, na media.", i + 1);

        }
        else
        {
            Diferenca = Temperaturas[i] - Media;
            printf("\n %do Dia, %d graus acima.", i + 1, Diferenca);
        }
    }

}
