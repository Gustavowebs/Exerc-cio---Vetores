#include <stdio.h>
#include <stdlib.h>
int main() {
    int mesas[30] = {0};
    int codigo_mesa, lugares_desejados;
    int lugares_ocupados = 0;

    while (1) {
        printf("Digite o codigo da mesa (100 a 129, ou 0 para sair): ");
        scanf("%d", &codigo_mesa);

        if (codigo_mesa == 0) {
            break;
        }
        if (codigo_mesa < 100 || codigo_mesa > 129) {
            printf("Codigo da mesa invalido\nTente novamente\n");
            continue;
        }
        int indice_mesa = codigo_mesa - 100;

        printf("Digite a quantidade de lugares desejados: ");
        scanf("%d", &lugares_desejados);

        if (mesas[indice_mesa] + lugares_desejados <= 5) {
            mesas[indice_mesa] += lugares_desejados;
            lugares_ocupados += lugares_desejados;
            printf("Reserva realizada com sucesso\n");
        } else {
            printf("Não foi possível realizar a reserva\n");
        }
        if (lugares_ocupados == 30 * 5) {
            printf("Todas as mesas estão totalmente reservadas\nPrograma encerrado!\n");
            break;
        }
    }
}
