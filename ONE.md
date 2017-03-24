# O Sistema Binário

O nosso computador é uma máquina poderosa capaz de receber e realizar instruções das mais variadas maneiras. Utilizar o teclado para exibir caracteres em um editor de texto. Clicar em um ícone e abrir algum programa. O simples movimento do mouse reproduzido no ponteiro da tela. Esses são alguns dos exemplos que o computador precisa de "pensar" para responder de maneira correta. O mais incrível é que ele faz isso utilizando apenas números. Apenas zeros e uns.

O Sistema Binário nada mais é que um sistema numérico onde só existem dois algarismos: 0 e 1. O nosso sistema numérico convencional é o sistema decimal - ou de base 10 - onde existem 10 algarismos, os números de 0 a 9. Cada posição de algarismo tem um nome específico, sendo eles a unidade, dezena, centena e assim por diante. No mundo computacional, simplifica-se chamando essas posições de *bit*.

<h3 id="porque">Por que aprender binário?</h3>

Exemplos futuros irão envolver configuração de sensores e muitas dessas configurações trata-se de ligar e desligar *bits*. A leitura dos sensores são feitas em nível de bits e conversões são necessárias para facilitar a manipulação matemática, dentre outros desafios que precisam de um conhecimento prévio do sistema numérico que os computadores utilizam. Portanto, é importante começar com o pé direito e entender as pequenas coisas para construir grandes projetos.

<h3 id="formula">Fórmula dos números</h3>

O número `13` na base decimal é o número `1101` (leia-se um, um, zero, um) na base binária. Foi preciso 4 *bits* para sua representação, enquanto que na base que estamos acostumados apenas dois algarismos são utilizados. Por que tão diferentes?

```
13 = 1*10^1 + 3*10^0
```

A equação acima está matematicamente correta e apenas representamos o número explicitando a base.

A represetação da multiplicação no computador é dada pelo símbolo asterísco `*` enquanto que a representação da pontenciação é dado por `^`. De maneira genérica, existe uma forma de converter qualquer número em uma determinada base para a base decimal.

```
(algarismo)*(base)^(posição)
```

onde `algarismo` é um dos algarismos que representa a `base`, isto é, para a base decimal será algum número entre 0 e 9 e para a base binária será 0 ou 1. A `posição` representa onde ele está posicionado começando do zero e contando da direita para a esquerda. O número `0111` é representado por quem na base decimal? Simples, usando a fórmula

<div class="code-scope">
	<span class="red-content">0111</span> = <span class="red-content">0</span>*2^3 + <span class="red-content">1</span>*2^2 + <span class="red-content">1</span>*2^1 + <span class="red-content">1</span>*2^0 = 7
</div>

Então, esse é o número `7`. Utilizando a mesma fórmula é possível verificar que o número `1101` é, de fato, o número `13`. Apesar de simples não é funcional utilizar a fórmula insistentemente. Existe uma dica que é se acostumar a anotar todas as potências de 2 acima dos *bits*. O primeiro bit - ou bit 0 - é `2^0 = 1`, o segundo bit é `2^1 = 2`, o terceiro `2^2 = 4` e assim por diante.

<div class="code-scope">
	<span class="">
		8	4	2	1
	</span><br/>
	<span class="red-content">
		1	0	1	0
	</span><br/>
</div>

Intuitivamente conseguimos ver que 0 representa um *bit* "desligado" e 1 "ligado". Logo, 8 + 2 = 10 e chegamos ao resultado mais rápido. Além disso, é importante notar que os *bits* que possuem valores maiores, isto é, os mais significativos sempre ficam a esquerda e os menos significativos a direita. É por isso que o 1 está à direita, enquanto que o 8 está à esquerda. Para agilizar ainda mais a conversão e se habituar a fazer de cabeça, é interessante entender quantos *bits* são necessários para se representar um determinado número. 

A título de curiosidade, vamos converter os 10 algarismos iniciais da base 10 para a base binária utilizando 4 bits.


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

Até o número `7` era possível utilizar apenas 3 bits para sua representação. Enquanto que a partir do número `8`, 4 bits são necessários. Quantos *bits* seriam necessários para representar o número 1023 por exemplo? Se continuássemos a acrescentar *bits* a esquerda, teríamos

<div class="code-scope">
	<span class="">
		1024&nbsp;512&nbsp;256&nbsp;128&nbsp;64&nbsp;&nbsp;32&nbsp;&nbsp;16&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;&nbsp;4&nbsp;&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;1
	</span><br/>
	<span class="red-content">
		&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1
	</span><br/>
</div>

Um total de 10 *bits* para sua representação (não é preciso contar zeros que estão à esquerda). Não existe uma fórmula tão direta e simples para calcular o número exato de *bits*, mas sabemos da matemática que `2^10 = 1024` logo, qualquer número na faixa de 0 a 1023 é possível representar rearranjando os 10 *bits* disponíveis.

<h3 id="operacoes">Operações com os bits</h3>

Todos sabemos que existem quatro operações básicas na matemática: soma `+`, subtração `-`, multiplicação `*` e divisão `/`. Dentre elas, a operação de soma e as operações lógicas como AND, OR, XOR e NOT são classificadas como operações bitwise ou bit a bit. Além delas, os deslocamentos à direita e esquerda são fortemente utilizados e classificados como operações de deslocamentos. Esses, que caracterizam a multiplicação e a divisão no mundo da computação.

<h4 id="adicao">Operador +</h4>

Soma dois números na base 10 é bem simples e muitas das vezes não é preciso colocar no papel. Já no sistema binário, por envolver mais algarismos (bits é melhor aqui), não é tão fácil sem um pouco de prática. Vamos analisar o exemplo a seguir e fazer uma pequena modificação dele para notar um fenômeno não muito comum de acontecer, mas por um descuido pode ser péssimo para o seu projeto.

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

A segunda soma já temos o fenômeno do "vai um" na matemática, logo `1 + 1 = 10`. Um pouco estranho, mas não podemos esquecer que estamos na base binária agora. Traduzindo `10` para a base decimal e lembrando que o bit 1 - ou segundo bit - equivale a `2^1 = 2` temos que o número `10` na base binária é o número 2 na base decimal. Daí temos que,

<div class="code-scope">
		&nbsp;&nbsp;&nbsp;&nbsp;1<br/>
		&nbsp;&nbsp;0 0	<span class="red-content">1</span> <span class="blue-content">1</span><br/>
		+&nbsp;1 0 <span class="red-content">1</span> <span class="blue-content">0</span><br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;1 1 0 1
</div>

A terceira e a quarta soma são idênticas a primeira, logo temos que o número final é `1 1 0 1`. Fica como desafio, converter os três números para a base decimal e verificar se a soma está correta. Após a apresentação da operação de soma na base binária não é difícil perceber que é bem direta e simples, mas existe um pequeno problema que muitos projetistas acabam pecando. Vamos analisar a soma de dois números novamente, agora o primeiro sendo `0 1 1 1`. A primeira e a segunda soma continuarão sendo idênticas, porém a terceira e a quarta deixaram de ser `1 + 0` e passaram a ser `1 + 1`. Se continuarmos as operações chegamos ao seguinte resultado.

<div class="code-scope">
		1 <span class="red-content">1</span> <span class="red-content">1</span><br/>
		&nbsp;&nbsp;0 <span class="red-content">1</span>	<span class="red-content">1</span> <span class="blue-content">1</span><br/>
		+&nbsp;<span class="red-content">1</span> 0 <span class="red-content">1</span> <span class="blue-content">0</span><br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;0 0 0 1
</div>

Aquele último `1` a esquerda foi perdido, pois não existe bits disponíveis para representá-lo. Esse fenômeno de perda chama-se *overflow*. O que aconteceu ali? Com 4 bits, o número máximo que conseguimos represetar é o número `15` e o seu equivalente na base binária é `1 1 1 1`. Intuitivamente, o número que não consegue ser representado deve ser superior a `15` e de fato é. `1 0 0 0 1` na base decimal é o `17` e para que ele exista, sua resolução mínima é de 5 bits.

<h4 id="not">Operador ~</h4>

O operador lógico NOT `~` é a operação mais básica no sistema binário e representação a inversão. Além disso, esse operador é aplicado diretamente em um número binário não necessitando de dois números se relacionarem. Para ilustrar como os bits são afetados por esse operador é importante apresentar a tabela verdade. Seja um número A representado na base binária e de apenas 1 bit, tem-se

| A | ~A |
|:-:|:--:|
| 0 |  1 |
| 1 |  0 |

Se adotarmos que `0` representa falso e `1` verdadeiro, a tabela verdade mostra que o resultado é apenas a contradição do outro, ou seja, se verdadeiro é faso e quando falso é verdadeiro. Com um exemplo mais prático, podemos aplicar a tabela verdade bit a bit e encontrar o resultado da operação.

<div class="code-scope">
		~&nbsp;1 0	1 1<br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;0 1 0 0
</div>

Esse tipo de operação traz exclusividade quando queremos identificar as posições dos números 0 ou 1. Nesse caso, podemos ver que o único bit representado por `0` está na terceira posição (da direita para a esquerda).

<h4 id="and">Operador &</h4>

O operador lógico AND `&` é similar a operação de interseção na matemática. Para ilustrar como os bits são afetados por esse operador é importante apresentar a tabela verdade. Seja dois números A e B representados na base binária e de apenas 1 bit, tem-se

| A | B | A & B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 0 | 1 |   0   |
| 1 | 0 |   0   |
| 1 | 1 |   1   |

Se adotarmos que `0` representa falso e `1` verdadeiro, a tabela verdade mostra que o resultado é apenas verdadeiro se, e somente se, os dois são verdadeiros. Com um exemplo mais prático, podemos aplicar a tabela verdade bit a bit e encontrar o resultado da operação.

<div class="code-scope">
		&nbsp;&nbsp;1 0	1 1<br/>
		&&nbsp;1 0 1 0<br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;<span class="blue-content">1</span> 0 <span class="blue-content">1</span> 0
</div>

É fácil perceber que apenas a primeira e terceira operação equivale a `1`. Esse tipo de operação traz exclusividade quando queremos identificar em um número com muitos bits aquelas posições onde em ambos os números existem os bits iguais a 1.

<h4 id="or">Operador |</h4>

O operador lógico OR `|` é similar a operação de união na matemática. Para ilustrar como os bits são afetados por esse operador é importante apresentar a tabela verdade. Seja dois números A e B representados na base binária e de apenas 1 bit, tem-se

| A | B | A &#124; B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 0 | 1 |   1   |
| 1 | 0 |   1   |
| 1 | 1 |   1   |

Se adotarmos que `0` representa falso e `1` verdadeiro, a tabela verdade mostra que o resultado é apenas verdadeiro quando um ou ambos são verdadeiros. Com um exemplo mais prático, podemos aplicar a tabela verdade bit a bit e encontrar o resultado da operação.

<div class="code-scope">
		&nbsp;&nbsp;1 0	1 1<br/>
		|&nbsp;1 0 1 0<br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;<span class="blue-content">1</span> 0 <span class="blue-content">1</span> <span class="blue-content">1</span>
</div>

Utilizando o mesmo exemplo do operador lógico AND obtivemos um resultado diferente. Apenas o terceiro bit (da direita para a esquerda, sempre!) permaneceu 0. Isso mostra que o operador `|` é bastante utilizado para identificar quais as posições dos bits que em ambos os números estão demarcados por `0`.

<h4 id="xor">Operador ^</h4>

O operador lógico XOR `^` é similar a operação de união exclusiva na matemática. Para ilustrar como os bits são afetados por esse operador é importante apresentar a tabela verdade. Seja dois números A e B representados na base binária e de apenas 1 bit, tem-se

| A | B | A ^ B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 0 | 1 |   1   |
| 1 | 0 |   1   |
| 1 | 1 |   0   |

Se adotarmos que `0` representa falso e `1` verdadeiro, a tabela verdade mostra que o resultado é apenas verdadeiro se, e somente se, apenas um deles é verdadeiro. Com um exemplo mais prático, podemos aplicar a tabela verdade bit a bit e encontrar o resultado da operação.

<div class="code-scope">
		&nbsp;&nbsp;1 0	1 1<br/>
		^&nbsp;1 0 1 0<br/>
		&nbsp;&nbsp;=======<br/>
		&nbsp;&nbsp;0 0 0 <span class="blue-content">1</span>
</div>

Utilizando o mesmo exemplo do operador lógico AND obtivemos um resultado diferente. Apenas o primeiro bit equivale a `1`. Isso mostra que o operador `^` é bastante utilizado para identificar quais as posições dos bits que são exclusivas, ou seja, bit equivalente a `1` em apenas um dos números. 

A imagem abaixo ajuda a identificar, visualmente, os três operadores explicados anteriormente.

<img src="http://i.imgur.com/Q2Y7Js6.png" alt="Conjuntos" class="img-center">

A interseção (AND) dos conjuntos A e B representa a região 2 colorida de roxa. A união (OR) dos conjuntos A e B representa a região 1 colorida de azul somada com a região 2 colorida de roxa. Por fim, a operação de exclusivdade (XOR) entre os conjuntos A e B são as regiões 1 e 3 isoladas, coloridas, respectivamente, de azul e rosa.

<h4 id="multiplicacao">Operador <<</h4>

O operador de deslocamento de bits para a esquerda `<<` representa a multiplicação na matemática. Seja o exemplo abaixo, o número `0 0 1 1` foi representado por 4 bits, ou seja, sua resolução é de 4 bits e seu valor equivalente na base decimal é `3`.

<div class="code-scope">
	<span class="">8 4 2 1</span><br/>
	<span class="blue-content">0 0 1 1</span><br/>
</div>

O deslocamento de bits à esquerda multiplica o valor atual daquele número pela sua base vezes a quantidade deslocada, ou seja 

```
(valor atual) * (base) * (quantidade deslocada) = (novo valor)
```

Vale lembrar que o símbolo `*` representa a multiplicação no mundo computacional. Logo, se efetuarmos a seguinte operação:

<div class="code-scope">
	8 4 2 1<br/>
	0 0 1 1&nbsp;&nbsp;<span class="red-content"><< 1</span><br/>
	=======<br/>
	<span class="blue-content">0 1 1 0</span>
</div>

O número atual na base `2` deslocado à esquerda de `1`, operação marcada em <span class="red-content">vermelho</span>, teve como resultado, em <span class="blue-content">azul</span>, o número `0 1 1 0` equivalente a `6` na base que estamos acostumados. Isso já era de se esperar já que `3 * (base) * (quantidade deslocada) = 3 * (2) * (1) = 6`. É preciso tomar cuidado com esse operador, pois se o deslocamento for de muitos bits aconteceria o fenômeno de *overflow*, já que a resolução do número (4 bits) seria muito pequena para sua representação.

<h4 id="divisao">Operador >></h4>

O operador de deslocamento de bits para a direita `>>` representa a divisão na matemática. Partindo do mesmo exemplo anterior so que começando de trás para frente, o número `0 1 1 0`, que já sabemos que é `6` tem uma resolução de 4 bits e está com o segundo e terceiro bit ligados. Logo,

<div class="code-scope">
	<span class="">8 4 2 1</span><br/>
	<span class="blue-content">0 1 1 0</span><br/>
</div>

O deslocamento de bits à direita divide o valor atual daquele número pela sua base vezes a quantidade deslocada, ou seja 

```
(valor atual) / ((base) * (quantidade deslocada)) = (novo valor)
```

Os parênteses que englobam `(base)` e `(quantidade deslocada)` só reforça que a divisão é feita pelo produto desses dois valores. Além disso, enquanto que o símbolo `*` representa a multiplicação na linguagem de programação, o símbolo `/` representa a divisão. A partir daqui, efetuamos a seguinte operação

<div class="code-scope">
	8 4 2 1<br/>
	0 1 1 0&nbsp;&nbsp;<span class="red-content">>> 1</span><br/>
	=======<br/>
	<span class="blue-content">0 0 1 1</span>
</div>

O número atual na base `2` deslocado à direita de `1`, operação marcada em <span class="red-content">vermelho</span>, teve como resultado, em <span class="blue-content">azul</span>, o número `0 0 1 1` equivalente a `3` na base que estamos acostumados. Isso já era de se esperar já que `6 / ((base) * (quantidade deslocada)) = 6 / ((2) * (1)) = 6 / 2 = 3`. É preciso tomar cuidado com esse operador, pois se o deslocamento for de muitos bits aconteceria o fenômeno de *underflow*, bits à direita que foram deslocados e se perderam. Os fenômenos de *underflow* e *overflow* são parecidos, mudando apenas a direção em que os bits se perdem.

<h3 id="dicionario">Dicionário do capítulo</h3>

* `Bit`: algarismo no sistema binário.
* `Byte`: equivalente a 8 bits.