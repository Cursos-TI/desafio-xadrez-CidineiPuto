#include <stdio.h>

// Função recursiva da torre
void MoverTorre(int movimentos){
    if (movimentos > 0){
        printf("*Movendo para frente*\n");
        MoverTorre(movimentos - 1);
    }
}

// Função recursiva do bispo
void MoverBispo(int movimentos){
    if (movimentos > 0){
        while(movimentos > 0){
            printf("*Movendo para direita*\n");
            break;
        }
        printf("*Movendo para cima*\n");
        MoverBispo(movimentos - 1);
    }
}

// Função recursiva da rainha
void MoverRainha(int movimentos){
    if (movimentos > 0){
        printf("*Movendo para esquerda*\n");
        MoverRainha(movimentos - 1);
    }
}


int main(){
    // Iniciando as variáveis de quantidade de movimento
    int movimento_torre = 5, 
    movimento_bispo = 5,
    movimento_rainha = 8;
    printf("----------TORRE----------\n");
    MoverTorre(movimento_torre);
    printf("----------BISPO----------\n");
    MoverBispo(movimento_bispo);
    printf("----------RAINHA----------\n");
    MoverRainha(movimento_rainha);
    // Dando espaço em branco para o cavalo
    printf("\n");

    printf("----------CAVALO----------\n");
    // Função do movimento em L do cavalo
    for (int movimento_peca_cavalo_horizontal = 1, movimento_peca_cavalo_vertical = 0;
    movimento_peca_cavalo_horizontal <= 1 && movimento_peca_cavalo_vertical < 2;
    movimento_peca_cavalo_horizontal++){
        while (movimento_peca_cavalo_vertical < 2){
            printf("*Movendo para cima*\n");
            movimento_peca_cavalo_vertical++;
            continue;
        }
        printf("*Movendo para direita*\n");
    }
    
    /*
    EXPLICAÇÃO DO CAVALO;

    Definindo a variável movimento horizontal e vertical no início do for. 
    Horizontal irá valer 1, enquanto o valor do vertical será 0, já que o intuito é ter
    apenas 1 horizontal e 2 verticais. O código irá checar se o movimento horizontal é <= 1,
    ou seja, se ele for acrescentado uma vez, ele já não irá passar, mas mesmo assim, ainda checa
    se o movimento da peça vertical é menor que 2. 

    Por fim, irá acrescenter o movimento horizontal ao fim, para que não seja executado o código novamente.

    Após isso um while é iniciado caso o movimento do cavalo vertical seja menor que 2. Ele irá acrescentar
    duas vezes no movimento. Assim, quando o valor for 0. O continue irá fazer a outra iteração chegar.
    Até vir todas as iterações possíveis que seria apenas 2 (O valor sendo 0 e o outro sendo 1).
    No fim, quando o while for falso, a peça irá mover para a direita. O for irá checar tudo novamente,
    porém agora será falso, já que a peça horizontal irá valer 2 e a vertical também irá valer 2, 
    ou seja, ambas comparações estão erradas.
    */
    return 0;
}