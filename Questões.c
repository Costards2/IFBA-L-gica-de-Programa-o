  /*1. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu
perímetro*/
int main()
{
    int base, altura, resultado, perimetro, area;
    
    printf("Digite sua altura:\n ");
    scanf("%i", &altura);
    
    printf("Digite sua base:\n ");
    scanf("%i", &base);
            
    perimetro = 2 * base + 2 * altura;
    printf("Seu perimetro é: %i \n", perimetro);
    
    area = base * altura;
    printf("Sua área é: %i \n", area);
            
}

/*2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo*/
int main()
{
    float lado;
    float area;
    float perimetro;
    
    printf("Insira o tamanho do lado do seu quadrado:\n");
    scanf("%f", &lado);
    
    area = lado * lado;
    perimetro = lado * 4;
    
    printf("A área cauculada do quadrado é de %.2f\n", area);
    printf("O perimetro cauculado do quadrado é de %.2f\n", perimetro);
}

/*3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.*/
int main()
{

  float raio, perimetro, area;
  printf("Digite o raio da sua circunferencia: \n");
  scanf("%f", &raio);

  perimetro = 3.14 * raio;
  printf(" Seu perimetro é %.2f : \n", perimetro );

  area = 3.14 * (raio * raio);
  printf("Sua area é %.2f : \n", area);
}

/*4. Dado os três lados de um triângulo determinar o perímetro do mesmo.*/
int main()
{

  float lado1, lado2, lado3;

  printf("Digite os trés valores dos lados do seu triângulo : \n");
  scanf("%f %f %f", &lado1, &lado2, &lado3);

  float perimetro = lado3 + lado2 + lado1;
  printf("Seu perimetro é %.2f : \n", perimetro);
}

/*5. Ler um número inteiro e exibir o seu sucessor*/
int main()
{

  int numero, sucessor;

  printf("Digite seu número: \n ");
  scanf("%i", &numero);

  sucessor = numero + 1 ;
  printf( "O sucessor do seu numero é: %i", sucessor);

}

/*6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.*/
int main()
{
   int numero1, numero2;

   printf("Digite os seus números em ordem do qual será dividido e o seu divisor:\n");
   scanf("%i %i", &numero1, &numero2);
    
   int quociente = numero1 / numero2;
   int resto = numero1 % numero2;
    
    printf("Seu quociente será: %i \nSeu resto será: %i", quociente, resto);
}

/*7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.*/
int main()
{
   int idade, dia, mes, ano;
   
   printf("Digite sua idade em dias:");
   scanf("%i", &dia);

   ano = dia / 365;
   mes = dia /30;

   printf("Sua idade em dias é : %i\nSua idade meses é : %i\nSua Idade em anos é : %i", dia, mes, ano);
   
}

/*8. Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um 
valor de temperatura em Fahrenheit e exibi-lo em Celsius*/
int main()
{

   float grausFahrenheit;
   float grausCelcius;
   
   printf("Informe a temperatura em Fahrenheit :\n");
   scanf("%f", &grausFahrenheit);
    
   grausCelcius = (grausFahrenheit - 32)*5/9;
    
   printf("A temperatura transformada em Celcius é de: %.2f\n" , grausCelcius);
    
}

/*9. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado 
seu raio e sua altura*/
 int main()
{
    int altura, raio, volume;
    
    printf("Digite o valor da altura da lata: ");
    scanf("%i", &altura);
    
    printf("Agora digite o raio da lata: ");
    scanf("%i", &raio);
    
    volume = 3.14 * (raio * raio) * altura;
    
    printf("O volume da lata é: %i", volume);
}

/*10. Converter um inteiro informado menor que 32 para sua representação em binário/
 int inteiro;
   {
   int binario;
   int bin1, bin2, bin3, bin4, bin5, bin6;
   int divisao = 0;
   
   printf("Digite o número inteiro que você quer transformar em binário: \n");
   scanf("%d", &inteiro);
   
   bin6 = inteiro%2;
   bin5 = (inteiro/2)%2;
   bin4 = ((inteiro/2)/2)%2;
   bin3 = (((inteiro/2)/2)/2)%2;
   bin2 = ((((inteiro/2)/2)/2)/2)%2;
   bin1 = (((((inteiro/2)/2)/2)/2)/2)%2;
   
   binario = bin1*100000 + bin2*10000 + bin3*1000 + bin4*100 + bin5*10 + bin6;
   
   printf("O numero digitado em binário é %d", binario);
   }
   
   /*11. Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida 
pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 
2 notas de provas. */
int main()
{
   float prova1, prova2, prova3, prova4, bimestre1, bimestre2, semestre;
   
    printf("Digite a nota das provas do primeiro bimestre: ");
    scanf("%f %f", &prova1, &prova2);
   
    printf("Digite a nota das provas do segundo bimestre; ");
    scanf("%f %f", &prova3, &prova4); 
    
    bimestre1 = (prova1+prova2)/2;
    bimestre2 = (prova1+prova2)/2;
    
    semestre = (bimestre1 + bimestre2) / 2;
    
    printf("Sua média é: %.2f", semestre);
}

/*12. Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para 
Km/h. Para tal, multiplique o valor em m/s por 3,6*/
int main()
{
    float velocidademetros, velocidadekilometros;
    
    printf("Digite o valor em m/s : ");
    scanf("%f", &velocidademetros);
    
    velocidadekilometros = velocidademetros * 3.6;
    
    printf("A velocidade em km/h é: %.2f", velocidadekilometros);
}

/*13. Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em 
sequência de uma resistência R3. Faça um algoritmo para calcular a resistência 
equivalente desse circuito. */
int main()
{
    float resistencia1, resistencia2, resistencia3, resistenciaequivalente;
    
    printf("Digite os valores das resistencias: ");
    scanf("%f %f %f", &resistencia1, &resistencia2, &resistencia3);
    
    resistenciaequivalente = (1/resistencia1 + 1/resistencia2) + resistencia3;
    
    printf("A resitencia equivalente é: %.2f", resistenciaequivalente);
}
/*14. Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre 
(fica verde), os veículos que nele estavam parados tendem a encontrar os próximos 
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam 
abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre 
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade 
permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para 
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir 
um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um 
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes 
informações: 
a. a distância desde o semáforo anterior
b. a velocidade permitida da via
c. a aceleração típica dos carros*/

/*15. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é 
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no 
chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e 
calcular a altura do prédio.*/
{
   float alturaPredio, minhaAltura;
   float sombraPredio, minhaSombra;

   printf("Digite o valor da sua altura: \n");
   scanf("%f" , &minhaAltura);
   
   printf("Digite o valor da sua sombra: \n");
   scanf("%f" , &minhaSombra);
   
   printf("Digite o valor da sombra do prédio: \n");
   scanf("%f" , &sombraPredio);
   
    alturaPredio = (sombraPredio/minhaSombra) * minhaAltura;
   
   printf("A altura do prédio é de: %.2f \n", alturaPredio);
   }
   
   /*16. Escreva um programa para gerar o invertido de um número com três algarismos 
(exemplo: o invertido de 498 é 894).*/
int main()
{
    int numero, unidade, dezena, centena;
    
    printf("Digite seu número de três algarismos: ");
    scanf("%i", &numero);
    
    unidade = numero/100;
    dezena = (numero%100)/10;
    centena= (numero%100)%10;
    
    printf("Seu número invertido é: %i%i%i", centena, dezena, unidade);
}

/*17. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum 
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado 
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" 
no sentido de que as notas de menor valor fossem distribuídas em número mínimo 
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar 
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir 
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).*/
int main()
{
    int valorinteiro, nota1, nota2, nota5, nota10, nota20, nota50, nota100;
    
    printf("Digite seu valor inteiro: ");
    scanf("%i", &valorinteiro);
    
    nota100 = valorinteiro/100;
    nota50 = (valorinteiro%100)/50;
    nota20 = ((valorinteiro%100)%50)/20;
    nota10 = (((valorinteiro%100)%50)%20)/10;
    nota5 = ((((valorinteiro%100)%50)%20)%10)/5;
    nota2 = (((((valorinteiro%100)%50)%20)%10)%5)/2;
    nota1 = ((((((valorinteiro%100)%50)%20)%10)%5)%2)/1;
    
    printf("O número de notas será de:\n %i notas de 100;\n %i notas de 50;\n %i notas de 20;\n %i notas de 10;\n %i notas de 5;\n %i notas de 2;\n %i notas de 1.", nota100, nota50, nota20, nota10, nota5, nota2, nota1);
}
/*18. Escreva um programa que permute o valor de duas variáveis inteiras*/
int main()
{
  int soma, var1, var2;
  
  printf("Digite o valor de duas variáveis inteiras respectivamente: ");
  scanf("%i %i", &var1, &var2);
  
  soma = var1 + var2;
  var1 = soma - var2;
  var2 = soma - var1;
  
  printf("O valor da primeira variavel agora é: %i \n", var1);
  printf("O valor da segunda variavel agora é: %i \n", var2);
 }
 
 /*19. Escreva um programa que calcule a raiz de uma equação do primeiro grau.*/
 
 /*20. Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada 
maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores 
possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas 
prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de 
R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que 
receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de 
acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é 
que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações.*/

/* Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). 
Escreva um programa que leia as notas destes exames e imprima a classificação do 
aluno, sabendo que a média é 70.
Classificação: 
A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V; 
C – passou em I e II, III ou IV, 
mas não em V. 
Reprovado – outras situações. */
int main() {
int exameI, exameII, exameIII, exameIV, exameV;
printf("Digite a media dos exames I, II, III, IV e V: \n");
scanf("%d%d%d%d%d", &exameI, &exameII, &exameIII, &exameIV, &exameV);
if (exameI >= 70 && exameII >= 70 && exameIII >= 70 && exameIV >= 70 && exameV >= 70) {
 printf("A: passou em todos os exames");
}
else if (exameI >= 70 && exameII >= 70 && exameIV >= 70) {
printf("B: passou em I, II e IV, mas nao em III ou V");
}
else if ((exameI >= 70 && exameII >= 70) && (exameIII >= 70 || exameIV >= 70)) {
 printf("C: passou em I e II, III ou IV, mas nao em V");
}
else {
 printf("Reprovado");
}

/*41. Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a 
100.*/
int main()
{
     int numero;
    numero = 1; 
        
        while(numero <= 100){
            printf("%i ", numero++);
        }
}
/*Outra forma*/
int main()
{
    int numero;
    numero = 0; 
        
        do{
            printf("%i " ,numero++);
        }while(numero <= 99);
}
/*Outra forma*/
int main()
{
    int numero;
    
    for( numero = 1; numero<=100; numero++)
       printf("%i ", numero);
}

/*42. Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem 
decrescente).*/
int main(){

int numero;

for(numero=100; numero>=1; numero--){
    printf("%d ", numero);
    }
}
/*43. Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 
100.*/
int main()
{
  int num;
    
    for(num = 2; num <= 100; num+=2)
        printf("%i ", num);
}

/*44. Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma 
de todos eles.*/
int i;
   intmain()
   {
    int soma = 0;
    
    for(i = 1; i <= 100 ; i++){
      printf("%d \n", i);
      soma += i;
    } 
    
    printf("A soma é: %i", soma);
   }
    
/*45. Escreva um programa que leia 5 números, e imprima a média entre eles.*/
int main()
{
    float num, total, media;
    float quantidade;
    total = 0;
    
    
    for(quantidade = 1; quantidade <= 5; quantidade++){
        printf("Digite seu número: ");
        scanf("%f", &num);
        total = total + num;
    }
    media = total/5;
    printf("Sua média é: %.2f", media);
}
/*46. Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e 
positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado.*/int main()
{
    int A, B, vezes;
    vezes = 1; 
    
    printf("Digite o valor de A: "); 
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    while(A - B * vezes != 0){
        vezes++;
    }
    printf("Seu quociente é: %i", vezes);
}
/*47. Escreva um programa que calcule o resto da divisão de A por B (número inteiros e 
positivos), ou seja, A % B, através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado.*/
int main()
{
     int A, B, i;
    
    
    printf("Digite o valor de A: "); 
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    int auxA = A;
    
    for(i = 1; B <= auxA; i++){
        auxA -= B;
    }
    int resto = auxA;
    
     printf("Seu resto é: %i", resto);
    
}

  /*Questão Fatorial da sala*/
int main()
{
    int i;
    int valor ;
    int fatorial = 1;
    
    printf("Digite o número do fatorial: \n");
    scanf("%d", &valor);
    
    for(i = 1 ; i <= valor; i++){
      fatorial = fatorial * i;
    }

    printf(" %d! = %d", valor, fatorial);
}

/*48. e 49. Escreva um programa que determine se um dado número N (digitado pelo usuário) é 
primo ou não.*/
int main()
{
    int i;
    int num;
    int divisivel = 0 ;
    
    printf("Digite o numero que você quer avaliar: ");
    scanf("%i", &num); 


    for(i = 2; i <= num ; i++){
        if (num % i == 0){
            divisivel++;
        }
    }
    
    if (divisivel == 1){
        printf("O número é primo");
    } else {
        printf("O número não é primo");
    }

}
/*Outra forma que eu fiz*/
  
  int main()
{
    int i;
    int num;
    
    printf("Digite o numero que você quer avaliar: ");
    scanf("%i", &num); 

    for(i = 1; i <= num ; i++){
       num % 2;
    }
    
     for(i = 1; i <= num ; i++){
       num / 2;
    }
    
    if (num % 2 == 1 || num == 2 ){
        printf("O número é primo");
    } else {
        printf("O número não é primo");
    }
}

/*50. Escreva um programa que leia um valor e imprima todas as possíveis combinações em 
que o lançamento de um par de dados tenha como resultado da soma dos valores dos 
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve 
imprimir as seguintes combinações: 
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1*/
int main()
{
int numero;
int dado1, dado2;

printf("Digite seu numero: ");
scanf("%i", &numero);
    
    for(dado1 = 1, dado2 = 0; dado1 <= numero - 1;dado1++){
        dado2 = numero - dado1;
            printf("%i + %i\n", dado1, dado2);
}
}
/*Outra forma que funciona com mais dados*/
int main()
{
int numero;
int dado1, dado2;

printf("Digite o seu numero: ");
scanf("%i", &numero);

for(dado1= 1; dado1 <= 6; dado1++)
    for(dado2 = 1; dado2 <= 6; dado2++)
        if(dado1 + dado2 == numero){
        printf("Dado 1 = %i  ", dado1);
        printf("Dado 2 = %i\n", dado2);
        }
}

/*51. A série de Fibonacci é formada pela sequencia: 
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N 
sendo uma entrada do algoritmo).*/

/*52. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são 
fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos 
dois termos anteriores, ou seja:
1. Ai = Ai-1 + Ai-2, para i ímpar
2. Ai = Ai-1 - Ai-2, para i par
Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de
FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três 
termos.*/

/*53. Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
um programa, que imprima o tempo necessário para que a população do país A ultrapasse 
a população do país B.*/
int main()
{
   float A = 5000000;
   float B = 7000000;
   int i;
   
   for(i = 1; A <= B; i++){
       A = A + ( A * 0.03);
       B = B + ( B * 0.02);
    }
    printf("O tempo necessario sera de %i anos", i); /*36*/
}
/*54. Construa um programa que receba um número e verifique se ele é um número triangular. 
(Um número é triangular quando é resultado do produto de três números consecutivos. 
Exemplo: 24 = 2 x 3 x 4)*/
int main()
{
     int i;
    int valor, teste;
    
    printf("Digite o valor máximo da sua sequencia: \n");
    scanf("%d", &valor);

    for (i = 1 ; i <= valor; i++){
        teste = i * (i+1) * (i+2);
        if( valor == teste){
           break;
        }
    }
    
    if (valor == teste){
        printf("O número é triângular");
    } else {
        printf("O número não é triângular");
    }
}
/*Outra forma*/
  int main()
{
    int num;
    int i = 1;
    int calculo;
    int resultado;
    
    printf("Digite o número que você quer verificar: \n");
    scanf("%i", &num);
    
    resultado = i * (i + 1) * (i + 2);
    
    while(resultado < num){
        i++;
        resultado = i * (i + 1) * (i + 2);
        
    }
        if(resultado == num){
        printf("O número é triângular");
        } else {
        printf("O número não é triângular");
            }
}
/*55. Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores 
próprios do outro. Os divisores próprios de um número positivo N são todos os divisores 
inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e 
220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. 
Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20 
+ 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142, 
efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220). 
Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e 
18416 são amigos, por exemplo).*/
  int main()
{
    int divisores;
    int valor1 = 0, valor2 =0;
    int i, j;
    int soma1 = 0 ,soma2 = 0;
    
    printf("Digite o 2 valores para descobir se eles são números amigos : \n");
    scanf("%d %d", &valor1, &valor2); 
    
    for(i = 1; valor1 > i; i++){
        if(valor1 % i == 0){
            soma1 += i;
        }
        
    }
    for(j = 1; valor2 > j; j++){
        if(valor2 % j == 0){
            soma2 += j;
        }
    }
    
    if(valor1 == soma2 && valor2 == soma1){
        printf("Eles são amigos");
    }else{
        printf("Eles não são amigos");
    }
}
/*56. Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores 
próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o 
próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é 
igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 
4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).*/
  int main()
{
    int divisores;
    int valor;
    int i, j;
    int soma = 0;
    
    printf("Digite o seu número : \n");
    scanf("%i", &valor);
    
    for(i = 1; valor > i; i++){
        if(valor % i == 0){
            soma += i;
        }
        
    }
    
    if(valor == soma){
        printf("Ele é perfeito");
    }else{
        printf("Eles não é perfeito");
    }
}
  
/*59. O número e (número de Euler) pode ser representado e calculado por meio da utilização da série de Taylor para e quando x=1, como a soma da 
seguinte série infinita: 𝑒 = 1 + (1/1!) + (1/2!) + (1/3!) + ... + (1/n!) Escreva um programa, que leia o número de termos da série (n) e imprima
como saída, o cálculo do número de Euler para cada um dos n primeiros elementos da série.*/
int main()
{
    int i;
    int valor ;
    int fatorial = 1;
    float euler = 1.0;
    
    printf("Digite o número de entrada: \n");
    scanf("%d", &valor);
    
    for(i = 1 ; i <= valor; i++){
      euler = euler +  1.0/ (fatorial = fatorial * i);
    }
    

    printf(" Resultado de Euler = %f", euler);
}
  
/* Questão de votos em sala*/
  int main()
{

    int A = 0;
    int B = 0;
    int C = 0;
    int voto;
    
    do{
    printf("Digite o seu voto 0 para proposta A, 1 para proposta B e 2 para proposta C, Caso queira encerrar o programa digite -1: ");
    scanf("%i", &voto);
    
        if (voto == 0){
        A += 1;
        }   
        else if (voto == 1){
        B += 1;
        }
        else if (voto == 2){
        C += 1;
        }
        else if (voto == -1){
        break;
        }
        else{
        printf("O VALOR DIGITADO NÂO É VALIDO \n");
        }
    
    }while(voto > 0);
    
    printf("A proposta A teve %i \n", A);
    printf("A proposta B teve %i \n", B);
    printf("A proposta C teve %i \n", C);
    }

 

   
   

