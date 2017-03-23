# O Sistema Binário

O nosso computador é uma máquina poderosa capaz de receber e realizar instruções das mais variadas maneiras. Utilizar o teclado para exibir caracteres em um editor de texto. Clicar em um ícone e abrir algum programa. O simples movimento do mouse reproduzido no ponteiro da tela. Esses são alguns dos exemplos que o computador precisa de "pensar" para responder de maneira correta. O mais incrível é que ele faz isso utilizando apenas números. Apenas zeros e uns.

O Sistema Binário nada mais é que um sistema numérico onde só existem dois algarismos: 0 e 1. O nosso sistema numérico convencional é o sistema decimal - ou de base 10 - onde existem 10 algarismos, os números de 0 a 9. Cada posição de algarismo tem um nome específico, sendo eles a unidade, dezena, centena e assim por diante. No mundo computacional, simplifica-se chamando essas posições de *bit*.

Vamos a um exemplo. O número dez na base decimal é o número 1010 (leia-se um, zero, um, zero) na base binária. Foi preciso 4 *bits* para sua representação, enquanto que na base que estamos acostumados apenas dois algarismos são utilizados. Por que tão diferentes?

<h3 id="porque">Por que aprender o sistema binário?</h3>

Exemplos futuros irão envolver configuração de sensores e muitas dessas configurações trata-se de ligar e desligar *bits*. A leitura dos sensores são feitas em nível de bits e conversões são necessárias para facilitar a manipulação matemática, dentre outros desafios que precisa de um conhecimento prévio do sistema numérico que os computadores utilizam. Portanto, é importante começar com o pé direito e entender as pequenas coisas para construir grandes projetos.

<h3 id="formula">Fórmula dos números</h3>

```
10 = 1*10^1 + 0*10^0
```

O número `10` pode ser separado da forma acima que matematicamente está tudo ok. A represetação da multiplicação no computador é dada pelo símbolo asterísco `*` enquanto que a representação da pontenciação é dado por `^`. De maneira genérica é possível escrever a mesma fórmula assim

```
(número)*(base)^(posição)
```

onde `número` é um dos algarismos que representa a `base` e `posição` representa onde ele está posicionado começando do zero e contando da direita para a esquerda. Representando o número 10 na base binária

<div class="code-scope">
	10 = <span class="high-number">1</span>*2^3 + <span class="high-number">0</span>*2^2 + <span class="high-number">1</span>*2^1 + <span class="high-number">0</span>*2^0 = <span class="high-number">1010</span> 
</div>

Como num passe de mágica, o número 10 foi convertido para a base binária resultando em 1010. Legal, porém não é funcional utilizar a fórmula insistentemente. Existe uma dica que é se acostumar a anotar todas as potências de 2 acima dos *bits*. Então,

<div class="code-scope">
	<span class="">
		8	4	2	1
	</span><br/>
	<span class="high-number">
		1	0	1	0
	</span><br/>
</div>

Intuitivamente conseguimos ver que 0 representa um *bit* "desligado" e 1 "ligado". Logo, 8 + 2 = 10 e chegamos ao resultado mais rápido. Além disso, é importante notar que os *bits* que possuem valores maiores, isto é, os mais significativos sempre ficam a esquerda e os menos significativos a direita. É por isso que o 1 está à direita, enquanto que o 8 está à esquerda. Para agilizar ainda mais a conversão e se habituar a fazer de cabeça, é interessante entender quantos *bits* são necessários para se representar um determinado número. Foram preciso 4 *bits* para representar o número 10, mas quantos *bits* seriam necessários para representar o número 1023 por exemplo? Se continuássemos a acrescentar *bits* a esquerda, teríamos

<div class="code-scope">
	<span class="">
		1024&nbsp;512&nbsp;256&nbsp;128&nbsp;64&nbsp;&nbsp;32&nbsp;&nbsp;16&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;&nbsp;4&nbsp;&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;1
	</span><br/>
	<span class="high-number">
		&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1
	</span><br/>
</div>

Um total de 10 *bits* para sua representação. Não existe uma fórmula tão direta e simples para calcular o número exato de *bits*, mas sabemos da matemática que `2^10 = 1024` logo, qualquer número na faixa de 0 a 1023 é possível representar rearranjando os 10 *bits* disponíveis.

<h3 id="operacoes">Operações com os *bits*</h3>

Todos sabemos que existem quatro operações básicas na matemática: soma `+`, subtração `-`, multiplicação `*` e divisão `/`. Dentre elas, a operação de soma é a mais comum no sistema binário. Além dela, os deslocamentos à direita e esquerda, operações lógicas de bit a bit como AND, OR, XOR e NOT são bem comuns.

<h4 id="bitabit">Bit a bit</h4>


<h4 id="deslocamento">Deslocamento</h4>


<h3 id="dicionario">Dicionário do capítulo</h3>

* `Bit`: o algarismo no sistema binário.
* `Byte`: o equivalente a 8 bits.
* `^`: símbolo matemático que representa a potenciação.
* `*`: símbolo matemático que representa a multiplicação.
* `/`: símbolo matemático que representa a divisão.
* `+`: símbolo matemático que representa a soma.
* `-`: símbolo matemático que representa a subtração.