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
#ifndef neptune
#define neptune

static jo_font *my_font;

/**
 * set_background()
 * plot background image
 */
void set_background(char* filename, char* folder){
    jo_img bg;

    bg.data = NULL;
    jo_tga_loader(&bg, folder, filename, JO_COLOR_Green);
    jo_set_background_sprite(&bg, 0, 0);
    jo_free_img(&bg);
}

/**
 * d()
 * draw text on the screen
 */
void d(char* text, int line){
    if (line == 1)
        jo_font_printf(my_font, 90, (23)*7.9, 1.0f, text);
    else
        jo_font_printf(my_font, 12, (21+(2*line))*7.9, 1.0f, text);
}

/**
 * h()
 * draw text on the screen
 */
void h(char* text, int color){
    if (color)
        jo_font_printf(my_font, 12, (23)*7.9, 1.0f, text);
}

/**
 * d_n()
 * draw text on the screen
 */
void d_n(char* text, int line){
    if (line == 1)
        jo_font_printf(my_font, 12, (23)*7.9, 1.0f, text);
    else
        jo_font_printf(my_font, 12, (21+(2*line))*7.9, 1.0f, text);
}

/**
 * clear_screen()
 * clean screen without using jo_clear_screen
 */
void clear_screen() {
  d_n("",1);
    d("",2);
    d("",3);
}

#endif
