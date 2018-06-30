 // Arquivos de cabeçalho agenda telefônica
#ifndef  TELEFONE_H

// Estrutura para contatos
typedef struct _contato_{
    char nome[50];
    long telefone;
    char email[100];
}contato;


// carregando contatos do arquivo para o computador
///contato* carga(char *arquivo_nome);

// gravando contatos do telefone no arquivo
void gravar(char * , contato* , int );

// pesquisando contatos
///void pesquisarContato();

#endif