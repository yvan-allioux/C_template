#include <stdio.h>
#include <stdlib.h>
#include "turtle.h"


void rectangle(){
  printf("Trace un rectangle \n");

  turtle_init(600, 600); // initialise une image de taille 600x600
  // La tortie est au départ placee au centre de l'image
  turtle_pen_up();//lève le stylo de la tortue
  turtle_goto(-150, 150); // amene la tortue en (-150, 150), en haut à gauche, du cadre (600, 600)

  /* debut du trace*/
  turtle_pen_down(); // crayon leve
  turtle_forward(120); // avance de 120 pas vers la droite
  // au depart la tortue est orientée vers la droite
  turtle_turn_right(90); // tourne à droite de 90 degrés
  turtle_forward(60);
  turtle_turn_right(90);
  turtle_forward(120);
  turtle_turn_right(90);
  turtle_forward(60);
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
