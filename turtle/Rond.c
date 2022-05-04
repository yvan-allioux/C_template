#include <stdio.h>
#include <stdlib.h>
#include "turtle.h"


void rond(){
  printf("Trace un Rond \n");

  turtle_init(600, 600); // initialise une image de taille 600x600
  // La tortie est au départ placee au centre de l'image
  turtle_pen_up();//lève le stylo de la tortue
  turtle_goto(-150, 150); // amene la tortue en (-150, 150), en haut à gauche, du cadre (600, 600)

  /* debut du trace*/
  turtle_pen_down(); // crayon leve
  //cercle de rayon 50
  turtle_draw_circle(0, 0, 50);
  turtle_pen_up();
  /* fin du trace*/
  turtle_save_bmp("output.bmp");  // Sauve la forme tracee par la tortue


  // pour faire une série d'images *.bmp du tracé
  /*
  turtle_begin_video(30); // 30 est le nombre de pas effectues par la tortue
  turtle_draw_circle(0, 0, 50); // simple tracé de cercle à l'origine
  turtle_save_frame();
  turtle_end_video();*/
  //return EXIT_SUCCESS;
}
