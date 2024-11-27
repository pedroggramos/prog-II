
arq = fopen("studies.txt", "r");

for(int i = 0; i < 5; i++){
    fscanf(arq, "Nome %d: %s", &i, &nomes[i]);
}

fclose(arq);

for(int i = 0; i < 5; i++){
    printf("Nome %d: %s", i, nomes[i]);
}
