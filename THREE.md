<h1 id="three">Linguagem C</h1>

A linguagem C pode ser classificada como uma linguagem procedural, imperativa e estruturada.

   * Procedural porque é codificada com chamadas de procedimentos.
   * Imperativa porque executa-se tarefas que o computador é capaz por meio de ações.
   * Estruturada porque a linguagem é dividida em estruturas bem definidas sendo elas, sequência, decisão ou repetição (loops).

O programador fica responsável por agrupar um conjunto de chamadas de funções com o intuito de realizarem uma determinada tarefa. Como foi dito, os códigos podem seguir uma sequência simples, apresentar alguma tomada de decisão e um trecho onde exista um loop.

```cpp
double CalculaMedia(int[] numeros) {
   int soma = somaTodosNumeros();
   int totalNumeros = contaNumeros();
   double media = (soma / totalNumeros);
   return media;
}
```
Não se preocupando muito com a sintaxe, não é difícil perceber que esse pequeno trecho de código executou funções específicas para calular a média de um conjunto de `numeros`. Uma sequência foi seguida aqui, mas não houve tomadas de decisão ou loops. Além disso, esse exemplo mostra as três classificações da linguagem.

Após a leitura desse capítulo será possível entender melhor a linguagem e completar esse exemplo para que possamos ver a mágica acontecendo.

<h3 id="basico">Conceitos básicos</h3>

Para entender melhor, e antes de mostrar um programa completo, é bom expor alguns conceitos essenciais e nomes que serão ditos com frequência.

<h4 id="instrucao">Instrução</h4>

<h4 id="definicaodeclarao">Declaração e Definição</h4>

Declaração, na programação, é o termo usado quando pedimos ao computador, por meio de instruções, que guarde a <strong>existência</strong> de alguma coisa em sua memória. Essa coisa pode ser uma variável, um cabeçalho de função, uma estrutura de dados.

Definição, na programação, é o termo usado quando pedimos ao computador, por meio de instruções, que guarde a <strong>essência</strong> de alguma coisa em sua memória. Essa essência pode ser o valor de uma variável, um conjunto de instruções de uma função, as propriedades de uma estrutura de dados.

Para exemplificar esses dois termos peço que memorize a palavra Maçã e que ela é uma fruta. Por enquanto, você só sabe o nome e o tipo, logo declaramos a Maçã. Agora se eu completar dizendo que ela pesa 70g, uma altura de 6cm, diâmetro de 5cm e tem cor predominantemente vermelha, podemos completar o raciocínio dizendo que definimos a nossa Maçã.

<h4 id="variaveis">Variáveis</h4>

Variáveis são responsáveis por guardar alguma informação e o tipo dessa informação. Quando eu digo guardar, quer dizer que o computador armazenou a variável em algum lugar de sua memória e que poderemos reutilizar essa variável onde quisermos em nosso programa sempre que necessário. Entenda isso da seguinte forma, se eu te pedir para memorizar o número `4312` em sua cabeça, por se tratar de um trecho do celular de uma pessoa, você automaticamente irá repetir várias vezes na sua cabeça esses quatros números e inconscientemente você sabe que esse número é um número positivo inteiro. Logo, você <strong>guardou</strong> o número em sua memória e seu <strong>tipo</strong> para que eu use quando <strong>necessário</strong>. Na programação em C declaramos e definimos uma variável da seguinte forma:

``` cpp
int numero1; // declaramos uma variável com nome numero1 do tipo inteiro

numero1 = 5; // definimos numero1 atribuindo o valor 5 a ela

int numero2 = 6; // declaramos uma variável com nome numero2 do tipo inteiro e
                 // já definimos o seu valor na mesma linha 
```
Nos exemplos acima, vemos como declarar uma variável, atribuir um valor a ela com o operador `=` e declarar e definir tudo na mesma linha. Essa flexibilidade permite que você escolha o momento certo para definir o valor armazenado em sua variável.

<h4 id="escopo">Escopo</h4>

Escopo é um contexto delimitante aos quais valores e expressões estão associados e sua representação na linguagem C/C++ é o operador `{` para abrir um escopo e `}` para fechar. Sua finalidade é separar melhor as instruções de seu programa de modo que sua acessibilidade e visibilidade seja determinado por ele. Isso garante uma maior organização e acompanhar o que o computador consegue acessar a partir de uma determinada linha do seu código. Para entender melhor, olhe para a imagem abaixo:

<div class="code-scope" style="background-color: #2d2d2d;">
<span style="color: #FF3A3A;">{</span><br/>
  
  &nbsp;&nbsp;<span style="color: white;">Fulano</span><br/>

  &nbsp;&nbsp;<span style="color: #3C65C4;">{</span><br/>

    &nbsp;&nbsp;&nbsp;&nbsp;<span style="color: white;">Ciclano</span><br/>

    &nbsp;&nbsp;&nbsp;&nbsp;<span style="color: #FFDE00;">{</span><br/>

      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color: white;">Beltrano</span><br/>

    &nbsp;&nbsp;&nbsp;&nbsp;<span style="color: #FFDE00;">}</span><br/>

  &nbsp;&nbsp;<span style="color: #3C65C4;">}</span><br/>

<span style="color: #FF3A3A;">}</span>
</div>

Nessa imagem existem 3 escopos e, analogamente vamos imaginar que são casas. Então existe a casa <span style="color: #FF3A3A;">vermelha</span>, <span style="color: #3C65C4;">azul</span> e a <span style="color: #FFDE00;">amarela</span>. Em cada casa vive uma pessoa, Fulano, Ciclano e Beltrano.

<h4 id="indentacao">Indentação</h4>

<h4 id="funcoes">Funções</h4>

<h3 id="basico">Meu primeiro programa</h3>

Como toda curva de aprendizado é preciso começar do básico. Vamos analisar, linha por linha, esse pequeno programa.

``` cpp
#include <stdio.h>

int main () {
   printf("Hello World\n");
   return 0;
}
```

Todo programa escrito em C descreve um comportamento procedural como dito anteriormente. Isto é, em cada linha do programa irá existir uma instrução a ser seguida e a próxima linha só será lida quando a linha atual terminar de executar o que foi pedido. Começando da primeira linha, `#include <stdio.h>` é a maneira como incluímos arquivos externos em nosso código. `stdio.h` é um código fonte (programa, ou arquivo também cabe aqui) que define algumas funções e constantes para que estejam disponíveis para um outro código fonte externo (no caso, o nosso) fazer uso. `int main ()` é o cabeçalho da função nomeada `main`. Em linguagens de programação é importante estabelecer um padrão de ponto de partida para que o computador entenda onde começar o seu programa, logo a `main` tem esse papel fundamental e não pode deixar de existir nunca. Conclui-se então que todo programa que esteja escrito em C deverá possuir uma função `main`.
