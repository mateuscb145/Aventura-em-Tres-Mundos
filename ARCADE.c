#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <time.h>

void menu();
void perguntasERespostas();
void jogoDaCobra();
void gousmasWar();

void slow_print(char* str, int delay) {
    int i;
for (i = 0; str[i] != '\0'; i++) {
    putchar(str[i]);
    fflush(stdout);
    usleep(delay * 0);
}
}


int main() {
menu();
return 0;
}
void menu(){	
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("                              ---------------------------------------\n");
    printf("                              ------- Aventura em três mundos -------\n");
	printf("                              ---------------------------------------\n");
    slow_print(" Aqui você encontrara belos desafios, desafiando sua sabedoria e astucia, além de sua sorte\n", 50);
    slow_print(" será que você consegue encarar este mundo cheio de aventuras?\n", 50);
    slow_print(" Tudo pode acontecer... a partir daí cabe a você decidir a aventura que deseja prosseguir!\n\n", 50);
    
    slow_print("1. Perguntas e respostas \n",50);
    slow_print("2. Cobra na Caixa \n",50);
    slow_print("3. Gousmas War \n",50);
    slow_print("4. Sair \n",50);
    char jogo1 = '1', jogo2 = '2', jogo3 = '3', sair = '4';
    char player;
    printf(" Qual opção voçê deseja selecionar? ",50);
    scanf(" %c", &player);
    if(player == jogo1){
    	
    	slow_print(" Este é um jogo de Perguntas gerais, para saber seu conhecimento raso de mundo\n",50);
    	slow_print(" Vamos começar?\n",50);
    	char claro = '1';
    	char selecont;
    	printf(" Digite um valor valido.\n");
    	printf("1.sim \n");
    	scanf(" %c", &selecont);
    	if( selecont == claro){
	
	fflush(stdin);
		perguntasERespostas();
fflush(stdin);

}

    }else if(player == jogo2){
    	
    	slow_print(" Este é um jogo de sorte ou azar... ou você consegue o botão ou será morto por uma terrivel cobra\n",50);// texto do jogo
    	printf(" Vamos começar?\n");
    	char claro = '1';
    	char selecont;
    	printf(" Digite um valor valido.\n");
    	printf("1.sim\n");
    	scanf(" %c", &selecont);
    	if( selecont == claro){ 
		
		fflush(stdin);
		jogoDaCobra();
fflush(stdin);
		
		}
    		
	}else if(player == jogo3){
		
		slow_print(" Nas terras de Liima, as pessoas usam Gousmas para lutar entre si, dóceis... mas que quando são\n", 50);
		slow_print(" atacadas ficam furiosas, além de poder se dividir, elas acabam por quando ficam muito furiosas se desintregam.\n", 50);
		slow_print(" Então chame seu amigo e venha confrontalo neste jogo insano! \n",50);
    	printf(" Vamos começar?\n");
    	char claro = '1';
    	char selecont;
    	printf(" Digite um valor valido.\n");
    	printf("1.sim\n");
    	scanf(" %c", &selecont);
    	if( selecont == claro){ 
		
		fflush(stdin);
		gousmasWar();
fflush(stdin);
		
		}
		
	}else{
		system("cls");
	}

	
	

} 

void perguntasERespostas(){


int repet;
	
	printf("                        ---------------------------------------\n");
    printf("                        ---- JOGO DE PERGUNTAS E RESPOSTAS ----\n");
    printf("                        ---------------------------------------\n\n\n");
    
    printf("                             PRIMEIRA PERGUNTA\n");
    slow_print("                          Quem descobriu o Brasil?\n",100);
    slow_print("a) Pedro Alvares Cabral\n",50);
    slow_print("b) Cristovao Colombo\n",50);
    slow_print("c) Vasco da Gama\n",50);
    slow_print("d) Dom Perdo I\n\n\n",50);
    char respCer = 'a';
    char respJog;
    printf("                          Qual a resposta correta? \n ");
    scanf(" %c", &respJog);
    if (respJog == respCer) {
        printf("                          Parabens, voce acertou!\n\n");
    }else{
        printf("Errou, a resposta correta eh Pedro Alvares Cabral\n\n");
	}   
	printf("--------------------------------------------------------------------------------------------------------------\n");
	printf("                               SEGUNDA PERGUNTA\n\n");
	slow_print("               Qual eh a selecao com mais titulos de Copa do Mundo?\n",100);
    slow_print("a) Franca\n",50);
    slow_print("b) Aleanha\n",50);
    slow_print("c) Brasil\n",50);
    slow_print("d) Argentina\n\n\n",50);
    char respCer2 = 'c';
    char respJog2;
    printf("                          Qual a resposta correta?\n");
    scanf(" %c", &respJog2);
    if (respJog2 == respCer2) {
        printf("                          Parabens, voce acertou!\n\n");
    }else{
        printf("Errou, a resposta correta eh Brasil\n\n");
    }
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("                               TERCEIRA PERGUNTA\n\n");
    slow_print("Normalmente, quantos litros de sangue uma pessoa tem? Em media, quantos sao retirados numa doacao de sangue?\n",100);
    slow_print("a) Tem entre 2 a 4 litros. Sao retirados 450 mililitros\n",50);
    slow_print("b) Tem 7 litros. Sao retirados 1,5 litros\n",50);
    slow_print("c) Tem 10 litros. Sao retirados 2 litros\n",50);
    slow_print("d) Tem entre 4 a 6 litros. Sao retirados 450 mililitros\n\n\n",50);
    char respCer3 = 'd';
    char respJog3;
    printf("                          Qual a resposta correta? \n");
    scanf(" %c", &respJog3);
    if (respJog3 == respCer3) {
        printf("                          Parabens, voce acertou!\n\n");
    }else{
        printf("Errou, a resposta correta eh Entre 4 a 6 litros. Sao retirados 450 mililitros \n\n");
    }
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("                               QUARTA PERGUNTA\n\n");
    slow_print("                    Quais o menor e o maior país do mundo?\n",100);
    slow_print("a) Nauru e China\n",50);
    slow_print("b) Sao Marino e India\n",50);
    slow_print("c) Monaco e Canada\n",50);
    slow_print("d) Vaticano e Russia\n\n\n",50);
    char respCer4 = 'd';
    char respJog4;
    printf("                          Qual a resposta correta? \n");
    scanf(" %c", &respJog4);
    if (respJog4 == respCer4){
        printf("                          Parabens, voce acertou!\n\n");
	}else{
		printf("Errou, a resposta correta eh Vaticano e Russia\n");
	}
	printf("--------------------------------------------------------------------------------------------------------------\n");
	printf("                               QUINTA PERGUNTA\n\n");
    slow_print("                    Quantas casas decimais tem o número pi?\n",100);
    slow_print("a) Duas\n",50);
    slow_print("b) Infinitas\n",50);
    slow_print("c) Centenas\n",50);
    slow_print("d) Milhares\n\n\n",50);
    char respCer5 = 'b';
    char respJog5;
    printf("                          Qual a resposta correta? \n");
    scanf(" %c", &respJog5);
    if(respJog5 == respCer5){
        printf("                          Parabens, voce acertou!\n\n");
	}else{
		printf("Errou, a resposta correta eh Infinitas casas decimais\n\n");
	}
	
	int escolhaFinal = 0;
    	fflush(stdin);
    	printf("escolha 1 para continuar a jogar ou Escolha 2 para ir para o menu:  ");
    	scanf("%d", &escolhaFinal);
    	fflush(stdin);
    
    	if (escolhaFinal == 2) {
    		printf("voltando para o menu\n\n");
    		menu();
		}
		else if (escolhaFinal == 1)	{
			printf("Reiniciando o jogo\n\n");
    		perguntasERespostas();
		}
		else{
			printf("Digite um valor valido.\n\n");
			printf("voltando para o menu\n\n");
    		menu();
		}
	
}

	void jogoDaCobra(){
		
	printf("                        ---------------------------------------\n");
    printf("                        -------- JOGO da Cobra na Caixa -------\n");
    printf("                        ---------------------------------------\n\n\n");
	
		char jogador1[50], jogador2[50];
    	int caixaAberta[5] = {0, 0, 0, 0, 0};
    	int cobra, botao, escolha, jogoTerminou, jogadores;
    	int i; // declaração movida para cá
	
		//esquema inicial do jogo
		fflush(stdin);
    	printf("Cobra na caixa!\n");
    	printf("Nome do jogador: \n");
    	gets(jogador1);
    	printf("jogador confirmado, %s \n", jogador1);
    	printf("Nome do jogador: \n");
		gets(jogador2);
    	printf("jogador confirmado, %s \n", jogador2);

		// turno aleatorio dos jogadores
		srand(time(NULL)); // gera numero aleatorio a partir do time null(que conta a partir de uma certa hora de um certo momento)
    	jogadores = rand() % 2; // gera um número aleatório entre 1 e 2
    	
		// troca a caixa do botão enquanto for igual a caixa da cobra
    	srand(time(NULL));
    	cobra = rand() % 5;
    		do {
      			botao = rand() % 5;
    		}while (botao == cobra);

   		// Iniciar o jogo
   		jogoTerminou = 0;
			while (!jogoTerminou) {
        	// Exibir as caixas disponíveis
        		printf("\n%s, escolha uma caixa (1-5): ", jogadores == 0 ? jogador1 : jogador2);
        
				for (i = 0; i < 5; i++) { // variável i usada aqui
           		 		if (caixaAberta[i]) {
                		printf(" x ");
            			} 
						else {
                		printf(" %d ", i+1);
           	 			}
       	 			}
        		printf("\n");

        		// Ler a escolha do jogador
				scanf("%d", &escolha);
        		escolha--;  // Converter para índice de 0 a 4

        		// Verificar se a escolha é válida
        		if (escolha < 0 || escolha > 4 || caixaAberta[escolha]) {
            	printf("Voce já escolheu essa caixa, escolha outra. \n");
           		 continue;
        		}

        		// Abrir a caixa escolhida
       			 caixaAberta[escolha] = 1;
        		if (escolha == cobra) {
            			printf("Você abriu a caixa %d e encontrou uma cobra! GAME OVER.\n", escolha+1);
            			jogoTerminou = 1;
            			} 
				else if (escolha == botao) {
            		printf("Você abriu a caixa %d e encontrou o botão! VOCÊ GANHOU!\n", escolha+1);
            		jogoTerminou = 1;
    			} 
				else {
            		printf("Você abriu a caixa %d e não encontrou nada. Escolha outra caixa.\n", escolha+1);
        			}
        		if(!jogoTerminou){
        			jogadores = jogadores == 0 ? 1:0;  	
					}
			}
   
		int escolhaFinal = 0;
    	fflush(stdin);
    	printf(" escolha 1 para continuar a jogar. Escolha 2 para ir para o menu:  ");
    	scanf("%d", &escolhaFinal);
    	fflush(stdin);
    
    	if (escolhaFinal == 2) {
    		printf(" voltando para o menu\n\n");
    		menu();
		}
		else if (escolhaFinal == 1)	{
			printf(" Reiniciando o jogo\n\n");
    		jogoDaCobra();
		}
		else{
			printf(" Digite um valor valido.\n\n");
			printf(" voltando para o menu\n\n");
    		menu();
		}
    
	}
	
	
void gousmasWar(){
	
    printf("                        -----------------------------\n");
    printf("                        -------- GOUSMAS WAR --------\n");
    printf("                        -----------------------------\n\n\n");
	
	char jogador1[30], jogador2[30];
	char temp[sizeof(jogador1)];

	printf("Primeiro jogador, digite seu nome:\n ");
	scanf("%s", &jogador1);
	
	printf("Segundo jogador, digite seu nome:\n ");
	scanf("%s", &jogador2);
	
	int aleatoriedade;

	srand(time(NULL));
	
		aleatoriedade = rand() % 2;
		
	if(aleatoriedade == 0)
	{	 
		printf("\nJogador %s começa atacando. \n \n ", jogador1);
	}
	else
	{
		printf("\nJogador %s começa atacando. \n \n ", jogador2);
		strcpy(temp, jogador1);

	// copiar valor de jogador2 para jogador1
		strcpy(jogador1, jogador2);

	// copiar valor da variável temporária para jogador2
		strcpy(jogador2, temp);
    }
		 
		int furiaA = 1, furiaB = 1, furiaC = 1, furiaD = 1;
		int flag = 0;
		char escolha; 

	printf("%s x %s", jogador1,jogador2);	
	printf("\nA partida começa, que o melhor vença!\n");
		
	while((furiaA > 0 || furiaB > 0) && (furiaC > 0 || furiaD > 0))
	{	
		printf("\nEscolha seu movimento, %s!\n", jogador1);
		
		do{
		
		printf("\n(a)atacar   OU   (b)dividir: \n ");
		fflush(stdin);
		escolha = getchar();
		
		if(escolha == 'a' || escolha == 'A')
		{
			printf("\nEscolha a Gousma que performará o ataque: \n");
			printf(" (a)Gousma A   OU   (b)Gousma B \n");
			fflush(stdin);
			scanf("%c", &escolha);
			
			if(escolha == 'a' || escolha == 'A')
			{
				printf("\nEscolha o alvo que sofrerá o ataque: \n");
				printf("\n (a)gousma C   OU   (b)gousma D \n");
				fflush(stdin);
				scanf("%c", &escolha);
				if(escolha == 'a' || escolha == 'A')
				{
					furiaC = furiaC + furiaA;
					printf("\n A Gousma A ataca a Gousma C de forma violenta. \n");
					printf("\n A fúria da Gousma C sobe para %d. \n", furiaC);
				}
				else if(escolha == 'b' || escolha == 'B')
				{
					furiaD = furiaD + furiaA;
					printf("\n A Gousma A ataca a Gousma D de forma violenta. \n");
					printf("\n A fúria da Gousma D sobe para %d. \n", furiaD);
				}
				else
				{
					printf("\nComando Inválido! Digite novamente, mas um comando válido.\n");
					continue;	
				}
				if(furiaC > 5)
				{
					furiaC = 0;
					printf("\nA fúria da Gousma C ultrapassou o limite, portanto ela se desintegrou de tanta fúria!\n");
				}
				if(furiaD > 5)
				{
					furiaD = 0;
					printf("\nA fúria da Gousma D ultrapassou o limite, portanto ela se desintegrou de tanta fúria!\n");
				}
				printf("\nFúria de A: %d, Fúria de B: %d, Fúria de C %d, Fúria de D: %d\n", furiaA, furiaB, furiaC, furiaD);			
			}
			else if(escolha == 'b' || escolha == 'B')
			{
				printf("escolha a gousma que sera atacada: \n");
				printf("\n (a)gousma C ou (b)gousma D \n");
				fflush(stdin);
				scanf("%c", &escolha);
				if(escolha == 'a' || escolha == 'A')
				{
					furiaC = furiaC + furiaB;
					printf("\n a gousma B ataca a gousma C de forma violenta. \n");
					printf("\n a furia da gousma C sobe para %d. \n", furiaC);
				}
				else if(escolha == 'b' || escolha == 'B')
				{
					furiaD = furiaD + furiaB;
					printf("\n a gousma B ataca a gousma D de forma violenta. \n");
					printf("\n a furia da gousma D sobe para %d. \n", furiaD);
				}
				else
				{
					printf("\nComando Inválido! Digite novamente, mas um comando válido.\n");
					continue;	
				}
				if(furiaC > 5)
				{
					furiaC = 0;
					printf("\nA fúria da Gousma C ultrapassou o limite, portanto ela se desintegrou de tanta fúria!\n");
				}
				if(furiaD > 5)
				{
					furiaD = 0;
					printf("\nA fúria da Gousma D ultrapassou o limite, portanto ela se desintegrou de tanta fúria!\n");
				}
				printf("\nFúria de A: %d, Fúria de B: %d, Fúria de C %d, Fúria de D: %d\n", furiaA, furiaB, furiaC, furiaD);
			}
			else
			{
				printf("\nComando Inválido! Digite novamente, mas um comando válido.\n");
				continue;
			}
			
			if(furiaC < 1 && furiaD < 1)
			{
				break;
			}
		}
		
		else if(escolha == 'b' || escolha == 'B')
		{
			if(furiaA == 0 || furiaB == 0 )
			{
				if(furiaA == 0 && furiaB >= 2)
				{
					int newFuriaA;
					printf("\nDigite quanto de fúria será passada para ressucitar a Gousma A:\n");
					scanf("%d", &newFuriaA);
					if(newFuriaA >= furiaB)
					{
						printf("\nTentaste ser malandro, portanto perdeste a vez\n");
					}
					else if(newFuriaA < furiaB)
					{
					furiaB = furiaB - newFuriaA;
					furiaA = furiaA + newFuriaA;
					}
				}
				else if(furiaB == 0 && furiaA >= 2)
				{
					int newFuriaB;
					printf("\nDigite quanto de fúria será passada para ressucitar a Gousma B:\n");
					scanf("%d", &newFuriaB);
					if(newFuriaB >= furiaA)
					{
						printf("\nTentaste ser malandro, portanto perdeste a vez\n");
					}
					else if(newFuriaB < furiaA)
					{
					furiaA = furiaA - newFuriaB;
					furiaB = furiaB + newFuriaB;
					}
				}
				printf("\nFúria de A: %d, Fúria de B: %d, Fúria de C %d, Fúria de D: %d\n", furiaA, furiaB, furiaC, furiaD);
			}
			else if (furiaA > 0 || furiaB > 0 )
			{
				printf("\nnenhuma Gousma está morta! Digite novamente, mas um comando válido\n");
				escolha = 'c';
			}
		}
		
		else
		{
			printf("\nComando Inválido! Digite novamente, mas um comando válido\n");
			continue;
	 	}
	 	
		
		
	}while(escolha != 'a' && escolha != 'b');
	
		if(furiaC == 0 && furiaD == 0)
		{
		break;
		}
		
		printf("\nJogador %s, faça seu movimento\n", jogador2);
		
		do{
		printf("\n(a)atacar   OU   (b)dividir: \n ");
		fflush(stdin);
		escolha = getchar();
		
		if(escolha == 'a' || escolha == 'A')
		{
			printf("\nEscolha a Gousma que performará o ataque: \n");
			printf(" (a)Gousma C   OU   (b)Gousma D \n");
			fflush(stdin);
			scanf("%c", &escolha);
			
			if(escolha == 'a' || escolha == 'A')
			{
				printf("\nEscolha o alvo que sofrerá o ataque: \n");
				printf("\n (a)gousma A   OU   (b)gousma B \n");
				fflush(stdin);
				scanf("%c", &escolha);
				if(escolha == 'a' || escolha == 'A')
				{
					furiaA = furiaA + furiaC;
					printf("\n A Gousma C ataca a Gousma A de forma violenta \n");
					printf("\n A fúria da Gousma A sobe para %d \n", furiaA);
				}
				else if(escolha == 'b' || escolha == 'B')
				{
					furiaB = furiaB + furiaC;
					printf("\n A Gousma C ataca a Gousma B de forma violenta \n");
					printf("\n A fúria da Gousma B sobe para %d \n", furiaB);
				}
				else
				{
					printf("\nComando Inválido! Digite novamente, mas um comando válido\n");
					continue;	
				}
				if(furiaA > 5)
				{
					furiaA = 0;
					printf("\nA fúria da Gousma A ultrapassou o limite, portanto ela se desintegrou de tanta fúria!\n");
				}
				if(furiaB > 5)
				{
					furiaB = 0;
					printf("\nA fúria da Gousma B ultrapassou o limite, portanto ela se desintegrou de tanta fúria!\n");
				}
				printf("\nFúria de A: %d, Fúria de B: %d, Fúria de C %d, Fúria de D: %d\n", furiaA, furiaB, furiaC, furiaD);
			}
			else if(escolha == 'b' || escolha == 'B')
			{
				printf("escolha a gousma que sera atacada: \n");
				printf("\n (a)gousma A ou (b)gousma B \n");
				fflush(stdin);
				scanf("%c", &escolha);
				if(escolha == 'a' || escolha == 'A')
				{
					furiaA = furiaA + furiaD;
					printf("\n a gousma D ataca a gousma A de forma violenta \n");
					printf("\n a furia da gousma A sobe para %d \n", furiaA);
				}
				else if(escolha == 'b' || escolha == 'B')
				{
					furiaB = furiaB + furiaD;
					printf("\n a gousma D ataca a gousma B de forma violenta \n");
					printf("\n a furia da gousma B sobe para %d \n", furiaB);
				}
				else
				{
					printf("\nComando Inválido! Digite novamente, mas um comando válido\n");
					continue;	
				}
				if(furiaA > 5)
				{
					furiaA = 0;
					printf("\nA fúria da Gousma A ultrapassou o limite, portanto ela se desintegrou de tanta fúria!\n");
				}
				if(furiaB > 5)
				{
					furiaB = 0;
					printf("\nA fúria da Gousma B ultrapassou o limite, portanto ela se desintegrou de tanta fúria!\n");
				}
				printf("\nFúria de A: %d, Fúria de B: %d, Fúria de C %d, Fúria de D: %d\n", furiaA, furiaB, furiaC, furiaD);
			}
			else
			{
				printf("\nComando Inválido! Digite novamente, mas um comando válido\n");
				continue;
			}
		}
		
		else if(escolha == 'b' || escolha == 'B')
		{
			if(furiaC == 0 || furiaD == 0 )
			{
				if(furiaC == 0 && furiaD >= 2)
				{
					int newFuriaC;
					printf("\nDigite quanto de fúria será passada para ressucitar a Gousma C:\n");
					scanf("%d", &newFuriaC);
					if(newFuriaC >= furiaD)
					{
						printf("\nTentaste ser malandro, portanto perdeste a vez\n");
					}
					else if(newFuriaC < furiaD)
					{
					furiaD = furiaD - newFuriaC;
					furiaC = furiaC + newFuriaC;
					}
				}
				else if(furiaD == 0 && furiaC >= 2)
				{
					int newFuriaD;
					printf("\nDigite quanto de fúria será passada para ressucitar a Gousma D:\n");
					scanf("%d", &newFuriaD);
					if(newFuriaD >= furiaC)
					{
						printf("\nTentaste ser malandro, portanto perdeste a vez\n");
					}
					else if(newFuriaD < furiaC)
					{
					furiaC = furiaC - newFuriaD;
					furiaD = furiaD + newFuriaD;
					}
				}
				printf("\nFúria de A: %d, Fúria de B: %d, Fúria de C %d, Fúria de D: %d\n", furiaA, furiaB, furiaC, furiaD);
			}
			else if (furiaC > 0 || furiaD > 0 )
			{
				printf("\nnenhuma Gousma está morta! Digite novamente, mas um comando válido\n");
				escolha = 'c';
			}
		}
		
		else
		{
			printf("\nComando Inválido! Digite novamente, mas um comando válido\n");
			continue;
		}
		
	}while(escolha != 'a' && escolha != 'b');
	}
	
	if(furiaA == 0 && furiaB ==0)
	{
		printf("\nParabéns %s suas gousmas foram as vencedoras!\n", jogador2);
	}
	else if(furiaC == 0 && furiaD == 0)
	{
		printf("\nParabéns %s suas gousmas foram as vencedoras!\n", jogador1);
	}
	
	int escolhaFinal = 0;
    	fflush(stdin);
    	printf(" escolha 1 para continuar a jogar. Escolha 2 para ir para o menu:  ");
    	scanf("%d", &escolhaFinal);
    	fflush(stdin);
    
    	if (escolhaFinal == 2) {
    		printf(" voltando para o menu\n\n");
    		menu();
		}
		else if (escolhaFinal == 1)	{
			printf(" Reiniciando o jogo\n\n");
    		gousmasWar();
		}
		else{
			printf(" Digite um valor valido.\n\n");
			printf(" voltando para o menu\n\n");
    		menu();
		}

}
