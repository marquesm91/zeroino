# O Sistema Binário

O nosso computador é uma máquina poderosa capaz de receber e realizar instruções das mais variadas maneiras. Utilizar o teclado para exibir caracteres em um editor de texto. Clicar em um ícone e abrir algum programa. O simples movimento do mouse reproduzido no ponteiro da tela. Esses são alguns dos exemplos que o computador precisa de "pensar" para responder de maneira correta. O mais incrível é que ele faz isso utilizando apenas números. Apenas zeros e uns.

O Sistema Binário nada mais é que um sistema numérico onde só existem dois algarismos distintos: 0 e 1. O nosso sistema numérico convencional é o sistema decimal - ou de base 10 - onde existem 10 algarismos distintos, os números de 0 a 9. Cada posição de algarismo tem um nome específico, sendo eles a unidade, dezena, centena e assim por diante. No mundo computacional, simplifica-se chamando essas posições de *bit*.

<h3 id="porque">Por que aprender binário?</h3>

Exemplos futuros irão envolver configuração de sensores e muitas dessas configurações trata-se de ligar e desligar *bits*. A leitura dos sensores são feitas em nível binário e conversões são necessárias para facilitar a manipulação matemática, dentre outros desafios que precisam de um conhecimento prévio do sistema numérico que os computadores utilizam. Portanto, é importante começar com o pé direito e entender as pequenas coisas para construir grandes projetos.

<h3 id="formula">Fórmula dos números</h3>

O número `13` na base decimal é o número `1101` (leia-se um, um, zero, um) na base binária. Foram precisos 4 bits para sua representação, enquanto que, na base em que estamos acostumados, apenas dois algarismos são utilizados. Por que tão diferentes?

<div class="code-scope">
13 = 1*10^1 + 3*10^0
</div>

A equação acima está matematicamente correta e apenas representamos o número explicitando a base.

A representação da multiplicação no computador é dada pelo símbolo `*` enquanto que a representação da pontenciação é dado por `^`. De maneira genérica, existe uma forma de converter qualquer número em uma determinada base para a base decimal.

<div class="code-scope">
(algarismo)*(base)^(posição)
</div>

onde `algarismo` é um dos algarismos que representa a `base`, isto é, para a base decimal será algum número entre 0 e 9 e para a base binária será 0 ou 1. A `posição` representa onde ele está posicionado começando do zero e contando da direita para a esquerda. O número `0111` é representado por quem na base decimal? Simples, usando a fórmula

<div class="code-scope">
	<span class="red-content">0111</span> = <span class="red-content">0</span>*2^3 + <span class="red-content">1</span>*2^2 + <span class="red-content">1</span>*2^1 + <span class="red-content">1</span>*2^0 = 7
</div>

Descobrimos que é o número `7`. Utilizando a mesma fórmula é possível verificar que o número `1101` apresentado anteriormente, é, de fato, o número `13`. Apesar de simples não é funcional utilizar a fórmula insistentemente. Se acostumar em anotar todas as potências de 2 acima dos *bits* é uma boa prática para evitar o uso da fórmula. As potências de 2, partindo do primeiro bit - ou bit 0 - é `2^0 = 1`, o segundo bit é `2^1 = 2`, o terceiro `2^2 = 4` e assim por diante.

<div class="code-scope">
	<span class="">
		8	4	2	1
	</span><br/>
	<span class="red-content">
		0 1	1	1
	</span><br/>
</div>

Intuitivamente conseguimos ver que 0 representa um *bit* "desligado" e 1 "ligado". Logo, `4 + 2 + 1 = 7` e chegamos ao resultado mais rápido. É importante notar que os *bits* que possuem valores maiores, isto é, os mais significativos, ficam à esquerda e os menos significativos à direita. É por isso que o 1 está à direita, enquanto que o 8 está à esquerda. Para agilizar ainda mais a conversão e se habituar a fazer de cabeça, é interessante entender quantos *bits* são necessários para se representar um determinado número.

Observe a tabela a seguir que converte os 10 algarismos iniciais da base 10 para a base binária utilizando 4 bits.


| Base decimal | Base binária |
|:------------:|:------------:|
|      0       |     0000     |
|      1       |     0001     |
|      2       |     0010     |
|      3       |     0011     |
|      4       |     0100     |
|      5       |     0101     |
|      6       |     0110     |
|      7       |     0111     |
|      8       |     1000     |
|      9       |     1001     |

Até o número `7` era possível utilizar apenas 3 *bits* (ou até menos) para sua representação, já que zeros à esquerda são desprezíveis para computador (algo natural, visto que 01 é o mesmo que 1). A partir do número `8`, 4 bits foram necessários para sua representação. Quantos *bits* seriam necessários para representar o número 1023 por exemplo? Se continuássemos a acrescentar *bits* a esquerda, teríamos

<div class="code-scope">
	<span class="">
		1024&nbsp;512&nbsp;256&nbsp;128&nbsp;64&nbsp;&nbsp;32&nbsp;&nbsp;16&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;&nbsp;4&nbsp;&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;1
	</span><br/>
	<span class="red-content">
		&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1
	</span><br/>
</div>

Um total de 10 *bits* para sua representação. Não existe uma fórmula tão direta e simples para calcular o número exato de *bits*, porém é possível saber qual o maior número baseado no número de *bits* disponíveis. Pela fórmula `(base)^(número de bits) - 1` conseguimos identificar qual o maior número da faixa. Logo, com 10 *bits* `2^10 - 1 = 1023` é o maior número que pode ser representando, enquanto que o menor é 0. O número que está entre essa faixa é obtido através de um malabarismo entre os valores dos *bits*.

<h3 id="operacoes">Operações com os bits</h3>

Existem quatro operações básicas na matemática: soma `+`, subtração `-`, multiplicação `*` e divisão `/`. Dentre elas, a mais usada no sistema binário é a soma. Há também operações lógicas como AND, OR, XOR e NOT são classificadas como operações bitwise ou bit a bit. Além delas, os deslocamentos à direita e esquerda são fortemente utilizados e classificados como operações de deslocamentos. Esses, que caracterizam a multiplicação e a divisão no mundo da computação.

<h4 id="adicao">Operador +</h4>

Somar dois números na base 10 é bem simples e muitas das vezes não é preciso colocar no papel. Já no sistema binário, por envolver mais algarismos (bits), não é tão fácil sem um pouco de prática. Seja o exemplo a seguir

<div class="code-scope">
		&nbsp;&nbsp;0 0	<span class="red-content">1</span> <span class="blue-content">1</span><br/>
		+&nbsp;1 0 <span class="red-content">1</span> <span class="blue-content">0</span><br/>
		&nbsp;&nbsp;=======<br/>
</div>

Foi marcado em <span class="blue-content">azul</span> e <span class="red-content">vermelho</span> duas situações de acontecer. Somar `1` com `0` e `1` com `1`. Só para completar, o sistema binário não é mágico, então somar `0` com `0` continua sendo `0`. A operação em <span class="blue-content">azul</span> é simples e direta: `1 + 0 = 1`.

<div class="code-scope">
		&nbsp;&nbsp;0 0	<span class="red-content">1</span> <span class="blue-content">1</span><br/>
		+&nbsp;1 0 <span class="red-content">1</span> <span class="blue-content">0</span><br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1
</div>

A segunda soma já temos o fenômeno do "vai um" na matemática, logo `1 + 1 = 10`. Um pouco estranho, mas não podemos esquecer que estamos na base binária agora. Traduzindo `10` para a base decimal e lembrando que o bit 1 - ou segundo bit - equivale a `2^1 = 2` temos que o número `10` na base binária é o número `2` na base decimal. Daí temos que,

<div class="code-scope">
		&nbsp;&nbsp;&nbsp;&nbsp;1<br/>
		&nbsp;&nbsp;0 0	<span class="red-content">1</span> <span class="blue-content">1</span><br/>
		+&nbsp;1 0 <span class="red-content">1</span> <span class="blue-content">0</span><br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;1 1 0 1
</div>

A terceira e a quarta soma são idênticas a primeira, logo temos que o número final é `1101`. Fica como desafio, converter os três números para a base decimal e verificar se a soma está correta. Após a apresentação da operação de soma na base binária não é difícil perceber que é bem direta e simples, mas existe um pequeno problema que muitos projetistas acabam pecando. Vamos analisar a soma de dois números novamente, agora o primeiro sendo `0111`. A primeira e a segunda soma continuarão sendo idênticas, porém a terceira e a quarta deixaram de ser `1 + 0` e passaram a ser `1 + 1`. Se continuarmos as operações, chegamos ao seguinte resultado.

<div class="code-scope">
		1 <span class="red-content">1</span> <span class="red-content">1</span><br/>
		&nbsp;&nbsp;0 <span class="red-content">1</span>	<span class="red-content">1</span> <span class="blue-content">1</span><br/>
		+&nbsp;<span class="red-content">1</span> 0 <span class="red-content">1</span> <span class="blue-content">0</span><br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;0 0 0 1
</div>

Aquele último `1` a esquerda foi perdido, pois não existem *bits* disponíveis para representá-lo. Esse fenômeno de perda chama-se *overflow*. O que aconteceu ali? Com 4 *bits*, o número máximo que conseguimos represetar é o número `15` e o seu equivalente na base binária é `1111`. Intuitivamente, o número que não consegue ser representado deve ser superior a `15` e de fato é. `10001` na base decimal é o `17` e para que ele exista, sua resolução mínima é de 5 *bits*.

<h4 id="not">Operador ~</h4>

O operador lógico NOT `~` é a operação mais básica no sistema binário, representando a inversão. Esse operador é aplicado diretamente em um número binário não necessitando de dois números se relacionarem. Para ilustrar como os bits são afetados por esse operador é importante apresentar a tabela verdade. Seja um número A representado na base binária e de apenas 1 *bit*, tem-se

| A | ~A |
|:-:|:--:|
| 0 |  1 |
| 1 |  0 |

Se adotarmos que `0` representa falso e `1` verdadeiro, a tabela verdade mostra que o resultado é apenas a contradição do outro, ou seja, se verdadeiro é falso e se falso é verdadeiro. Com um exemplo mais prático, podemos aplicar a tabela verdade *bit* a *bit* e encontrar o resultado da operação.

<div class="code-scope">
		~&nbsp;1 0	1 1<br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;0 1 0 0
</div>

Esse tipo de operação traz exclusividade quando queremos identificar as posições dos números 0 ou 1. Nesse caso, podemos ver que o único *bit* representado por `0` está na terceira posição (da direita para a esquerda).

<h4 id="and">Operador &</h4>

O operador lógico AND `&` é similar a operação de interseção na matemática. Para ilustrar como os *bits* são afetados por esse operador é importante apresentar a tabela verdade. Seja dois números A e B representados na base binária e de apenas 1 *bit*, tem-se

| A | B | A & B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 0 | 1 |   0   |
| 1 | 0 |   0   |
| 1 | 1 |   1   |

Se adotarmos que `0` representa falso e `1` verdadeiro, a tabela verdade mostra que o resultado é apenas verdadeiro se, e somente se, os dois são verdadeiros. Com um exemplo mais prático, podemos aplicar a tabela verdade *bit* a *bit* e encontrar o resultado da operação.

<div class="code-scope">
		&nbsp;&nbsp;1 0	1 1<br/>
		&&nbsp;1 0 1 0<br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;<span class="blue-content">1</span> 0 <span class="blue-content">1</span> 0
</div>

É fácil perceber que apenas a primeira e terceira operação equivale a `1`. Esse tipo de operação traz exclusividade quando queremos identificar em um número com muitos *bits* aquelas posições onde o *bit* equivale a 1 em ambos os números.

<h4 id="or">Operador |</h4>

O operador lógico OR `|` é similar a operação de união na matemática. Para ilustrar como os bits são afetados por esse operador é importante apresentar a tabela verdade. Seja dois números A e B representados na base binária e de apenas 1 *bit*, tem-se

| A | B | A &#124; B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 0 | 1 |   1   |
| 1 | 0 |   1   |
| 1 | 1 |   1   |

Se adotarmos que `0` representa falso e `1` verdadeiro, a tabela verdade mostra que o resultado é apenas verdadeiro quando um ou ambos são verdadeiros. Com um exemplo mais prático, podemos aplicar a tabela verdade *bit* a *bit* e encontrar o resultado da operação.

<div class="code-scope">
		&nbsp;&nbsp;1 0	1 1<br/>
		|&nbsp;1 0 1 0<br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;<span class="blue-content">1</span> 0 <span class="blue-content">1</span> <span class="blue-content">1</span>
</div>

Utilizando o mesmo exemplo do operador lógico AND obtivemos um resultado diferente. Apenas o terceiro *bit* (da direita para a esquerda, sempre!) permaneceu 0. Isso mostra que o operador `|` é bastante utilizado para identificar quais as posições dos bits que em ambos os números estão demarcados por `0`.

<h4 id="xor">Operador ^</h4>

O operador lógico XOR `^` é similar a operação de união exclusiva na matemática. Para ilustrar como os *bits* são afetados por esse operador é importante apresentar a tabela verdade. Seja dois números A e B representados na base binária e de apenas 1 *bit*, tem-se

| A | B | A ^ B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 0 | 1 |   1   |
| 1 | 0 |   1   |
| 1 | 1 |   0   |

Se adotarmos que `0` representa falso e `1` verdadeiro, a tabela verdade mostra que o resultado é apenas verdadeiro se, e somente se, apenas um deles é verdadeiro. Com um exemplo mais prático, podemos aplicar a tabela verdade *bit* a *bit* e encontrar o resultado da operação.

<div class="code-scope">
		&nbsp;&nbsp;1 0	1 1<br/>
		^&nbsp;1 0 1 0<br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;0 0 0 <span class="blue-content">1</span>
</div>

Utilizando o mesmo exemplo do operador lógico AND obtivemos um resultado diferente. Apenas o primeiro *bit* equivale a `1`. Isso mostra que o operador `^` é bastante utilizado para identificar quais as posições dos *bits* que são exclusivas, ou seja, *bit* equivalente a `1` em apenas um dos números. 

A imagem abaixo ajuda a identificar, visualmente, os três operadores explicados anteriormente.

<img src="http://i.imgur.com/Q2Y7Js6.png" alt="Conjuntos" class="img-center">

A interseção (AND) dos conjuntos A e B representa a região 2 colorida de roxa. A união (OR) dos conjuntos A e B representa a região 1 colorida de azul somada com a região 2 colorida de roxa. Por fim, a operação de exclusivdade (XOR) entre os conjuntos A e B são as regiões 1 e 3 isoladas, coloridas, respectivamente, de azul e rosa.

<h4 id="multiplicacao">Operador <<</h4>

O operador de deslocamento de *bits* para a esquerda `<<` representa a multiplicação na matemática. Seja o exemplo abaixo, o número `0011` foi representado por 4 *bits*, ou seja, sua resolução é de 4 *bits* e seu valor equivalente na base decimal é `3`.

<div class="code-scope">
	<span class="">8 4 2 1</span><br/>
	<span class="blue-content">0 0 1 1</span><br/>
</div>

O deslocamento de *bits* à esquerda multiplica o valor atual na base decimal daquele número pela sua base vezes a quantidade deslocada, ou seja 

<div class="code-scope">
(valor atual) * (base) * (quantidade deslocada) = (novo valor)
</div>

Vale lembrar que o símbolo `*` representa a multiplicação no mundo computacional. Logo, se efetuarmos a seguinte operação:

<div class="code-scope">
	8 4 2 1<br/>
	0 0 1 1&nbsp;&nbsp;<span class="red-content"><< 1</span><br/>
	=======<br/>
	<span class="blue-content">0 1 1 0</span>
</div>

O número atual na base `2` deslocado à esquerda de `1`, operação marcada em <span class="red-content">vermelho</span>, teve como resultado, em <span class="blue-content">azul</span>, o número `0110` equivalente a `6` na base que estamos acostumados. Isso já era de se esperar já que `3 * (base) * (quantidade deslocada) = 3 * (2) * (1) = 6`.

No sistema binário, basta deslocar os *bits* e esquecer a fórmula. Se deslocarmos duas vezes para a esquerda teriamos `1100` o que equivale a `12` na base decimal, basta verificar caso queira utilizar a fórmula.

É preciso tomar cuidado com esse operador, pois se o deslocamento for de muitos *bits* aconteceria o fenômeno de *overflow*, já que a resolução do número seria muito pequena para sua representação.

<h4 id="divisao">Operador >></h4>

O operador de deslocamento de *bits* para a direita `>>` representa a divisão na matemática. Partindo do mesmo exemplo anterior, porém começando de trás para frente, o número `0110`, que já sabemos que é `6` tem uma resolução de 4 *bits* e está com o segundo e terceiro *bit* ligados. Logo,

<div class="code-scope">
	<span class="">8 4 2 1</span><br/>
	<span class="blue-content">0 1 1 0</span><br/>
</div>

O deslocamento de *bits* à direita divide o valor atual daquele número pela sua base vezes a quantidade deslocada, ou seja 

<div class="code-scope">
(valor atual) / ((base) * (quantidade deslocada)) = (novo valor)
</div>

Os parênteses que englobam `(base)` e `(quantidade deslocada)` só reforça que a divisão é feita pelo produto desses dois valores. Enquanto que o símbolo `*` representa a multiplicação na linguagem de programação, o símbolo `/` representa a divisão. A partir daqui, efetuamos a seguinte operação

<div class="code-scope">
	8 4 2 1<br/>
	0 1 1 0&nbsp;&nbsp;<span class="red-content">>> 1</span><br/>
	=======<br/>
	<span class="blue-content">0 0 1 1</span>
</div>

O número atual na base `2` deslocado à direita de `1`, operação marcada em <span class="red-content">vermelho</span>, teve como resultado, em <span class="blue-content">azul</span>, o número `0011` equivalente a `3` na base que estamos acostumados. Isso já era de se esperar já que `6 / ((base) * (quantidade deslocada)) = 6 / ((2) * (1)) = 6 / 2 = 3`. É preciso tomar cuidado com esse operador, pois se o deslocamento for de muitos *bits* aconteceria o fenômeno de *underflow*, *bits* à direita que foram deslocados e se perderam. Os fenômenos de *underflow* e *overflow* são parecidos, mudando apenas a direção em que os *bits* se perdem.

<h3 id="hex">Existem outras bases?</h3>

Um número pode ser representando em qualquer base que imaginar desde que seja um número natural diferente de zero. Algumas que se destacam são a base 2, base 8, base 10 e base 16. A base hexadecimal - ou 16 - é uma das bases mais usadas em aplicações de alto nível pelo fato de facilitar a representação de números binários.

Como dito anteriormente, a base binária possui apenas dois algarismos distintos 0 e 1. A base decimal possui 10 números de 0 a 9. E a base 16? Além dos números que compõe a base 10, a base hexadecimal acrescentou as letras de A até F. A tabela a seguir mostra essas letras e suas equivalências na base decimal.

| Base hexadecimal | Base decimal |
|:----------------:|:------------:|
|         A        |      10      |
|         B        |      11      |
|         C        |      12      |
|         D        |      13      |
|         E        |      14      |
|         F        |      15      |

A princípio isso pode parecer bastante confuso, mas com um pouco de prática iremos ver que essa base é bastante útil. A base hexadecimal se relaciona com a base binária através de agrupamento de *bits*. Um único número na base 16 equivale a 4 *bits*. Tem-se

<div class="code-scope">
0001111110100111 = 0001 1111 1010 0111 = 1 F A 7 = 1FA7
</div>

Partindo de uma sequência de 16 *bits*, dividiu-se em grupos de 4 *bits*. Analisando cada grupo, `0001` representa `1` na base decimal e hexadecimal. O número `1111` equivale a `15` e consultando a tabela, `F` é a letra correspondente. Se continuarmos, `1010` é a letra `A` e por fim, `0111` é o número `7`. Com esse exemplo é possível ver que uma sequência um pouco mais extensa de *bits* pôde ser minimizada com a formação desses grupos e transformando a sequência para a base hexadecimal. Vale lembrar, que todas as operações explicadas anteriormente para a base binária são válidas, também, para a base hexadecimal.

Na prática, muitas dessas sequências são ainda maiores que 16 *bits*, portanto, a transformação de base é crucial para facilitar suas representações e manipulações.