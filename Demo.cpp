#include <iostream>
#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <unistd.h>
#include <iostream>
#include <conio.h>
using namespace std;

int ht_cnt = 2; //hit count
int ma_dmg = 12; //max damage
int tt_dmg = 0; //total damage

int f_tt_dmg(int ht_cnt, int ma_dmg) {
      int tt_dmg = 0; //total damage
      int x = 0;
      //printf("Inputs da function: %i , %i \n", ht_cnt, ma_dmg);
      for (int i = 0; i <= ht_cnt; i++) {
          srand(time(NULL));
          x = 0;
          x = rand() % ma_dmg;
          if (x == 0) {
              x = rand() % ma_dmg;
          }
          if (x > ma_dmg) {
              x = ma_dmg;
          }
          tt_dmg = tt_dmg + x;     
      }

      return (tt_dmg);
  }
  
  
inline void wait_on_enter(){
    string dummy;
    cout << "Pressione ENTER para continuar.." <<endl;
    cin.ignore();
    getline(std::cin, dummy);
}



//system("clear||cls"); usado para apagar os texto



int main()
{
    int vida_jogador, inteligencia_jogador, forca_jogador, resistencia_jogador, mana_jogador, vida_golem,ponto;
    string nome_jogador;
    char pronto, batalha, batalha1, escolha;
    vida_golem = 50; //Vida Golem
    vida_jogador = 30;  // Valor inicial da vida do jogador
    inteligencia_jogador = 20;
    forca_jogador = 7;
    resistencia_jogador = 20;
    mana_jogador = 20;
    

    

    cout << "Bem Vindo ao Incrivel Mundo de Fariet, mas antes de conhecer melhor esse mundo" << endl;
    cout << "Digite seu nome: ";
    cin >> nome_jogador;
    cout << "Seu nome é " << nome_jogador << " então?" << endl;
    wait_on_enter();
    system("clear||cls");
    sleep (1);
    cout << "-------------------------------------------------------------"<< endl;
    cout << "Agora que ja se apresentou, vamos conhecer melhor o mundo de Fariet" << endl;
    sleep(5);
    cout << "Nesse mundo você conseguira lutar com diversos monstro, fazer varias missões, e descobrir segredos." << endl;
    sleep(5);
    cout << "Um mundo repleto de criaturas , seres estranhos, tesouros e lugares escondidos." << endl;
    sleep(5);
    cout << "Aqui é um lugar repleto de escolhas , e as suas escolhas vai influenciar o mundo a sua volta,então pense bem antes de agir!" << endl;
    sleep(5);
    cout << "Por fim , existem 4 raças dentre elas: Os humanos, Os Elfos, Os Draconios, e Os Anões" << endl;;
    cout << "-------------------------------------------------------------"<< endl;
    wait_on_enter();
    system("clear||cls");
    sleep(1);
    cout << "-------------------------------------------------------------"<< endl;
    cout << "Você será um humano cujos atributos iniciais serão:" << endl;
    cout << "Inteligencia= 20" << endl;
    cout << "Força= 7" << endl;
    cout << "Saúde= 30" << endl;
    cout << "Resistencia= 20" << endl;
    cout << "Mana= 20" << endl;
    cout << "Conforme você avance na sua jornada , mais forte ficará e mais itens conseguirá!" << endl;
    cout << "-------------------------------------------------------------"<< endl;
    wait_on_enter();
    system("clear||cls");
    sleep(1);
    cout << "-------------------------------------------------------------"<< endl;
    cout << "Essa versão é uma DEMO, aproveite a experiencia!" << endl;
    cout << "Você esta pronto ?" << endl;
    cout << "-------------------------------------------------------------"<< endl;
    cout << "S = Estou Pronto ///// N = Não Estou Pronto" << endl;
    cin >> pronto;
    system("clear||cls");
    sleep(1);
    pronto = toupper(pronto);
    switch (pronto) {
    case 'S': system("clear||cls");
              cout << "Você entrou na Dungeon:"<< endl;
              cout << "-------------------------------------------------Catacumbas Infernais-------------------------------------------------" << endl;
              wait_on_enter();
              
        break;
    case 'N': cout << "Você é um(a) Medroso(a)" << endl;
        return 0;
    }
    system("clear||cls");
    sleep(1);
    cout << "-------------------------------------------------------------"<< endl;
    cout << "Ao entrar na Dungeon Você da de cara com um Golem que guarda a passagem, mas ele está inativo e não notou sua presença" << endl;
    sleep(2);
    cout << "O que pretende fazer?" << endl;
    cout << "-------------------------------------------------------------"<< endl;
    cout << " Digite : T = Tentar passar sem ser detectado ///// B = Iniciar uma batalha" << endl;
    cin >> batalha;
    batalha = toupper(batalha);

    switch (batalha) {
    case 'T': 
        system("clear||cls");
        sleep(1);
        cout << "-------------------------------------------------------------"<< endl;
        cout << "Você tentou passar sem ser notado ,porem o golem sentiu sua presença e antes  mesmo de você conseguir fazer algo ele se levantou e te atingiu com uma onda de choque" << endl;
        cout << "Você caiu e perdeu 5 de vida" << endl;
        vida_jogador -= 5;
        cout << "Você ficou com " << vida_jogador << " pontos de vida" << endl;
        cout << "-------------------------------------------------------------"<< endl;
        wait_on_enter();
        
        break;
    case 'B': 
        system("clear||cls");
        sleep(1);
        cout << "-------------------------------------------------------------"<< endl;
        cout << "Você foi correndo ao ataque sem arma na mão e atingiu com um soco o golem que estava inativo mas sua pele era muito dura e não sofreu dano" << endl;
        cout << "Por dar o soco no Golem você sofreu 5 de dano" << endl;
        vida_jogador -= 5;
        cout << "Você ficou com: " <<vida_jogador<<" pontos de vida" <<endl; 
        cout << "Ao ser atacado o Golem acordou!" << endl;
        cout << "-------------------------------------------------------------"<< endl;
        wait_on_enter();
        
        break;
    }

    // Batalha Contra o Golem //
    system("clear||cls");
    cout << "-----------O Golem está olhando fixamente em você esperando seu movimento-----------" << endl;
    wait_on_enter();
    system("clear||cls");
    cout << "---------------------------------------------------------------------"<< endl;
    cout << "***Aviso do Sistema: Lembre-se " << nome_jogador << " você tem sua espada guardada no inventario***" << endl;
    cout << "---------------------------------------------------------------------"<< endl;
    cout << "Digite: P = pegar sua espada e atacar //// A = Atacar sem sua espada " << endl;
    cin >> batalha;
    batalha = toupper(batalha);
    if (batalha != 'P') {
        if (batalha != 'A') {
            cout << "Escolha Inválida";
        }
    }

    switch (batalha) {
    case 'P':  
       system("clear||cls");
       cout << "---------------------------------------------------------------------"<< endl;
       cout << "Você pegou sua espada e atacou o golem com toda força!" << endl;
       sleep(2);
       tt_dmg = f_tt_dmg(2, 10); // as chamadas de funções que retornam valores devem ser feitas assim, jogando em variáveis
       cout << "Você causou: " << tt_dmg << " pontos de dano" <<endl;
       vida_golem -= tt_dmg;
       cout << "O Golem ficou com " << vida_golem << " pontos de vida"<<endl;
       cout << "Você ficou com " << vida_jogador << " pontos de vida"<<endl;
       cout << "---------------------------------------------------------------------"<< endl;
        wait_on_enter();    
    break;
    case 'A' : 
        system("clear||cls");
        cout << "---------------------------------------------------------------------"<< endl;
        cout << "Você correu em confronto com o golem e o atingiu com um soco!" <<endl;
        cout << "A pele do golem era muito dura e você sofreu 5 de dano!"<< endl;
        vida_jogador -= 5;
        cout <<  "Você ficou com " << vida_jogador << " pontos de vida"<< endl;
        cout << "-------------------------------------------------------------"<< endl;
        wait_on_enter();
        cout << "O Golem contra ataca!" <<endl; 
        tt_dmg = f_tt_dmg(1, 25);
        vida_jogador -= tt_dmg;
        cout << "Ele lhe causou "<< tt_dmg << " pontos de dano" << endl;
        cout <<  "Você ficou com " << vida_jogador << " pontos de vida"<< endl;
        if(vida_jogador <= 0 ){ cout << "Você foi esmagado pelo Golem!" <<endl;
        wait_on_enter();
        system("clear||cls");
             cout << "------------------------------------------------GAME OVER------------------------------------------------" << endl;
             return 0;}
        
        cout << "-------------------------------------------------------------"<< endl;
        wait_on_enter();
        
    break;
    }
    system("clear||cls");
    cout << "-------------------------------------------------------------"<< endl;
    cout << "o Golem nem espera e parte para o ataque!"<<endl;
    cout << "O que você vai fazer ?"<< endl;
    cout << "-------------------------------------------------------------"<< endl;
    cout << "*E* = Tentar se Esquivar do ataque. ///// *I* = Ir ao ataque tambem." << endl;
     cin >> batalha;
     sleep(2);
     system("clear||cls");
    batalha = toupper(batalha);
    if (batalha != 'E') {
        if (batalha != 'I') {
            cout << "Escolha Inválida";
        }
    }
system("clear||cls");
 switch (batalha) {
     
    case 'E':  cout << "-------------------------------------------------------------"<< endl;
               cout << "Você conseguiu se esquivar e o Golem atinge o chão" << endl;
    sleep(5);
               cout << "Mas mesmo após se esquivar com a pancada no chão você desistabilizou e caiu."<< endl;
    sleep(5); 
    system("clear||cls");
               cout << "-------------------------------------------------------------"<< endl;
               cout << "O Golem partiu para te atacar" << endl;
        tt_dmg = f_tt_dmg(1, 30); // as chamadas de funções que retornam valores devem ser feitas assim, jogando em variáveis
        if(tt_dmg == 0){ cout << "Ele errou o golpe!" << endl;}
        cout << "Ele tentou te acerta e causou: " << tt_dmg << " pontos de dano" <<endl;
        vida_jogador -= tt_dmg;
        cout << "Você ficou com " << vida_jogador << " pontos de vida"<<endl;
         if(vida_jogador <= 0 ){ cout << "Você foi esmagado pelo Golem!" <<endl;
        wait_on_enter();
        system("clear||cls");
             cout << "------------------------------------------------GAME OVER------------------------------------------------" << endl;
             return 0;}
    break;
    wait_on_enter();
    system("clear||cls");
    case 'I' : cout << "-------------------------------------------------------------"<< endl;
               cout << "Você e o Golem partiram para o Ataque!" << endl;
               sleep(5);
               cout << "Ambos Tentam se Acertar!"<< endl;
               sleep(2);
               cout << "Você é mais rapido e ataca primeiro" <<endl;
            tt_dmg = f_tt_dmg(2, 20);
            if(tt_dmg == 0){ cout << "Seu ataque não teve efeito" << endl;}
            else{cout << "******Você conseguiu acertar em uma area fragil do Golem seu dano foi Dobrado*****" << endl;
            }
            cout << "Você causou: "<< tt_dmg << " pontos de dano" << endl;
            vida_golem -= tt_dmg;
            cout << "O Golem ficou com : " << vida_golem << " pontos de vida"<<endl;
            cout << "-------------------------------------------------------------"<< endl;
        wait_on_enter();
        system("clear||cls");
        if(vida_golem <= 0 ){cout << "------------------------------Parabéns------------------------------"<< endl;
                             cout << "Você derrotou o Golem!" << endl;
                             cout << "Você conseguiu 1 ponto para distribuir nos Atributos!"<<endl;
                             cout << "1 = Vida, 2 = Força , 3 = Mana , 4 = Resistencia ,5 = Inteligencia "<<endl;
                             cout << "Digite o numero para atribuir o ponto: ";
                             cin  >> ponto;
                             switch(ponto) {
                                case 1 : vida_jogador += 20;
                                case 2 : forca_jogador += 20;
                                case 3 : mana_jogador += 30;
                                case 4 : resistencia_jogador += 30;
                                case 5 : inteligencia_jogador += 30;
                                break;
                             }
                             system("clear||cls");
                             cout << "Agora seus atributos são esses: " <<endl;
                             cout <<"Vida: "<< vida_jogador <<endl;
                             cout <<"Força: "<< forca_jogador <<endl;
                             cout <<"Mana: "<< mana_jogador <<endl;
                             cout <<"Resistencia: "<< resistencia_jogador <<endl;
                             cout <<"Inteligencia: "<< inteligencia_jogador <<endl;
        }
         if(vida_golem >=1){
             system("clear||cls");
         cout << "O Golem foi bem afetado após esse dano, ficando atordoado!"<<endl;
         cout << "Oque Você vai fazer?"<<endl;
         cout << "A = Atacar rapidamente ///// P = Passar pela passagem que ele guardava "<<endl;
         cin >> escolha;
         escolha = toupper(escolha);
         switch (escolha){
         case 'A' : 
         system("clear||cls");
         cout << "-------------------------------------------------------------"<< endl;
         cout << "Você aproveita o tempo que o golem ficou atordoado e parte para o ataque"<<endl;
         tt_dmg = f_tt_dmg(2, 25);
         vida_golem -= tt_dmg;
         cout << "Você acerta mais uma vez o golem"<<endl;
         cout << "Você causou " << tt_dmg << " pontos de dano"<<endl;
         cout << " O Golem ficou com " << vida_golem << " pontos de vida" << endl;
         cout << "-------------------------------------------------------------"<< endl;
         break;
         case 'P' :
         system("clear||cls");
         cout << "-------------------------------------------------------------"<< endl;
         cout << "Você corre para a passagem" <<endl;
         sleep(5);
         cout << "Você foi pego em uma armadinha , sua perna ficou presa."<<endl;
         cout << "O Golem parte para cima de você"<<endl;
         tt_dmg = f_tt_dmg(1, 40);
         vida_jogador -= tt_dmg;
         cout << "O Golem te causou : " << tt_dmg << " pontos de dano"<<endl;
         cout << "Você ficou com " << vida_jogador<< " pontos de vida" << endl; 
         break;
         if(vida_jogador <= 0 ){ 
             system("clear||cls");
             sleep(2);
             cout << "Você foi esmagado pelo Golem!" <<endl;
             wait_on_enter();
        system("clear||cls");
             cout << "------------------------------------------------GAME OVER------------------------------------------------" << endl;
             return 0;}}
         if(vida_golem <= 0 ){cout << "------------------------------Parabéns------------------------------"<< endl;
                             cout << "Você derrotou o Golem!" << endl;
                             cout << "Você conseguiu 1 ponto para distribuir nos Atributos!"<<endl;
                             cout << "1 = Vida, 2 = Força , 3 = Mana , 4 = Resistencia ,5 = Inteligencia "<<endl;
                             cout << "Digite o numero para atribuir o ponto: ";
                             cin  >> ponto;
                             switch(ponto) {
                                case 1 : vida_jogador += 20;
                                case 2 : forca_jogador += 20;
                                case 3 : mana_jogador += 30;
                                case 4 : resistencia_jogador += 30;
                                case 5 : inteligencia_jogador += 30;
                                break;
                             }
                             system("clear||cls");
                             cout << "Agora seus atributos são esses: " <<endl;
                             cout <<"Vida: "<< vida_jogador <<endl;
                             cout <<"Força: "<< forca_jogador <<endl;
                             cout <<"Mana: "<< mana_jogador <<endl;
                             cout <<"Resistencia: "<< resistencia_jogador <<endl;
                             cout <<"Inteligencia: "<< inteligencia_jogador <<endl;
    }
    system("clear||cls");
    cout << "-------------------------------------------------------------"<< endl;
    cout << "O Golem foi derrotado e o caminho ficou livre!" << endl;
    cout << "V = Vasculhar o corpo do Golem //// P = Passar pela passagem" << endl;
    cin >> pronto;
    system("clear||cls");
    switch(pronto){
        case 'V' : 
        cout << "Para conseguir vasculhar sua força tem que ser maior que 25 , pois os destroços do Golem são pesados"<< endl;
        cout << "Força atual: " << forca_jogador << endl;
        if(forca_jogador >= 25){
            cout << "-------------------------------------------------------------"<< endl;
            cout << " Sua força foi suficiente e você começou a levantar os pedações de pedra do Golem"<<endl;
            sleep(5);
            cout << "--Algo está brilhando embaixo de todos os destroços--" << endl;
            wait_on_enter;
            cout << "Você encontrou um nucleo e ele esta pulsando uma energia amarela" <<endl;
            sleep(5);
            cout << "Você Colhetou um item do Rank *S*, \nNucleo de BESTA \nDescrição: Um nucleo que possui em seu interior a vontade bestial de um mostro \nSua vontade e força para lutar!" << endl;       
            sleep(8);
            cout << "Mas você não possui conhecimento o suficiente para usa-lo" << endl;
            cout << "-------------------------------------------------------------"<< endl;
            wait_on_enter();
        }
        break;
        
        case 'P' :
        cout << "Você seguiu em frente pela passagem!" << endl;
        break;
    }
    
    cout << "-------------------------------------------------------------"<< endl;
    sleep(5);
    cout << "Seguindo pela passagem você começa a escutar uma voz" << endl;
    sleep(5);
    cout << "Voz misteriosa diz: " << nome_jogador << " você chegou até aqui guerreio, \nMeus Parabens!\nMas infelizmente não irá sair com vida!" << endl;
    sleep(8);
    cout << "Você começou a ficar tonto, seu corpo começou a ficar fraco!" << endl;
    sleep(5);
    cout << "Você caiu!" << endl; 
    sleep(5);
    cout << "Seus olhos começaram a embaçar" << endl; 
    sleep(5);
    cout << "Uma sombra se aproxima de você" << endl;
    sleep(5);
    cout << "Seus olhos se fecham" << endl; 
    cout << "-------------------------------------------------------------"<< endl;
    sleep(8);
    system("clear||cls");
    cout << "Você morreu!" << endl;
    sleep(5);
    system("clear||cls");
    cout << "------------------------------------------------GAME OVER------------------------------------------------" << endl;
    
    
    
    
    cout << "A Versão DEMO acabou , Obrigado por jogar!\nCriado por: Lucas Alixame \nIntuito: Concluir Atividade Proposta pelo professor!";
}}}

