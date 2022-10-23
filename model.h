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
          d_n("to travel to the city of Botucaiba,",1);
            d("in the interior of São Paulo. You may",2);
            d("be wondering why a teacher from São",3);
        }
        if(selected_language == 1){
          d_n("Botucaiba, interior de São Paulo.Você",1);
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
          d_n("Botucaiba.",1);
            d("São Paulo - Brazil.",2);
            d("",3);
        }
        if(selected_language == 1){
          d_n("Botucaiba.",1);
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
        d_n("Botucaiba.",1);
          d("São Paulo - Brazil.",2);
          d("",3);
      }
      if(selected_language == 1){
        d_n("Botucaiba.",1);
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
            d("Botucaiba?",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Você é uma moradora de",1);
            d("Botucaiba?",2);
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
            d("about Botucaiba.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Eu queria escrever uma",1);
            d("matéria sobre Botucaiba.",2);
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
                        d("In the case of Botucaiba,",1);
            d("By default every residential building",2);
            d("have municipal schools, kindergartners,",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("No caso de Botucaiba, por",1);
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
            h("[ Julia ]",1);
                        d("Look at it as a new case.",1);
            d("",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Julia ]",1);
                        d("Veja isso como um novo",1);
            d("caso.",2);
            d("",3);
        }
    }

    if (d_pointer == 121){
        if(selected_language == 0){
            h("[ Renne ]",1);
                        d("Investigate a city? This",1);
            d("is a new one.",2);
            d("",3);
        }
        if(selected_language == 1){
            h("[ Renne ]",1);
                        d("Investigar uma cidade?",1);
            d("Essa é nova.",2);
            d("",3);
        }
    }




}

#endif

