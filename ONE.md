# O Sistema Binário

O nosso computador é uma máquina poderosa capaz de receber e realizar instruções das mais variadas maneiras. Utilizar o teclado para exibir caracteres em um editor de texto. Clicar em um ícone e abrir algum programa. O simples movimento do mouse reproduzido no ponteiro da tela. Esses são alguns dos exemplos que o computador precisa de "pensar" para responder de maneira correta. O mais incrível é que ele faz isso utilizando apenas números. Apenas zeros e uns.

O Sistema Binário nada mais é que um sistema numérico onde só existem dois algarismos: 0 e 1. O nosso sistema numérico convencional é o sistema decimal - ou de base 10 - onde existem 10 algarismos, os números de 0 a 9. Cada posição de algarismo tem um nome específico, sendo eles a unidade, dezena, centena e assim por diante. No mundo computacional, simplifica-se chamando essas posições de *bit*.

<h3 id="porque">Por que aprender binário?</h3>

Exemplos futuros irão envolver configuração de sensores e muitas dessas configurações trata-se de ligar e desligar *bits*. A leitura dos sensores são feitas em nível de bits e conversões são necessárias para facilitar a manipulação matemática, dentre outros desafios que precisa de um conhecimento prévio do sistema numérico que os computadores utilizam. Portanto, é importante começar com o pé direito e entender as pequenas coisas para construir grandes projetos.

<h3 id="formula">Fórmula dos números</h3>

Começando com um exemplo. O número dez na base decimal é o número 1010 (leia-se um, zero, um, zero) na base binária. Foi preciso 4 *bits* para sua representação, enquanto que na base que estamos acostumados apenas dois algarismos são utilizados. Por que tão diferentes?

```
10 = 1*10^1 + 0*10^0
```

A equação acima está matematicamente correta e apenas representamos o número de outra forma para chegarmos a uma fórmula genérica. A represetação da multiplicação no computador é dada pelo símbolo asterísco `*` enquanto que a representação da pontenciação é dado por `^`. De maneira genérica

```
(número)*(base)^(posição)
```

onde `número` é um dos algarismos que representa a `base` e `posição` representa onde ele está posicionado começando do zero e contando da direita para a esquerda. Representando o número 10 na base binária

<div class="code-scope">
	10 = <span class="red-content">1</span>*2^3 + <span class="red-content">0</span>*2^2 + <span class="red-content">1</span>*2^1 + <span class="red-content">0</span>*2^0 = <span class="red-content">1010</span> 
</div>

Como num passe de mágica, o número 10 foi convertido para a base binária resultando em 1010. Legal, porém não é funcional utilizar a fórmula insistentemente. Existe uma dica que é se acostumar a anotar todas as potências de 2 acima dos *bits*. Então,

<div class="code-scope">
	<span class="">
		8	4	2	1
	</span><br/>
	<span class="red-content">
		1	0	1	0
	</span><br/>
</div>

Intuitivamente conseguimos ver que 0 representa um *bit* "desligado" e 1 "ligado". Logo, 8 + 2 = 10 e chegamos ao resultado mais rápido. Além disso, é importante notar que os *bits* que possuem valores maiores, isto é, os mais significativos sempre ficam a esquerda e os menos significativos a direita. É por isso que o 1 está à direita, enquanto que o 8 está à esquerda. Para agilizar ainda mais a conversão e se habituar a fazer de cabeça, é interessante entender quantos *bits* são necessários para se representar um determinado número. Foram preciso 4 *bits* para representar o número 10, mas quantos *bits* seriam necessários para representar o número 1023 por exemplo? Se continuássemos a acrescentar *bits* a esquerda, teríamos

<div class="code-scope">
	<span class="">
		1024&nbsp;512&nbsp;256&nbsp;128&nbsp;64&nbsp;&nbsp;32&nbsp;&nbsp;16&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;&nbsp;4&nbsp;&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;1
	</span><br/>
	<span class="red-content">
		&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1
	</span><br/>
</div>

Um total de 10 *bits* para sua representação. Não existe uma fórmula tão direta e simples para calcular o número exato de *bits*, mas sabemos da matemática que `2^10 = 1024` logo, qualquer número na faixa de 0 a 1023 é possível representar rearranjando os 10 *bits* disponíveis.

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

<h4 id="deslocamento">Deslocamento</h4>


<h3 id="dicionario">Dicionário do capítulo</h3>

* `Bit`: o algarismo no sistema binário.
* `Byte`: o equivalente a 8 bits.