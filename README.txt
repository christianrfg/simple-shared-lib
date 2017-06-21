====================================================================================

	--INTRUÇÕES DE UTILIZAÇÃO DAS BIBLIOTECAS--
	
	*Opção 1:
		- Utilizar o comando sudo make no terminal do Linux e inserir a
	senha, assim a lib já será movida para a pasta /usr/lib.


	*Opção 2:
		- Utilizar o comando make no terminal do Linux para gerar a
	biblioteca compartilhada (.so).
		- Para utilizar a biblioteca desejada basta copiar ou mover o arquivo
	para a pasta de bibliotecas especificas do computador ou adicionar o local
	desejado à várivel LD_LIBRARY_PATH.
	
	1) Para copiar para pasta de bibliotecas do Linux usar o comando:
		sudo cp libfuncoes.so /usr/lib

	2) Para adicionar o local desejado deve-se fazer:
		i) echo $LD_LIBRARY_PATH
		ii) Se nada aparecer faça: LD_LIBRARY_PATH = /usr/local/lib
		iii) Adicionando o novo diretorio: LD_LIBRARY_PATH =
	$LD_LIBRARY_PATH:/diretorio/desejado/
		iv) export LD_LIBRARY_PATH
	
	
	Opcional:
		- Utilizar o comando make clean para remover os arquivos .o e .d
====================================================================================

	--BIBLIOTECA COMPARTILHADA--
	
	1) libfuncoes.so

	=> A biblioteca possui as seguintes funções:
		
	i) A função numeroPrimo(int n) imprime se o n é um número primo ou não.
	   Um número é primo se ele é divisivel somente por ele mesmo e por 1.

	ii) A função fibonacci(unsigned long int n) imprime os n primeiros números
da sequencia de fibonacci.
	    É uma sucessão de números que, misteriosamente, aparece em muitos fenômenos
da natureza. Descrita no final do século 12 pelo italiano Leonardo Fibonacci, ela é
infinita e começa com 0 e 1. Os números seguintes 
	
	iii) A função maxDivComum(int n1, int n2) imprime o maior divisor comum entre os
números n1 e n2.
	     O maior divisor comum de dois ou mais números é chamado de máximo divisor
comum desses números.
	
	iv) A função palindromo(char str[]) verifica se uma palavra str é um palindromo
e imprime esse resultado.
	    Palíndromos são palavras ou frases que podem ser lidas da esquerda para a
direita ou da  direita para a esquerda. Podemos dizer que o palíndromo, comparado à
frase comum, é como um bilhete de ida-e-volta. "Ana", por exemplo, é um nome palindrômico.

====================================================================================

	--EXEMPLO DE USO--

	O arquivo program.c apresenta um exemplo simples do uso de cada lib
disponibilizada (sendo que as libs estão no caminho default de libs do ubuntu 16.04).
	- Utilizar o comando:
		gcc -o program program.c -L. -lfuncoes
	Para criar o executavel do programa e assim execula-lo usando o comando:
		./program
	- Opcional:
		Executar o programa que já esta compilado no diretorio, somente
	usar o comando:
		./program

====================================================================================
