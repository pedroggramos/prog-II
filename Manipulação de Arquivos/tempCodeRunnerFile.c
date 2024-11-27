  FILE *arquivo;
  arquivo = fopen("registro.txt", "r");

  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.");
    return 1;
  }
