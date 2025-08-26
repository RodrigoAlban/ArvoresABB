#ifndef CRIAR_ARVORE_H
#define CRIAR_ARVORE_H

/* --------------------------*/
pDArvore criarArvoreBinaria(){

    pDArvore desc = malloc(sizeof(DArvore));
    desc->raiz           = NULL;
    desc->quantidadeNohs = 0;

    return desc;
};

#endif
