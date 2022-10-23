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
#ifndef control
#define control

//dialog pointer
static int start_menu = 1;
static int choice_pause = 0;

//main controller function
void controller(){

    //debug
    //jo_font_printf(my_font, 6, 6, 1.0f, "%d", d_pointer);

    if(start_menu == 1){
        if(selected_language == 0)
            jo_font_printf_centered(my_font, 0, 65, 1.0f, "PRESS START BUTTON");
        if(selected_language == 1)
            jo_font_printf_centered(my_font, 0, 65, 1.0f, "PRESSIONE O START");
        jo_font_printf_centered(my_font, 0, 84, 1.0f, "%s", language);
        jo_font_printf_centered(my_font, 0, 108, 1.0f, "@ Neuromage Studio 2022");
    }

    //main menu
    if (jo_is_pad1_key_down(JO_KEY_START) && start_menu == 1){
        start_menu = 0;
        clear_screen();
        d_pointer = 3149;
        start();
    }

    if (jo_is_pad1_key_down(JO_KEY_LEFT) && start_menu == 1){
        if(selected_language == 0){
            language =  "< Portuguese >";
            selected_language =  1;
        } else {
            language =  "<  English  >";
            selected_language =  0;
        }
    }

    if (jo_is_pad1_key_down(JO_KEY_RIGHT) && start_menu == 1){
        if(selected_language == 0){
            language =  "< Portuguese >";
            selected_language =  1;
        } else {
            language =  "<  English  >";
            selected_language =  0;
        }
    }

    //pointer motion trigger
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0){

        clear_screen();

        d_pointer++;

        //backgrounds

        if (d_pointer == 17){
            clear_screen();
            set_background("CITY1.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 17;
        }

        if (d_pointer == 18){
            clear_screen();
            set_background("CITY6.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 18;
        }

        if (d_pointer == 2062){
            d_pointer = 62;
        }

        if (d_pointer == 3062){
            d_pointer = 62;
        }

        if (d_pointer == 65){
            clear_screen();
            set_background("CITY2.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 65;
        }

        if (d_pointer == 66){
            clear_screen();
            set_background("CITY3.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 66;
        }

        if (d_pointer == 93){
            clear_screen();
            set_background("CITY4.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 93;
        }

        if (d_pointer == 99){
            clear_screen();
            set_background("CITY2.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 99;
        }

        if (d_pointer == 104){
            clear_screen();
            set_background("CITY4.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 104;
        }

        if (d_pointer == 2152){
            d_pointer = 152;
        }

        if (d_pointer == 3152){
            d_pointer = 152;
        }

        if (d_pointer == 152){
            clear_screen();
            set_background("CITY2.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 152;
        }

        if (d_pointer == 164){
            clear_screen();
            set_background("CITY4.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 164;
        }

        //choices
        else if (d_pointer == 33){
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            choice_pause = 1;
        }

        else if (d_pointer == 137){
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            choice_pause = 1;
        }

        if (d_pointer == 164){
            clear_screen();
            set_background("CITY7.TGA", "BG");
            clear_screen();
            //jo_audio_stop_cd();
            //jo_audio_play_cd_track(4, 4, true);
            d_pointer = 164;
        }

        //pointer++

    }

    //choices content
    if (jo_is_pad1_key_down(JO_KEY_B) && d_pointer == 33 && choice_pause == 1){
        //jo_font_printf(my_font, 6, 6, 1.0f, "%d", d_pointer);
        clear_screen();
        //jo_audio_stop_cd();
        //jo_audio_play_cd_track(4, 4, true);
        choice_pause = 0;
        d_pointer = 2034;
    }

    if (jo_is_pad1_key_down(JO_KEY_C) && d_pointer == 33 && choice_pause == 1){
        //jo_font_printf(my_font, 6, 6, 1.0f, "%d", d_pointer);
        clear_screen();
        //jo_audio_stop_cd();
        //jo_audio_play_cd_track(4, 4, true);
        choice_pause = 0;
        d_pointer = 3034;
    }

    if (jo_is_pad1_key_down(JO_KEY_B) && d_pointer == 137 && choice_pause == 1){
        //jo_font_printf(my_font, 6, 6, 1.0f, "%d", d_pointer);
        clear_screen();
        //jo_audio_stop_cd();
        //jo_audio_play_cd_track(4, 4, true);
        choice_pause = 0;
        d_pointer = 2138;
    }

    if (jo_is_pad1_key_down(JO_KEY_C) && d_pointer == 137 && choice_pause == 1){
        //jo_font_printf(my_font, 6, 6, 1.0f, "%d", d_pointer);
        clear_screen();
        //jo_audio_stop_cd();
        //jo_audio_play_cd_track(4, 4, true);
        choice_pause = 0;
        d_pointer = 3138;
    }
}

#endif
