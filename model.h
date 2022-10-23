/*-------------------------------------------------------------------------------+
|   ~+         *       +                                                         |
|      '                  |     _   _  ___________ _____ _   _ _   _  _____      |
|  ()    .-.,="``"=.    - o -  | \ | ||  ___| ___ \_   _| | | | \ | ||  ___|     |
|        '=/_       \     |    |  \| || |__ | |_/ / | | | | | |  \| || |__       |
|     *   |  '=._    |         | . ` ||  __||  __/  | | | | | | . ` ||  __|      |
|          \     `=./`,     '  | |\  || |___| |     | | | |_| | |\  || |___      |
|  +    .   '=.__.=' `='   *   \_| \_/\____/\_|     \_/  \___/\_| \_/\____/      |
|                                                              BY: @G_Sansigolo  |
+-------------------------------------------------------------------------------*/
#ifndef model
#define model

typedef void (*dialog_callback)(void);

static int d_pointer = 9999;

static char* language =  "<  English  >";
static int selected_language =  0;

void draw_dialogs(void);
void language_selection(void);
void draw_menu(void);

void draw_intro_menu(void){

    clear_screen();
    set_background("ALERT.TGA", "BG");
    jo_spin_wait(0);

    clear_screen();
    set_background("ALERT.TGA", "BG");
    jo_spin_wait(0);

    clear_screen();
    set_background("TITLE.TGA", "BG");
    //jo_audio_stop_cd();
    //jo_audio_play_cd_track(3, 3, true);
}

void start(void){
    clear_screen();
    set_background("EMAIL.TGA", "BG");
    jo_core_add_callback(draw_dialogs);
    //jo_audio_stop_cd();
    //jo_audio_play_cd_track(4, 4, true);
}

void draw_dialogs(void) {

    if (d_pointer == 0){
        if(selected_language == 0){
          d_n("You are Renne Bras, an ordinary",1);
            d("detective. You entered the business",2);
            d("seven years ago, just after the",3);
        }
        if(selected_language == 1){
          d_n("Você é Renne Bras, uma detetive comum.",1);
            d("Você entrou no negócio há sete anos,",2);
            d("logo após o fim de seu relacionamento",3);
        }
    }

    if (d_pointer == 1){
        if(selected_language == 0){
          d_n("end of your longest relationship. You",1);
            d("became famous for solving the case of",2);
            d("kidnappings in the capital.",3);
        }
        if(selected_language == 1){
          d_n("mais longo. Você se tornou famosa por",1);
            d("resolver o caso de sequestros na",2);
            d("capital.",3);
        }
    }

    if (d_pointer == 2){
        if(selected_language == 0){
          d_n("Months have passed since the case of",1);
            d("the Lighthouse of São Bento do Oeste.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Meses se passaram desde o caso do",1);
            d("Farol de São Bento do Oeste.",2);
            d("",3);
        }
    }

    if (d_pointer == 3){
        if(selected_language == 0){
          d_n("Since then you have become an active",1);
            d("detective in the South Minas region.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Desde então você se tornou uma",1);
            d("detetive atuante na região do Sul de",2);
            d("Minas.",3);
        }
    }

    if (d_pointer == 4){
        if(selected_language == 0){
          d_n("Everything changed when days ago you",1);
            d("received a e-mail from Julia.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Tudo mudou quando há dias você recebeu",1);
            d("um e-mail de Julia.",2);
            d("",3);
        }
    }

    if (d_pointer == 5){
        if(selected_language == 0){
          d_n("Hi Rene,",1);
            d("How long <3",2);
            d("It's me, Julia, sending this email",3);
        }
        if(selected_language == 1){
          d_n("Olá Rene,",1);
            d("Quanto tempo <3",2);
            d("Sou eu, a Julia, envio esse e-mail",3);
        }
    }

    if (d_pointer == 6){
        if(selected_language == 0){
          d_n("to invite you on a trip. It's been",1);
            d("months since we last saw each other",2);
            d("and so I wanted to invite you to",3);
        }
        if(selected_language == 1){
          d_n("para convidá-la para uma viagem.",1);
            d("Faz meses que não nos vemos e por",2);
            d("isso queria convidá-la para passar",3);
        }
    }

    if (d_pointer == 7){
        if(selected_language == 0){
          d_n("spend the vacations together. In case",1);
            d("you don't know, I have become editor",2);
            d("at Sergipe Magazine, famous political",3);
        }
        if(selected_language == 1){
          d_n("as férias juntas. Caso você não saiba,",1);
            d("eu agora me tornei redatora na Revista",2);
            d("Sergipe, uma famosa revista de",3);
        }
    }

    if (d_pointer == 8){
        if(selected_language == 0){
          d_n("magazine in the country. And during",1);
            d("the school vacations at the end of",2);
            d("the year, I decided that I wanted",3);
        }
        if(selected_language == 1){
          d_n("política do país. E durante as férias",1);
            d("escolares  de fim de ano, decidi que",2);
            d("queria viajar para a cidade de",3);
        }
    }

    if (d_pointer == 9){
        if(selected_language == 0){
          d_n("to travel to the city of Botucaíba,",1);
            d("in the interior of São Paulo. You may",2);
            d("be wondering why a teacher from São",3);
        }
        if(selected_language == 1){
          d_n("Botucaíba, interior de São Paulo.Você",1);
            d("deve estar se perguntando por que uma",2);
            d("professora de São Bento do Oeste iria ",3);
        }
    }

    if (d_pointer == 10){
        if(selected_language == 0){
          d_n("Bento do Oeste would want to spend",1);
            d("her vacation in a city in the",2);
            d("interior of São Paulo want to spend",3);
        }
        if(selected_language == 1){
          d_n("querer ir passar as férias em uma",1);
            d("cidade no interior de São Paulo. Para",2);
            d("saber a resposta me procure",3);
        }
    }

    if (d_pointer == 11){
        if(selected_language == 0){
          d_n("her vacation in a town in the",1);
            d("countryside of São Paulo. To know",2);
            d("the answer come to me personally haha.",3);
        }
        if(selected_language == 1){
          d_n("pessoalmente hahaha.",1);
            d("Espero que esse e-mail a encontre",2);
            d("bem!",3);
        }
    }

    if (d_pointer == 12){
        if(selected_language == 0){
          d_n("I hope this e-mail finds you well!",1);
            d("-Julia",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("-Julia",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 13){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("This email didn't find me ",1);
            d("well...why do people write that...",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Esse e-mail não me",1);
            d("encontrou bem... por que as pessoas",2);
            d("escrevem isso..",3);
        }
    }

    if (d_pointer == 14){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Interior of São Paulo...",1);
            d("Why do you want to drag me to these",2);
            d("places.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Interior de São Paulo...",1);
            d("Porque você quer me arrastar para",2);
            d("esses lugares.",3);
        }
    }

    if (d_pointer == 15){
        if(selected_language == 0){
          d_n("You complained for minutes.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você reclamou por minutos.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 16){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Things we do...",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Coisas que fazemos...",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 17){
        if(selected_language == 0){
          d_n("Botucaíba.",1);
            d("São Paulo - Brazil.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Botucaíba.",1);
            d("São Paulo - Brazil.",2);
            d("",3);
        }
    }

    if (d_pointer == 18){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What the hell, four toll",1);
            d("booths?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Que inferno, quatro",1);
            d("pedágios?",2);
            d("",3);
        }
    }

    if (d_pointer == 19){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("How do people get from one",1);
            d("city to another in São Paulo.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Como as pessoas vão de",1);
            d("uma cidade para outra em São Paulo.",2);
            d("",3);
        }
    }

    if (d_pointer == 20){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Anyway, I am here. Now",1);
            d("where is her...",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("De qualquer forma estou",1);
            d("aqui. Agora onde está ela..",2);
            d("",3);
        }
    }

    if (d_pointer == 21){
        if(selected_language == 0){
          d_n("You've been waiting for minutes at",1);
            d("the entrance of the city.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você ficou minutos esperando na",1);
            d("entrada da cidade.",2);
            d("",3);
        }
    }

    if (d_pointer == 22){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Juliaaaaaaa!",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Juliaaaaaaa!",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 23){
        if(selected_language == 0){
          d_n("You shouted.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você gritou.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 24){
        if(selected_language == 0){
          d_n("Some people looked at you.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Algumas pessoas olharam para você.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 25){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Where is that woman?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Onde está aquela mulher.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 26){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Am I forgetting something?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Eu estou esquecendo alguma",1);
            d(" coisa?",2);
            d("",3);
        }
    }

    if (d_pointer == 27){
        if(selected_language == 0){
          d_n("You remembered that in the e-mail she",1);
            d("didn't say she'd wait for you at the",2);
            d("entrance of the city.",3);
        }
        if(selected_language == 1){
          d_n("Você se lembrou que no e-mail ela não",1);
            d("disse que esperaria você na entrada",2);
            d("da cidade.",3);
        }
    }

    if (d_pointer == 28){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Damn it.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Droga.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 29){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("There's no reason for me",1);
            d("to stay in the car in the driveway.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Não tem motivo para eu",1);
            d("ficar dentro do carro na entrada da",2);
            d("cidade.",3);
        }
    }

    if (d_pointer == 30){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("This isn't a big city, I'll",1);
            d("go find her on foot.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Essa não é uma cidade",1);
            d("grande, vou procurar ela a pé.",2);
            d("",3);
        }
    }

    if (d_pointer == 31){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Let me find a place to",1);
            d("park.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Deixa eu encontrar um",1);
            d("lugar para estacionar.",2);
            d("",3);
        }
    }

    if (d_pointer == 32){
        if(selected_language == 0){
          d_n("Minutes later.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Minutos depois.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 33){
        if(selected_language == 0){
          d_n("What do you want to do?",1);
            d("  Press B to ask anyone about Julia",2);
            d("  Press C to walk down the avenue",3);
        }
        if(selected_language == 1){
          d_n("O que você quer fazer",1);
            d("  Aperte B para perguntar da Julia",2);
            d("  Aperte C para caminhar pela avenida",3);
        }
    }

    // QUESTION

    if (d_pointer == 2034){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Ei você!",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Hey you!",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2035){
        if(selected_language == 0){
            h("[ Rafael ]",1);
                        d(" Oi.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Rafael ]",1);
                        d(" Hello.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2036){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Eu quero perguntar pra",1);
            d("você uma coisa.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("I want to ask you",1);
            d("something.",2);
            d("",3);
        }
    }

    if (d_pointer == 2037){
        if(selected_language == 0){
            h("[ Rafael ]",1);
                        d(" Sure, what?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Rafael ]",1);
                        d(" Claro, o que?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2038){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Have you seen a woman from",1);
            d("Minas Gerais with long black hair,",2);
            d("blue suit around here?",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você viu uma mulher",1);
            d("mineira de cabelos longos preto, terno",2);
            d("azul por aqui?",3);
        }
    }

    if (d_pointer == 2039){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("She was a tourist,",1);
            d("probably asking directions.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Ela era uma turista,",1);
            d("provavelmente estava perguntando",2);
            d("direção.",3);
        }
    }

    if (d_pointer == 2040){
        if(selected_language == 0){
            h("[ Rafael ]",1);
                        d(" Not that I remember.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Rafael ]",1);
                        d(" Não que eu me lembre.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2041){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("No problem. Thanks for the",1);
            d("help.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Tudo bem. Obrigado pela",1);
            d("ajuda.",2);
            d("",3);
        }
    }

    if (d_pointer == 2042){
        if(selected_language == 0){
          d_n("You kept looking for people.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você continuou a procurar por pessoas.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2043){
        if(selected_language == 0){
          d_n("Minutes later.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Minutos depois.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2044){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Hey you on the bike.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Ei você na bicicleta.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2045){
        if(selected_language == 0){
            h("[ Flavio ]",1);
                        d(" Me?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Flavio ]",1);
                        d(" Eu?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2046){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Yes, wait, I need some",1);
            d("information.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Sim, espere, eu preciso de",1);
            d("uma informação.",2);
            d("",3);
        }
    }

    if (d_pointer == 2047){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Are you from around the",1);
            d("city?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você é daqui da cidade?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2048){
        if(selected_language == 0){
            h("[ Flavio ]",1);
                        d(" Yes, I am. I moved here a",1);
            d("year ago.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Flavio ]",1);
                        d(" Sim sou. Me mudei a um",1);
            d("ano.",2);
            d("",3);
        }
    }

    if (d_pointer == 2049){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Have you seen a woman from",1);
            d("Minas Gerais with long black hair,",2);
            d("blue suit around here?",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você viu uma mulher",1);
            d("mineira de cabelos longos preto, terno",2);
            d("azul por aqui?",3);
        }
    }

    if (d_pointer == 2050){
        if(selected_language == 0){
            h("[ Flavio ]",1);
                        d(" Sorry I haven't.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Flavio ]",1);
                        d(" Desculpe eu não vi.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2051){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("That sucks.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Que droga.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2052){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Can you tell me where the",1);
            d("tourists who visit the city usually",2);
            d("go?",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você sabe me dizer para",1);
            d("onde os turistas que visitam a cidade",2);
            d("costumam ir?",3);
        }
    }

    if (d_pointer == 2053){
        if(selected_language == 0){
            h("[ Flavio ]",1);
                        d(" No.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Flavio ]",1);
                        d(" Não.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2054){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("No what? Can't you tell?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Não o que? Não pode dizer?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2055){
        if(selected_language == 0){
            h("[ Flavio ]",1);
                        d(" People don't see the city.",1);
            d("There are other cities, nobody comes",2);
            d("to this city for tourism.",3);
        }
        if(selected_language == 1){
            h("[ Flavio ]",1);
                        d(" As pessoas não veem a",1);
            d("cidade. Existem outras cidade, ninguém",2);
            d("vem para essa cidade a turismo.",3);
        }
    }

    if (d_pointer == 2056){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("My friend did. That's why",1);
            d("I'm looking for her.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Minha amiga veio. Foi por",1);
            d("isso que estou procurando ela.",2);
            d("",3);
        }
    }

    if (d_pointer == 2057){
        if(selected_language == 0){
            h("[ Flavio ]",1);
                        d(" I doubt that is the reason.",1);
            d("Anyway, have a good time.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Flavio ]",1);
                        d(" Eu duvido que esse seja o",1);
            d("motivo. De qualquer forma, passar bem.",2);
            d("",3);
        }
    }

    if (d_pointer == 2058){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Have a good time.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Passar bem.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2059){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What a strange conversation.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Que conversa estranha.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2060){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Let's get going.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Vamos andando.",1);
            d("",2);
            d("",3);
        }
    }

    // KEEP WALKING

    if (d_pointer == 3034){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Let's get going then.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Vamos andando então.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3035){
        if(selected_language == 0){
          d_n("As you walked down the avenue you",1);
            d("noticed something.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Enquanto você andava pela avenida",1);
            d("você notou uma coisa.",2);
            d("",3);
        }
    }

    if (d_pointer == 3036){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("There were very few cars",1);
            d("circulating on the streets.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Haviam pouquíssimos carros",1);
            d("circulando nas ruas.",2);
            d("",3);
        }
    }

    if (d_pointer == 3037){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Strange.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Estranho.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3038){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("After walking almost a",1);
            d("kilometer you spotted something that",2);
            d("caught your attention.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Depois de andar quase um",1);
            d("quilômetro você avistou uma coisa que",2);
            d("chamou sua atenção.",3);
        }
    }

    if (d_pointer == 3039){
        if(selected_language == 0){
          d_n("A sign with the words, 'Come and",1);
            d("live in Butucaíba'.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Uma placa com os dizerem, 'venham",1);
            d("morar em Butucaíba.'.",2);
            d("",3);
        }
    }

    if (d_pointer == 3040){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("A policy to invite people",1);
            d("to live in the city?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Uma política para convidar",1);
            d("pessoas a morar na cidade?",2);
            d("",3);
        }
    }

    if (d_pointer == 3041){
        if(selected_language == 0){
          d_n("I noticed that this city is a bit",1);
            d("empty, yet they notice this on a sign.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Eu notei que essa cidade é um pouco",1);
            d("vazia, porém noticiar isso em uma",2);
            d("placa.",3);
        }
    }

    if (d_pointer == 3042){
        if(selected_language == 0){
          d_n("After a few minutes you decided to",1);
            d("stop and rest a bit.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Depois de minutos você decidiu parar",1);
            d("para descansar um pouco.",2);
            d("",3);
        }
    }

    if (d_pointer == 3043){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I don't have the body that",1);
            d("I used to have.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Eu não tenho o físico que",1);
            d("eu costumava ter.",2);
            d("",3);
        }
    }

    if (d_pointer == 3044){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("As soon as I get back to",1);
            d("Minas Gerais I will go back to the",2);
            d("gym.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Assim que voltar para",1);
            d("Minas Gerais eu vou voltar a",2);
            d("academia.",3);
        }
    }

    if (d_pointer == 3045){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("This is a promise.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Isso é uma promessa.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3046){
        if(selected_language == 0){
          d_n("After a few minutes of resting you",1);
            d("got up and continued walking down",2);
            d("the avenue.",3);
        }
        if(selected_language == 1){
          d_n("Depois de fica minutos descansando",1);
            d("você se levantou e continuou andando",2);
            d("na avenida.",3);
        }
    }

    if (d_pointer == 3047){
        if(selected_language == 0){
          d_n("Walking down the avenue made you",1);
            d("think of Julia.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Andar pela avenida fez você pensar",1);
            d("na Julia.",2);
            d("",3);
        }
    }

    if (d_pointer == 3048){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("This city looks normal, ",1);
            d("sparsely populated town, why Julia",2);
            d("would come here on vacation.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Essa cidade parece normal,",1);
            d("pouco habitada, por que a Julia",2);
            d("viria passar as férias aqui.",3);
        }
    }

    if (d_pointer == 3049){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("There is some motivation",1);
            d("of Julia's that I don't see yet.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Tem alguma motivação da",1);
            d("Julia que ainda não estou vendo.",2);
            d("",3);
        }
    }

    if (d_pointer == 3050){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("If she wants to come then",1);
            d("there is something here.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Se ela quis vir então tem",1);
            d("algo aqui.",2);
            d("",3);
        }
    }

    if (d_pointer == 3051){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("But I don't see it.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Porém eu não estou vendo.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3052){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("If it is something that",1);
            d("I don't see yet.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Se que é algo que eu ainda ",1);
            d("não estou vendo.",2);
            d("",3);
        }
    }

    if (d_pointer == 3053){
        if(selected_language == 0){
          d_n("You started to look in detail at the",1);
            d("city, looking for something that",2);
            d("caught your eye.",3);
        }
        if(selected_language == 1){
          d_n("Você começou a observar com detalhes",1);
            d("a cidade, procurando por algo que",2);
            d("chamasse atenção.",3);
        }
    }

    if (d_pointer == 3054){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("It's not a historical",1);
            d("city, like some cities in Minas",2);
            d("Gerais.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Não é uma cidade histórica,",1);
            d("como algumas cidades de minas gerais. ",2);
            d("",3);
        }
    }

    if (d_pointer == 3055){
        if(selected_language == 0){
          d_n("Julia was a history teacher. She",1);
            d("loves to visit places she studies.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Julia era uma professora de historia.",1);
            d("Ela adora visitar lugares que ela",2);
            d("estuda.",3);
        }
    }

    if (d_pointer == 3056){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I wonder if she is...",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Será que ela está...",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3057){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I wonder if she is...",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Será que ela está...",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3058){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Think Renne.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Pense Renne.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3059){
        if(selected_language == 0){
          d_n("You couldn't think of anything.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você não conseguiu pensar em nada.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3060){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Damn it.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Droga.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3061){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Let's keep moving.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Vamos continuar andando.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 62){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Tem alguma coisa",1);
            d("acontecendo com essa cidade.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("There is something going",1);
            d("on with this city.",2);
            d("",3);
        }
    }

    if (d_pointer == 63){
        if(selected_language == 0){
          d_n("You noticed that at the end of the",1);
            d("avenue, on the left side there was a",2);
            d(" hill. It hid one side of the city. ",3);
        }
        if(selected_language == 1){
          d_n("Você observou que ao final da avenida,",1);
            d("no lado esquerdo havia uma colina.",2);
            d("Ela escondia um dos lados da cidade.",3);
        }
    }

    if (d_pointer == 64){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What's in there?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("O que tem ali?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 65){
      if(selected_language == 0){
        d_n("Botucaíba.",1);
          d("São Paulo - Brazil.",2);
          d("",3);
      }
      if(selected_language == 1){
        d_n("Botucaíba.",1);
          d("São Paulo - Brasil.",2);
          d("",3);
      }
    }

    if (d_pointer == 66){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What is this!?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("O que é isso!?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 67){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("A city inside a valley.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Uma cidade dentro de um",1);
            d(" vale.",2);
            d("",3);
        }
    }

    if (d_pointer == 68){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I need to find someone, I",1);
            d("have so many questions.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Preciso encontrar alguém,",1);
            d("tenho tantas perguntas.",2);
            d("",3);
        }
    }

    if (d_pointer == 69){
        if(selected_language == 0){
          d_n("After a few minutes you found someone.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Depois de minutos você encontrou ",1);
            d("alguém.",2);
            d("",3);
        }
    }

    if (d_pointer == 70){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Hi, how are you?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Oi, tudo bem?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 71){
        if(selected_language == 0){
            h("[ Carol ]",1);
                        d("Hello. Yes, I'm fine!",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Carol ]",1);
                        d("Oie. Tudo sim!",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 72){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Are you a resident of",1);
            d("Botucaíba?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você é uma moradora de",1);
            d("Botucaíba?",2);
            d("",3);
        }
    }

    if (d_pointer == 73){
        if(selected_language == 0){
            h("[ Carol ]",1);
                        d("Yes, I live in jardim",1);
            d("horizonte.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Sim, eu moro no jardim",1);
            d("horizonte.",2);
            d("",3);
        }
    }

    if (d_pointer == 74){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Where is jardim horizonte?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Onde é jardim horizonte?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 75){
        if(selected_language == 0){
            h("[ Carol ]",1);
                        d("There.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Carol ]",1);
                        d("Ali.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 76){
        if(selected_language == 0){
            h("[ Carol ]",1);
                        d("Where you come from.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Carol ]",1);
                        d("De onde você veio.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 77){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("There?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Lá?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 78){
        if(selected_language == 0){
          d_n("You pointed to the avenue you walked",1);
            d("down.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você apontou para a avenida que você ",1);
            d("percorreu.",2);
            d("",3);
        }
    }

    if (d_pointer == 79){
        if(selected_language == 0){
            h("[ Carol ]",1);
                        d("Yes, that's the ",1);
            d("neighborhood of Jardim horizonte.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Carol ]",1);
                        d("Sim, lá é bairro jardim",1);
            d("horizonte.",2);
            d("",3);
        }
    }

    if (d_pointer == 80){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Got it.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Entendi.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 81){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("And what's over there.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("E o que sobre ali.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 82){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What's in there?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("O que tem ali?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 83){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("You pointed to the city",1);
            d("inside the valley.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você apontou para a",1);
            d("cidade dentro do vale.",2);
            d("",3);
        }
    }

    if (d_pointer == 84){
        if(selected_language == 0){
            h("[ Carol ]",1);
                        d("That's the new",1);
            d("neighborhood.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Carol ]",1);
                        d("Lá é o bairro novo.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 85){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Why this new one?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Por que esse novo?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 86){
        if(selected_language == 0){
            h("[ Carol ]",1);
                        d("That's a complicated",1);
            d("question, I came to the city a month",2);
            d("ago. I don't know much about it.",3);
        }
        if(selected_language == 1){
            h("[ Carol ]",1);
                        d("Essa é um pergunta",1);
            d("complicada, eu vim para a cidade faz",2);
            d("um mês. Não conheço muito sobre ela.",3);
        }
    }

    if (d_pointer == 87){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("That's fine, thank you.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Tudo bem, obrigado.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 88){
        if(selected_language == 0){
            h("[ Carol ]",1);
                        d("You are welcome.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Carol ]",1);
                        d("De nada.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 89){
        if(selected_language == 0){
          d_n("You have been sitting for minutes",1);
            d("looking at the city.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você ficou minutos sentada olhando",1);
            d(" para a cidade.",2);
            d("",3);
        }
    }

    if (d_pointer == 90){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("This city inside the",1);
            d("valley created a thousand doubts in",2);
            d("my head.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Essa cidade dentro do",1);
            d("vale criou mil dúvidas na minha",2);
            d("cabeça.",3);
        }
    }

    if (d_pointer == 91){
        if(selected_language == 0){
            h("[ ???? ]",1);
                        d("Mine too.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ ???? ]",1);
                        d("Na minha também.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 92){
        if(selected_language == 0){
          d_n("Exclaimed a familiar voice.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Exclamou uma voz famílias.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 93){
        if(selected_language == 0){
          d_n("Julia approached from the new",1);
            d("neighborhood.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("A Julia se aproximou vindo do bairro",1);
            d("novo.",2);
            d("",3);
        }
    }

    if (d_pointer == 94){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Julia!",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Julia!",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 95){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Long time no see!",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("A quanto tempo.!",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 96){
        if(selected_language == 0){
          d_n("Julia hugged you.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Julia abraçou você.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 97){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I was looking for you.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Eu estava procurando você.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 98){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("I was in the new",1);
            d("neighborhood, I was there all day.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Eu estava no bairro novo,",1);
            d("fiquei lá o dia todo.",2);
            d("",3);
        }
    }

    if (d_pointer == 99){
        if(selected_language == 0){
          d_n("Julia turned toward the city.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Julia se virou em direção da cidade.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 100){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("It's beautiful isn't it?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("A cidade é linda não é?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 101){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Yes, it looks like a",1);
            d("forest because of the amount of trees.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Sim, parece uma floresta",1);
            d("pela quantidade de árvores.",2);
            d("",3);
        }
    }

    if (d_pointer == 102){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("And yet there are dozens",1);
            d("of buildings.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("E mesmo assim tem dezenas",1);
            d("de prédios.",2);
            d("",3);
        }
    }

    if (d_pointer == 103){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("How come I never heard",1);
            d("about this place?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Porque eu nunca ouvi",1);
            d("desse lugar?",2);
            d("",3);
        }
    }

    if (d_pointer == 104){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("That's the question that",1);
            d("made me come here.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Essa é a pergunta que me",1);
            d("fez vir até aqui.",2);
            d("",3);
        }
    }

    if (d_pointer == 105){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("As I told you, I became",1);
            d("a editor for the Sergipe Magazine.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Como eu disse para você,",1);
            d("eu virei redatora na Revista Sergipe.",2);
            d("",3);
        }
    }

    if (d_pointer == 106){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("I wanted to write a story",1);
            d("about Botucaíba.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Eu queria escrever uma",1);
            d("matéria sobre Botucaíba.",2);
            d("",3);
        }
    }

    if (d_pointer == 107){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("The first large-scale",1);
            d("healthier city project in Brazil.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("O primeiro projeto larga",1);
            d("escala de cidade habitável do Brasil.",2);
            d("",3);
        }
    }

    if (d_pointer == 108){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Healthier city?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Cidade habitável?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 109){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Yes, a city designed",1);
            d("exclusively for this purpose.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Sim, uma cidade projetada",1);
            d("exclusivamente para esse propósito.",2);
            d("",3);
        }
    }

    if (d_pointer == 110){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("In the case of Botucaíba,",1);
            d("By default every residential building",2);
            d("have municipal schools, kindergartners,",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("No caso de Botucaíba, por",1);
            d("padrão todos edifícios residenciais",2);
            d("têm escolas municipais, creches,",3);
        }
    }

    if (d_pointer == 111){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("clinics, shoping centers",1);
            d("in 15 min walking distance from the",2);
            d("house. ",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("hospitais, shopings em",1);
            d("15 min a pé da casa. ",2);
            d(" ",3);
        }
    }

    if (d_pointer == 112){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("And the residential areas",1);
            d("have a lot of greenery.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("E as áreas residenciais",1);
            d("têm muito verde.",2);
            d("",3);
        }
    }

    if (d_pointer == 113){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Every housing unit perfect",1);
            d("planning.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Cada unidade de alojamento",1);
            d("planejada perfeitamente.",2);
            d("",3);
        }
    }

    if (d_pointer == 114){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("This sounds like a dream,",1);
            d("everything important nearby within",2);
            d("walking distance.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Isso parece um sonho, tudo",1);
            d("de importante próximo a pé.",2);
            d("",3);
        }
    }

    if (d_pointer == 115){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("It is real, they exist,",1);
            d("In the past, in the present, and",2);
            d("hopefully more in the future.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Elas são reais, elas",1);
            d("existem. No passado, no presente e,",2);
            d("espero que mais, no futuro.",3);
        }
    }

    if (d_pointer == 116){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Now I want to know even",1);
            d("more why this is not so well known.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Agora eu quero ainda mais",1);
            d("saber por que não é tão conhecida.",2);
            d("",3);
        }
    }

    if (d_pointer == 117){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Why there is no",1);
            d("documentary on Sunday evening TV",2);
            d("about this city.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Porque não tem um",1);
            d("documentário na TV domingo falando",2);
            d("sobre essa cidade.",3);
        }
    }

    if (d_pointer == 118){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("The answer to this",1);
            d("question is what I am looking for.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("A resposta dessa pergunta",1);
            d("é o que eu estou procurando.",2);
            d("",3);
        }
    }

    if (d_pointer == 119){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("That is why I called you.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Foi por isso que eu chamei",1);
            d("você.",2);
            d("",3);
        }
    }

    if (d_pointer == 120){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("This is a special case,",1);
            d("we will need to solve it without",2);
            d("talking to people.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Esse é um caso especial,",1);
            d("vamos precisar resolvê-lo sem",2);
            d("conversar com pessoas.",3);
        }
    }

    if (d_pointer == 121){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Why?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Por quê?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 122){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Because we are in a",1);
            d("difficult situation, it is as if we",2);
            d("are the only witnesses.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Porque estamos em uma",1);
            d("situação difícil, é como se nós",2);
            d("fôssemos as únicas testemunhas.",3);
        }
    }

    if (d_pointer == 123){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("What do you mean, the only",1);
            d("witnesses?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Como assim únicas",1);
            d("testemunhas?",2);
            d("",3);
        }
    }

    if (d_pointer == 124){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I'll explain.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Eu explico.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 125){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("People from the outside",1);
            d("don't know about this city for some",2);
            d("reason.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("As pessoas de fora não",1);
            d("sabem dessa cidade por alguma razão.",2);
            d("",3);
        }
    }

    if (d_pointer == 126){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("The residents of this city",1);
            d("are not going to help us solve this",2);
            d("case, because they live here, so they",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Os moradores desta cidade não",1);
            d("vão nos ajudar a resolver este caso,",2);
            d("pois eles vivem aqui e por isso não",3);
        }
    }

    if (d_pointer == 127){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("are not people who don't",1);
            d("know the city.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("são pessoas que não",1);
            d("conhecem a cidade.",2);
            d("",3);
        }
    }

    if (d_pointer == 128){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("It is the same as",1);
            d("interviewing a witness from a city",2);
            d("about a robbery in the city.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("É  o mesmo que entrevistar",1);
            d("uma testemunha de uma cidade sobre um",2);
            d("assalto na cidade.",3);
        }
    }

    if (d_pointer == 129){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("I get it. There is nobody",1);
            d("here who doesn't know the city.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Entendi. Não tem ninguém",1);
            d("aqui que não conhece a cidade.",2);
            d("",3);
        }
    }

    if (d_pointer == 130){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Exactly, that's why we are",1);
            d("alone in this.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Exato, é por isso que",1);
            d("estamos sozinhas nessa.",2);
            d("",3);
        }
    }

    if (d_pointer == 131){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Let's put the pieces",1);
            d("together, what do we know so far?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Vamos juntar as peças, o",1);
            d("que nós sabemos até agora?",2);
            d("",3);
        }
    }

    if (d_pointer == 132){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("How do you know about the",1);
            d("city?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Como você sobre da cidade?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 133){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("By searching for healthier",1);
            d("cities. I found an articleof the",2);
            d("the time announced the project.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Pesquisando por cidades",1);
            d("habitável. Eu encontrei uma matéria",2);
            d("da época que noticiava o projeto.",3);
        }
    }

    if (d_pointer == 134){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("The project? There was no",1);
            d("article about the end?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("O projeto? Não tinha",1);
            d("matéria sobre o término?",2);
            d("",3);
        }
    }

    if (d_pointer == 135){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("No, and I looked hard.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Não, e eu procurei",1);
            d("bastante.",2);
            d("",3);
        }
    }

    if (d_pointer == 136){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("This is a strong clue.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Isso é uma pista forte.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 137){
        if(selected_language == 0){
          d_n("What do you want to do?",1);
            d("  Press B to ask about industrias",2);
            d("  Press C to ask about the mayor",3);
        }
        if(selected_language == 1){
          d_n("O que você quer fazer",1);
            d("  Aperte B perguntar sobre industrias",2);
            d("  Aperte C perguntas sobre o prefeito",3);
        }
    }

    // INDUSTRY

    if (d_pointer == 2138){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What do you know about",1);
            d("the industry in the region?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("O que você sabe sobre a",1);
            d("indústria na região?",2);
            d("",3);
        }
    }

    if (d_pointer == 2139){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("It's pretty normal, a few",1);
            d("big factories here and there, but",2);
            d("that's about it.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Ela é bem normal, algumas",1);
            d("fábricas grandes aqui e ali, mas só",2);
            d("isso.",3);
        }
    }

    if (d_pointer == 2140){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What kind of factories?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Que tipos de fábricas?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2141){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("To the east is a paper",1);
            d("company, to the west is a candy",2);
            d("factory.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("A leste temos fabrica de",1);
            d("papel, a oeste tem fabrica de doces.",2);
            d("",3);
        }
    }

    if (d_pointer == 2142){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("To the north we have a",1);
            d("Wolff automobile factory, and to the",2);
            d("south we have a technology park.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Ao norte tem uma fábrica",1);
            d("de automóveis Wolff, e a sul tem um",2);
            d("parque tecnológico.",3);
        }
    }

    if (d_pointer == 2143){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Two of these four don't",1);
            d("seem to have any interference at",2);
            d("first.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Duas dessas quatro não",1);
            d("parecem ter nenhuma interferência a",2);
            d("princípio.",3);
        }
    }

    if (d_pointer == 2144){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("But I dare say that even",1);
            d("they do.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Porém eu ouso dizer que",1);
            d("mesmo elas tem.",2);
            d("",3);
        }
    }

    if (d_pointer == 2145){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Elaborate.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Elabore.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2146){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("First. When was the",1);
            d("article you read about?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Primeiro. De quando era",1);
            d("a matéria que você leu?",2);
            d("",3);
        }
    }

    if (d_pointer == 2147){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("August 2000.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Agosto de 2000.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 2148){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I see. So the new",1);
            d("neighborhood has been here for twenty",2);
            d("years.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Entendi. Então o bairro",1);
            d("novo está aqui a vinte anos. ",2);
            d("",3);
        }
    }

    if (d_pointer == 2149){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I bet you that three of",1);
            d("these four factories you mentioned",2);
            d("are from before 2000.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Eu aposto com você que",1);
            d("três dessas quatro fábricas que você",2);
            d("citou são de antes de 2000.",3);
        }
    }

    if (d_pointer == 2150){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("They all are. When I did",1);
            d("the data collection for the article,",2);
            d("I looked for industries in the area.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Todas são. Quando fiz o",1);
            d("levantamento de dados do artigo,",2);
            d("procurei por indústrias da região.",3);
        }
    }

    if (d_pointer == 2151){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I get it.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Entendi.",1);
            d("",2);
            d("",3);
        }
    }

    // MAYOR

    if (d_pointer == 3138){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What do you know about",1);
            d("the mayor of the city?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("O que você sabe sobre ao",1);
            d("prefeito da cidade?",2);
            d("",3);
        }
    }

    if (d_pointer == 3139){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("He is normal, leadership",1);
            d("of an affordable housing movement,",2);
            d("was in power for 8 years.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Ele é normal, liderança um",1);
            d("movimento de moradias populares,",2);
            d("ficou no poder por 8 anos.",3);
        }
    }

    if (d_pointer == 3140){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Interesting. Do you",1);
            d("have this kind of politician a lot in",2);
            d("the region?",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Interessante. Esse tipo",1);
            d("de político tem muito na região?",2);
            d("",3);
        }
    }

    if (d_pointer == 3141){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("No, the interior of São",1);
            d("Paulo doesn't usually have politicians",2);
            d("like this.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Não, o interior de São",1);
            d("Paulo não costumo ter políticos assim.",2);
            d("",3);
        }
    }

    if (d_pointer == 3142){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("For example, all the",1);
            d("neighboring cities have mayors coming",2);
            d("from the industry.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Por exemplo, todas as",1);
            d("cidades vizinhas têm prefeitos vindos",2);
            d("da indústria.",3);
        }
    }

    if (d_pointer == 3143){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("From automobile with Wolff,",1);
            d("there are paper companies and candy",2);
            d("companies.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Desde automobilística com",1);
            d("a Wolff, há empresas de papel e",2);
            d("empresas de doce.",3);
        }
    }

    if (d_pointer == 3144){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("There is also a",1);
            d("scientific pole to the south, with a",2);
            d("technology park.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Também tem um polo",1);
            d("científico ao sul, com um parque",2);
            d("tecnológico.",3);
        }
    }

    if (d_pointer == 3145){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I can think of something",1);
            d("that connects all the leaderships in",2);
            d(" the region.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Consigo pensar um uma",1);
            d("coisa que conecta todas as lideranças",2);
            d("da região.",3);
        }
    }

    if (d_pointer == 3146){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Elaborate.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Elabore.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3147){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("First. When was the",1);
            d("article you read about?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Primeiro. De quando era",1);
            d("a matéria que você leu?",2);
            d("",3);
        }
    }

    if (d_pointer == 3148){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("August 2000.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Agosto de 2000.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3149){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("That means that this city",1);
            d("has been slowly forgotten for twenty",2);
            d("years.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Isso significa que tem",1);
            d("vinte anos que essa cidade está sendo",2);
            d("vagarosamente esquecida.",3);
        }
    }

    if (d_pointer == 3150){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("So it seems.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Parece que sim.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 3151){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I am starting to connect",1);
            d("things.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Estou começando a conectar",1);
            d("os pontos.",2);
            d("",3);
        }
    }

    if (d_pointer == 152){
        if(selected_language == 0){
          d_n("You turned toward the city.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você se virou para a cidade.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 153){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I have so many theories.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Eu tenho tantas teorias.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 154){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Julia, I think we are very",1);
            d("close to the answer.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Julia eu acho que estamos",1);
            d("muito perto da resposta.",2);
            d("",3);
        }
    }

    if (d_pointer == 155){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("What we can't see.",1);
            d("close to the answer.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("O que não estamos",1);
            d("conseguindo ver.",2);
            d("",3);
        }
    }

    if (d_pointer == 156){
        if(selected_language == 0){
          d_n("You and Julia stared at the horizon",1);
            d("for minutes.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você e Julia ficaram observando o",1);
            d("horizonte por minutos.",2);
            d("",3);
        }
    }

    if (d_pointer == 157){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("If it weren't for São",1);
            d("Bento do Oeste and everything I've",2);
            d("built there.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Se não fosse por São",1);
            d("Bento do Oeste e tudo que construí",2);
            d("lá.",3);
        }
    }

    if (d_pointer == 158){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("I would love to live here.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Eu adoraria morar aqui.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 159){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Me too. It's a very unique",1);
            d("city. And I could still live near you",2);
            d("again.",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Eu também. É uma cidade",1);
            d("muito única. E eu ainda poderia morar",2);
            d("perto de você de novo.",3);
        }
    }

    if (d_pointer == 160){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Maybe there aren't more",1);
            d("like it all over Brazil.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Quem sabe não existam",1);
            d("mais como essa o Brazil a dentro.",2);
            d("",3);
        }
    }

    if (d_pointer == 161){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Maybe.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Quem sabe.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 162){
        if(selected_language == 0){
          d_n("You and Julia spent minutes talking",1);
            d("about life.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você e Julia ficaram minutos",1);
            d("conversando sobre a vida.",2);
            d("",3);
        }
    }

    if (d_pointer == 163){
        if(selected_language == 0){
          d_n("Until..",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Até que..",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 164){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Julia what is that?",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Julia o que é aquilo?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 165){
        if(selected_language == 0){
          d_n("You pointed to a building in the city.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Você apontou para um prédio da cidade.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 166){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("It is a commercial",1);
            d("building.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("É um prédio comercial. ",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 167){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("So in addition to",1);
            d("everything you said there are jobs",2);
            d("near the houses?",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Então além de tudo que",1);
            d("você falou próximo das moradias tem",2);
            d("trabalho próximo?",3);
        }
    }

    if (d_pointer == 168){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Yes, that is one of the",1);
            d("main points of this city model.",2);
            d("Having work within a 15-minute walk.",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Sim, essa é um dos",1);
            d("principais pontos desse modelo de",2);
            d("cidade. O trabalho ficar 15 min a pá.",3);
        }
    }

    if (d_pointer == 169){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("I need to see more about",1);
            d("this.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Eu preciso ver mais sobre",1);
            d("isso.",2);
            d("",3);
        }
    }

    if (d_pointer == 170){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("You were in the city,",1);
            d("right?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você estava na cidade né?",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 171){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Yes, I was",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Sim, eu estava.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 172){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Did you take pictures? I",1);
            d("wanted to see some pictures.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você tirou fotos? Eu",1);
            d("queria ver algumas fotos.",2);
            d("",3);
        }
    }

    if (d_pointer == 173){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Sure.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Claro.",1);
            d("",2);
            d("",3);
        }
    }

    if (d_pointer == 174){
        if(selected_language == 0){
            h("[ Julia ]",1);
                        d("Sure.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Claro.",1);
            d("",2);
            d("",3);
        }
    }


}

#endif

