#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main() {
    FILE *arquivo;
    char nome[50], endereco[100], numero[20];
    int i;

    arquivo = fopen("agenda.txt", "w");
    if (arquivo == NULL) {
        cout << "Erro ao abrir o arquivo" << endl;
        exit(1);
    }

    for (i = 0; i < 5; i++) {
        cout << "\nContato " << i + 1 << endl;

        cin.ignore();
        cout << "Nome: ";
        cin.getline(nome, 50);

        cout << "Endereco: ";
        cin.getline(endereco, 100);

        cout << "Telefone: ";
        cin.getline(numero, 20);

        fprintf(arquivo, "#Contato %d#\n", i + 1);
        fputs("Nome: ", arquivo);
        fputs(nome, arquivo);
        fputs("\n", arquivo);
        fputs("Endereco: ", arquivo);
        fputs(endereco, arquivo);
        fputs("\n", arquivo);
        fputs("Telefone: ", arquivo);
        fputs(numero, arquivo);
        fputs("\n\n", arquivo);
    }

    fclose(arquivo);

    arquivo = fopen("agenda.txt", "r");
    if (arquivo == NULL) {
        cout << "Erro ao abrir o arquivo para leitura!" << endl;
        exit(1);
    }

    cout << "\n===== CONTATOS NA AGENDA =====\n";

    char c;
    while ((c = fgetc(arquivo)) != EOF) {
        cout << c;
    }

    fclose(arquivo);

    cout << "\nPressione qualquer tecla para sair...";
    _getch();

    return 0;
}
