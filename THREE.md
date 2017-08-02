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

Instruções são ações que o processador deve executar para que o programa exista. No trecho de código acima, para calcular a média de um grupo de números, foram necessários pelo menos 4 instruções. Em uma mesma linha podem existir mais de uma instrução, onde o programador possa ser mais flexível e sucinto quando está escrevendo seu programa, mas o computador irá dividir essas linhas até que se tenha uma única instrução explícita por linha e sem ambiguidade.

É necessário entender que quando codificamos estamos em um nível acima do computador, pois escrevemos textos padronizados que irão gerar um código de máquina onde toda sua extensão só existirá zeros e uns. Portanto, estamos em alto nível, enquanto que o máquina e suas operações representadas no sistema binário estão em baixo nível.

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

Nessa imagem existem 3 escopos e, analogamente vamos imaginar que são casas. Então existe a casa <span style="color: #FF3A3A;">vermelha</span>, <span style="color: #3C65C4;">azul</span> e a <span style="color: #FFDE00;">amarela</span>. Em cada casa vive uma pessoa, Fulano, Ciclano e Beltrano. Fulano é uma pessoa curiosa e instalou uma câmera na casa de Ciclano e Beltrano. Ciclano também quis se aponderar disso e colocou uma câmera na casa apenas de Beltrano. Beltrano é uma pessoa boa e não colocou câmera em lugar nenhum. Logo, Fulano sabe o que ele, Ciclano e Beltrano fazem durante o dia, Ciclano tem conhecimento dele e Beltrano, enquanto que Beltrano só presencia seus atos.

Concluimos que os escopos (casas) são usados para definir o grau de ocultação da informação. Logo, os escopos mais externos sabem o que acontece nos escopos internos, porém o inverso já não pode ser dito. É por isso que Beltrano não sabe o que ninguém faz e Fulano consegue observar todos.

<h4 id="indentacao">Indentação</h4>

Indentação nada mais é que o espaçamento dado com relação à margem. Ela ressalta a estrutura do algoritmo e melhora a legibilidade. Da mesma forma que uma redação existe os espaçamentos de parágrafo e saltos de linha quando necessário, na programação é a indentação bem feita que causa o mesmo efeito. Então, se você quiser compartilhar seu código e precisa que seja entendido, é bem provável que necessite de uma indentação. Só para exemplificar, veja um código bem indentado e o mesmo quando a indentação não existe.

``` cpp
// Algoritmo com Indentação           //Algoritmo sem indentação
#include <iostream>                   #include <iostream>

int main () {                         int main () {
  int A = 1;                          int A = 1;
  int B = 2;                          int B = 2;
                                      
  if (A > B) {                        if (A > B) {
    printf("A maior que B");          printf("A maior que B");
  } else if (A == B) {                } else if (A == B) {
    printf("A igual a B");            printf("A igual a B");
  } else if (A < B) {                 } else if (A < B) {
    printf("B maior que A");          printf("B maior que A");
  }                                   }
                                      
  return 0;                           return 0;
}                                     }
                 
```

<h4 id="funcoes">Funções</h4>

Funções, ou métodos, são um grupo de instruções para realizar um determinado algoritmo. Podemos criar uma função para multiplicar dois números e imprimir o resultado na tela, ou simplesmente retornar esse resultado para outra parte do programa utilizar.

Basicamente, uma função possui um nome, seus parâmetros e seu tipo de retorno. Analogamente, imagine uma caixa preta. Se eu te disser que se você entregar a essa caixa preta um número, ela vai te retornar o dobro desse número subtraído de 1.

<img src="http://i.imgur.com/oKPCznQ.png" alt="Caixa Preta" class="img-center">

Logo, o parâmetro é um número e esse deve ser um número inteiro e seu tipo de retorno, ou apenas retorno, também é um número inteiro.

Existem funções onde se passe apenas parâmetros, não existindo um tipo de retorno, ou então, mais simples ainda, quando nem parâmetros existem para que as funções sejam executadas.

Mais adiante retomaremos esse assunto, mas entenda que quando estamos falando sobre funções, essa analogia de caixa preta vai esclarecer bastante o fluxo que o código fonte caminha enquanto ele é executado.

<h3 id="helloworld">Meu primeiro programa: Hello World!</h3>

Como toda curva de aprendizado é preciso começar do básico. Vamos analisar, linha por linha, esse pequeno programa.

``` cpp
#include <stdio.h>

int main () {
   printf("Hello World\n");
   return 0;
}
```

Todo programa escrito em C descreve um comportamento procedural como dito anteriormente. Isto é, em cada linha do programa irá existir uma instrução a ser seguida e a próxima linha só será lida quando a linha atual terminar de executar o que foi pedido. Começando da primeira linha, `#include <stdio.h>` é a maneira como incluímos arquivos externos em nosso código. `stdio.h` é um código fonte (programa, ou arquivo também cabe aqui) que define algumas funções e constantes para que estejam disponíveis para um outro código fonte externo (no caso, o nosso) fazer uso. `int main ()` é o cabeçalho da função nomeada `main`. Em linguagens de programação é importante estabelecer um padrão de ponto de partida para que o computador entenda onde começar o seu programa, logo a `main` tem esse papel fundamental e não pode deixar de existir nunca. Conclui-se então que todo programa que esteja escrito em C deverá possuir uma função `main`.
