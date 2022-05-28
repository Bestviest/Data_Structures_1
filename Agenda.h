Struct agenda
{
    char nome [100], email [10], celular [10];
    int tamanho;
} ;

void Inserircontato(struct agenda t[]);  //cadastrar contatos na agenda
void estadoagenda( struct agenda t[]); // exibir o estado da agenda
void alterarcontados( struct agenda t[]); // alterar contatos da agenda
void excluircontatos( struct agenda t[]); // excluir contatos da agenda
void exibircontatos(struct agenda t[]); // exibir os contatos da agenda 
void pesquisarcontatos(struct agenda t[]); // pesquisa os contatos da agenda 