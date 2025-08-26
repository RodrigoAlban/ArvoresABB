#ifndef CRIAR_ARVORE_BINARIA_H
#define CRIAR_ARVORE_BINARIA_H

/* --------------------------*/
pNohArvore incluirInfoRecursivo(pNohArvore raiz, void *info, FuncaoComparacao pfc){

   // caso base
   if (raiz == NULL){

    pNohArvore novo = malloc(sizeof(NohArvore));
    novo->info = info;
    novo->esquerda = NULL;
    novo->direita  = NULL;

    return novo;
   }
   // caso recursivo
   if (pfc(raiz->info, info) < 0)
       raiz->esquerda = incluirInfoRecursivo(raiz->esquerda, info, pfc);
   else
       raiz->direita = incluirInfoRecursivo(raiz->direita, info, pfc);


  return raiz;
}

/* ----------------------------------------------------------*/
void incluirInfo(pDArvore arvore, void *info, FuncaoComparacao pfc){

    arvore->raiz = incluirInfoRecursivo(arvore->raiz, info, pfc);
}

#endif

