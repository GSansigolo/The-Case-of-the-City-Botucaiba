//imports
#include <jo/jo.h>
#include "neptune.h"
#include "model_formatter.h"
#include "control.h"

//main function
void jo_main(void){

    //init screen
    jo_core_init(JO_COLOR_Black);

    // load font
    my_font = jo_font_load(JO_ROOT_DIR, "FONT.TGA", JO_COLOR_Green, 8, 8, 0, " 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!_?<@',.[]=+`)(*&|$#^~{}:/;>-");

    //draw intro menu
    draw_intro_menu();

    //callbacks
    jo_core_add_callback(controller);


    //run code
    jo_core_run();
}
