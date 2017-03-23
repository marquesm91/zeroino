# O Sistema Binário

O nosso computador é uma máquina poderosa capaz de receber e realizar instruções das mais variadas maneiras. Utilizar o teclado para exibir caracteres em um editor de texto. Clicar em um ícone e abrir algum programa. O simples movimento do mouse no ponteiro da tela. Esses são alguns dos exemplos que o computador precisa de "pensar" para responder de maneira correta. O mais incrível que ele só faz isso utilizando números. Apenas zeros e uns.

O Sistema Binário nada mais é que um sistema numérico onde só existem dois algarismos: 0 e 1. O nosso sistema numérico convencional é o sistema decimal - ou de base 10 - onde existem 10 algarismos, os números de 0 a 9.

No nosso sistema convencional cada posição de algarismo tem um nome específico, são eles a unidade, dezena, centena e assim por diante. No mundo computacional, simplifica-se chamando essas posições de **bit**. Para clarear melhor as coisas, vamos ao primeiro exemplo.

O número dez na base decimal é o número 1010 (leia-se um, zero, um, zero) na base binária. Foi preciso 4 bits para sua representação, enquanto que na base que estamos acostumados apenas dois algarismos. Por que tão diferentes?

```
10 = 1*10^1 + 0*10^0
```

O número 10 pode ser separado da forma acima que matematicamente está tudo ok. A represetação da multiplicação no computador é dada pelo símbolo asterísco `*` enquanto que a representação da pontenciação é dado por `^`. De maneira genérica é possível escrever a mesma fórmula assim

```
(número)*(base)^(posição)
```

onde `número` é um dos algarismos que representa a `base` e `posição` representa onde ele está posicionado começando do zero e contando da direita para a esquerda. Representando o número 10 na base binária

<div class="code-scope">
	10 = <span class="high-number">1</span>*2^3 + <span class="high-number">0</span>*2^2 + <span class="high-number">1</span>*2^1 + <span class="high-number">0</span>*2^0 = <span class="high-number">1010</span> 
</div>

Como num passe de mágica, o número 10 foi convertido para a base binária resultando em 1010. Legal, porém não é funcional utilizar a fórmula insistentemente. Existe uma dica que é se acostumar a anotar todas as potências de 2 acima dos bits. Então,

<div class="code-scope">
	<span class="">
		8	4	2	1
	</span><br/>
	<span class="high-number">
		1	0	1	0
	</span><br/>
</div>

Intuitivamente conseguimos ver que 0 representa um bit "desligado" e 1 "ligado. Logo, 8 + 2 = 10 e chegamos ao resultado mais rápido. Além disso, é importante notar que os bits que possuem valores maiores, isto é, os mais significativos sempre ficam a esquerda e os menos significativos a direita. É por isso que o 0 está à direita, enquanto que o 8 está à esquerda. Para agilizar ainda mais a conversão e se habituar a fazer de cabeça, é interessante entender quantos bits são necessários para se representar um determinado número. Foram preciso 4 bits para representar o número 10, mas quantos bits seriam necessários para representar o número 1023 por exemplo? Se continuássemos a acrescentar bits a esquerda, teriamos

<div class="code-scope">
	<span class="">
		1024&nbsp;512&nbsp;256&nbsp;128&nbsp;64&nbsp;&nbsp;32&nbsp;&nbsp;16&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;&nbsp;4&nbsp;&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;1
	</span><br/>
	<span class="high-number">
		&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;1
	</span><br/>
</div>

Um total de 10 bits para sua representação. Não existe uma fórmula tão direta e simples para calcular o número exato de bits, mas sabemos da matemática que `2^10 = 1024` logo, qualquer número na faixa de 0 a 1023 é possível representar rearranjando os 10 bits disponíveis.

Por que é importante aprender o sistema binário para entender esse livro? Exemplos futuros onde irão envolver sensores e 


só consegue "pensar" de uma maneira lógica e direta baseado em apenas dois números: 0 e 1.

Cras blandit massa ut lorem lobortis, vitae congue mi viverra. Duis id facilisis justo. Vestibulum non augue ac sem euismod fringilla. Nunc eu leo eros. Praesent porttitor dapibus turpis vitae luctus. Aenean tincidunt volutpat nulla, non eleifend turpis dictum non. Quisque laoreet erat ligula, vel pharetra nibh aliquet et. Mauris at maximus erat. Pellentesque quis pellentesque erat.

[include](codes/ex1-1.cpp)

<div style="text-align:center"><img src="http://i.imgur.com/iMGU1xx.png"  width="400" alt="Binary cloud"></div>

Quisque condimentum imperdiet facilisis. Donec vel semper justo. Morbi ornare, dui sed consectetur pulvinar, ante sem volutpat neque, ut euismod nunc velit et tellus. Pellentesque sed aliquet ante, sed convallis mauris. Ut iaculis vehicula lacus, et vehicula odio. Nullam eros tellus, venenatis quis tincidunt a, finibus sit amet felis. Suspendisse fringilla mi felis, in dictum ante consectetur in. Proin suscipit elit a nibh ultrices, feugiat hendrerit sem condimentum. Sed justo libero, luctus a hendrerit eget, finibus at sem.

Pellentesque pulvinar dapibus condimentum. Suspendisse ac elit non purus varius laoreet ac ac odio. Vestibulum nisl nisi, finibus vel metus placerat, volutpat congue justo. Proin sed vulputate ligula. Integer posuere urna eu enim vehicula, vel condimentum dui fringilla. Aenean ac enim lectus. Duis semper ullamcorper urna. Sed vel fermentum nibh. Cras congue id arcu eget laoreet. Pellentesque efficitur nisi eget nisl ornare, vel fermentum dolor pretium. Fusce mattis, eros non vehicula pellentesque, ligula turpis euismod arcu, sit amet bibendum odio magna ac est. Duis nec arcu vehicula est tincidunt aliquet non id nisi. Pellentesque quis dui et libero tincidunt sodales in at ipsum.

Nulla iaculis augue sed quam ornare tristique. Praesent tempor nulla sit amet sapien consequat lobortis. Sed id nisl non nulla venenatis dictum at a dolor. Suspendisse semper justo sapien, nec euismod tortor consectetur a. Mauris in dui ac orci porttitor sollicitudin. Donec efficitur tempor turpis, faucibus porta leo fringilla in. Cras vel venenatis elit. Morbi porta consectetur sagittis. Morbi semper, metus ut aliquam interdum, sem elit finibus nunc, vitae lacinia orci lacus vitae urna. Proin faucibus risus sit amet dolor dictum, a aliquam diam bibendum.