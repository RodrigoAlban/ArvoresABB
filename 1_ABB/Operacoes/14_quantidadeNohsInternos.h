#ifndef QUANTIDADE_NOHS_INTERNOS_H
#define QUANTIDADE_NOHS_INTERNOS_H

int quantidadeNohsInternos_rec(pNohArvore noh) {
    if (noh == NULL) return 0;                       // nó nulo
    if (noh->esquerda == NULL && noh->direita == NULL) return 0; // folha
    return 1 + quantidadeNohsInternos_rec(noh->esquerda)
             + quantidadeNohsInternos_rec(noh->direita);
}

int quantidadeNohsInternos(pDArvore arvore) {
    if (arvore == NULL || arvore->raiz == NULL) return 0;
    return quantidadeNohsInternos_rec(arvore->raiz);
}

#endif