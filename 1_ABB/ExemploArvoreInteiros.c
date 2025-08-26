#include <stdio.h>
#include "ArvoreBinaria.h"
#include "Utils.h"

int main(){
    pDArvore arvInt = criarArvoreBinaria();

    /* teste de inclusao */
    incluirInfo(arvInt, alocaInt(5), comparaInt);
    incluirInfo(arvInt, alocaInt(8), comparaInt);
    incluirInfo(arvInt, alocaInt(7), comparaInt);
    incluirInfo(arvInt, alocaInt(3), comparaInt);
    incluirInfo(arvInt, alocaInt(6), comparaInt);
    incluirInfo(arvInt, alocaInt(9), comparaInt);
    incluirInfo(arvInt, alocaInt(4), comparaInt);

    desenhaArvore(arvInt, imprimeInt);

    printf("\n %d", buscarInfo(arvInt, alocaInt(7), comparaInt));

    printf("\n Qtde folhas %d \n", quantidadeFolhas(arvInt));
    printf("\n Qtde Nohs %d \n",   quantidadeNohs(arvInt));
    printf("\n Altura %d \n",   altura(arvInt));

    printf("\n Em ordem: ");
    emOrdem(arvInt, imprimeInt);

    // excluir nó folha
    excluirInfo(arvInt, alocaInt(5), comparaInt);

    desenhaArvore(arvInt, imprimeInt);
}
