#include <stdio.h>

int main() {

    // Vetor que armazena a quantidade de carros por dia
    int carrosSemana[7];

    // Matriz com os nomes dos dias da semana
    char diasSemana[7][15] = {
        "Segunda",
        "Terca",
        "Quarta",
        "Quinta",
        "Sexta",
        "Sabado",
        "Domingo"
    };

    int i;
    int totalCarros = 0;
    int maiorFluxo;
    int diaPico = 0;
    float mediaCarros;

    printf("====================================\n");
    printf("      CONTROLE DE PEDAGIO\n");
    printf("====================================\n\n");

    // Leitura dos dados utilizando vetor e laço de repetição
    for(i = 0; i < 7; i++) {
        printf("Informe a quantidade de carros na %s: ",
               diasSemana[i]);
        scanf("%d", &carrosSemana[i]);
    }

    // Inicializa as variáveis de comparação
    maiorFluxo = carrosSemana[0];

    // Processamento dos dados armazenados no vetor
    for(i = 0; i < 7; i++) {

        // Soma total de veículos da semana
        totalCarros += carrosSemana[i];

        // Identifica o dia com maior movimento
        if(carrosSemana[i] > maiorFluxo) {
            maiorFluxo = carrosSemana[i];
            diaPico = i;
        }
    }

    // Cálculo da média diária
    mediaCarros = (float) totalCarros / 7;

    printf("\n====================================\n");
    printf("       RELATORIO SEMANAL\n");
    printf("====================================\n\n");

    // Exibe os dados registrados
    for(i = 0; i < 7; i++) {

        // Bônus: destaque para o dia de pico
        if(i == diaPico) {
            printf("%s: %d carros <<< DIA DE MAIOR MOVIMENTO >>>\n",
                   diasSemana[i],
                   carrosSemana[i]);
        } else {
            printf("%s: %d carros\n",
                   diasSemana[i],
                   carrosSemana[i]);
        }
    }

    // Exibição do resumo da semana
    printf("\n====================================\n");
    printf("             RESUMO\n");
    printf("====================================\n");

    printf("Total de carros na semana: %d\n",
           totalCarros);

    printf("Media diaria de carros: %.2f\n",
           mediaCarros);

    printf("Dia de maior movimento: %s\n",
           diasSemana[diaPico]);

    printf("Quantidade de carros no pico: %d\n",
           maiorFluxo);

    return 0;
}