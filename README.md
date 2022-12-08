# Xadrez

# UFMG - TP Final PDS2 2022/2

### Integrantes
- [Guilherme Krusemark](https://github.com/guikrusemark)
- [Lucas Augusto](https://github.com/minipatch)

### Apresentação em Vídeo

- Estão separados em partes devido à limitação do software de gravação versão teste.

[Video 1](https://drive.google.com/file/d/15eOBOKdpnUr2ix6EkFNL6um7mHy5XAc1/view)
[Video 2](https://drive.google.com/file/d/12TN1o-ztAIO6kG5C4yYBIgHbiV3ynXIT/view)
[Video 3](https://drive.google.com/file/d/1ZFAvkP53TaLvfnXQJ2dD9DlwjC4d399S/view)

### Descrição do Projeto

- A ideia inicial do nosso projeto era fazer um xadrez com interface grafica 
usando a Bilioteca SFML, porem tivemos problemas durante o trabalho e não foi possivel 
usar a biblioteca, então fizemos o xadrez pelo terminal usando as ideias de 
programação orientada à objetos " polimorfismo em tempo de compilação e execução, herança, encapsulamento,
teste de unidade e tratamentos de exceções , modularização".  


- Pouco sobre a ideia inicial do projeto. 


![Trabalho PDS2_page-0001](https://user-images.githubusercontent.com/96149492/205762710-3a58623b-ae54-4525-9fdd-a4e80d65df0e.jpg)



- Diagrama de classe inicial do projeto.








![ilovepdf_merged (5) (1)_page-0003](https://user-images.githubusercontent.com/96149492/205762504-6c3211ec-671c-4844-897b-2535f798ea77.jpg)

















- user stories










![ilovepdf_merged (5) (1)_page-0001](https://user-images.githubusercontent.com/96149492/205762005-0ad28f31-c9d7-437b-be71-0d58476a0f1c.jpg)





























![ilovepdf_merged (5) (1)_page-0002](https://user-images.githubusercontent.com/96149492/205762442-13877191-e4d3-413a-bd20-9e07d356af98.jpg)





### Descrição as regras e logicas do jogo

- Sobre o jogo nos referenciamos apartir desse site (https://www.ichess.net/blog/chess-notation/#:~:text=Chess%20notation%20uses%20abbreviations%20for,the%20captured%20piece%20was%20upon.). Ele fala 
algumas informações sobre a notação das peças, notação do tabuleiro e mais algumas informações importantes que foram retirados para a
inspiração da logica do jogo para esse projeto.


- Clasificamos as peças como Peão como P, Rei como K, Rainha como Q ,Bispo como B, Cavalo como N,Torre como R. As peças brancas
são representadas com as letras W na frente enquanto as peças pretas são representadas
pela letra B antes das letras que representam as peças.


// foto das peças 



- Falando um pouco do tabuleiro, cada linha é representada de um numero de 1 a 8 enquanto as colunas são representada de A ate H  então,
por exemplo a posição inicial do cavalo da cor branca é B1 enquanto a posição inicial do cavalo preto é B8, posições que não tem alguma peça, 
classificamos como empty.

// foto da funcionalidade do tabuleiro


### Alguns detalhes sobre o jogo

- Pensamos em fazer algumas coisas bem simples como menu para acessar o jogo, também pensamos em implementar um historico para salvar algumas informações 
das partidas, por exemplo quantas peças foram perdidas.


//foto do historico e menu para acessar o jogo


### Falando um pouco das classes e orientação a objeto

- Fizemos algumas heranças como a classe Piece que é pai das classes Queen, King , Pawn, Knight, Bisharp e Rock . Todas as classes filhas de Piece tem polimorfimos 
em tempo de execução, como o metodo void move() e como cada peça tem sua movimentação então precisamos que cada peça tenha sobrescrita sobre sua movimentação. As classe filhas tem um final depois do nome que significa que essas classes não podem ter filhas.



- Alguns exemplos de herança:

![image](https://user-images.githubusercontent.com/96149492/205912962-a599a381-ff80-4295-8488-887efdcde3c5.png)



- Alguns exemplos de polimorfimos em tempo de execução:

![image](https://user-images.githubusercontent.com/96149492/205913873-163f9a96-20c9-4d0d-a804-0addef5f2380.png)


- Tambem foi feito encapsulamento, então metodos usamos publico e ate mesmo protected enquanto os metodos enquanto os atributos encapsulamos como privado 
e quando precisamos do atributo usamos os meotodos get ou quando precisamos atribuir algo a algum atributo usamos o set.



- Alguns exemplos de encapsulamento e gets:

![image](https://user-images.githubusercontent.com/96149492/205913623-e0b30394-0a29-4746-b5ea-d9837bb951e6.png)




### Passos para compilação

- Para compilar o projeto basta digitar "make all" que vai compilar  e executar o projeto




### Diagrama de classe atual

- Alteramos algumas classses e ideias comparados ao nosso diagrama de classe antigo 

![Diagrama de classes (1)](https://user-images.githubusercontent.com/96149492/206064281-b48d3c18-196a-4e16-a830-4e3d425163d9.png)




### Tratamentos de exceção 

- Fizemos alguns tratamentos de exceções e combrimos a area do tabuleiro e tratar erros exclusivamente  do jogo 

![image](https://user-images.githubusercontent.com/96149492/206316785-0a1f3eb8-43e2-4c5a-8b97-6f2a80487298.png)

- Fizemos nossa classe para tratamento de exceções


![image](https://user-images.githubusercontent.com/96149492/206317175-66ab5ab6-553f-4f8f-97a5-3da04d24a2b4.png)

- E acabamos lançando nosso erro caso ocorra bad aloc e alguns outros erros

![image](https://user-images.githubusercontent.com/96149492/206317592-e95d2731-cc7b-4c04-89e1-b37a96c2b5ae.png)

