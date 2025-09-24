#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(){

    system("clear");

    std::cout << "Hello, World";
    
    return 0;
}
// cin.ignore();//Limpa o buffer
// cout << fixed << setprecision(1);

/* 
REQUISITO FUNCIONAL:
VIRAM FUNCIONALIDADE NO SISTEMA
ESPECIFICAM AÇÕES AÇÕES QUE UM SISTEMA DEVE EXECUTAR,
SEM LEVAR EM CONSIDERAÇÃO RESTRIÇÕES FÍSICAS
EX: 
O USUARIO DEVERÁ VISUALIZAR SEUS PEDIDOS NÃO ENTREGUES.
O GERENTE DEVERÁ VISUALIZAR O NÚMERO DE HORAS TRABALHADAS
DE TODOS OS FUNCIONÁRIOS DO SETOR.

REQUISITO NÃO FUNCIONAL:
DESCREVEM RESTRIÇÕES DESEJADAS OU NECESSÁRIAS, ATRIBUTOS
OU SISTEMA OU DE SEU AMBIENTE
CONDIÇÕES QUE O SISTEMA DEVE ATENDER
QUALIDADE ESPECIFICAS QUE O SISTEMA DEVE TER
ESPECIFICIDADES QUE O AMBIENTE DEVE CUMPRIR
* TODAS AS FUNCIONALIDADES DO SISTEMA DEVERÃO SER ACESSADAS
EM APENAS 4 CLIQUES PELO USUÁRIO
SÃO CHAMADOS TAMBÉM DE RESTRIÇÕES

QUESTÕES: Q CONCURSO

MONOLITO - MVC - MVVM - DDD
PESQUISAR NO CANAL CÓDIGO FONTE


*/

/*
Problema "consumo"
Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.
Exemplo 1:
Distancia percorrida: 500
Combustível gasto: 38.5
Consumo medio = 12.987
Exemplo 2:
Distancia percorrida: 1108
Combustível gasto: 71.4
Consumo medio = 15.518
*/