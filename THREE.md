# Linguagem C

A linguagem C pode ser classificada como uma linguagem procedural, imperativa e estruturada.

   * Procedural porque é codificada com chamadas de procedimentos.
   * Imperativa porque executa-se tarefas que o computador é capaz por meio de ações.
   * Estruturada porque a linguagem é dividida em estruturas bem definidas sendo elas, sequência, decisão ou repetição (loops).

O programador fica responsável por agrupar um conjunto de chamadas de funções com o intuito de realizarem uma determinada tarefa. Como foi dito, os códigos podem seguir uma sequência simples, apresentar alguma tomada de decisão e um trecho onde exista um loop.

```cpp
void CalculaMedia(int[] numeros) {
   int soma = somaTodosNumeros();
   int totalNumeros = contaNumeros();
   int media = (soma / totalNumeros);
}
```
Não se preocupando muito com a sintaxe, não é difícil perceber que esse pequeno trecho de código executou funções específicas para calular a média de um conjunto de `numeros`. Uma sequência foi seguida aqui, mas não houve tomadas de decisão ou loops. Além disso, esse exemplo mostra as três classificações da linguagem.

Após a leitura desse capítulo será possível entender melhor a linguagem e completar esse exemplo para que possamos ver a mágica acontecendo.

<h3 id="basico">Meu primeiro programa</h3>

Como toda curva de aprendizado é preciso começar do básico. Vamos analisar, linha por linha, esse pequeno programa.

``` cpp
#include <stdio.h>

int main() {
   printf("Hello World\n");
   return 0;
}

```