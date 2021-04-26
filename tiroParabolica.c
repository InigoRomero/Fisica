#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minilibx/mlx.h"

#define PI 3.1415926535897932384626433832795

/*
gcc minilibx/libmlx.a tiroParabolica.c -framework OpenGL -framework AppKit
*/
typedef struct		s_vars
{
   int presedesq;
}					t_s;
deal_key(t_s *s)
{
	if (s->presedesq == 1)
	{
		system("leaks CUB3D");
		exit(1);
	}
}

int main()
{
   
   void *mlx_ptr = mlx_init();
	void *win_ptr = mlx_new_window(mlx_ptr, 1280, 720, "Tiro Parabolico");

   mlx_hook(s->win_ptr, 2, 0, nopulsed, s);
	mlx_hook(s->win_ptr, 3, 0, pulsed, s);
   mlx_loop(mlx_ptr);
   /*
    double Pos_X_Blanco;
    double Pos_Y_Blanco;
    double Velocidad;
    double Pos_X_Canyon;
    double Pos_Y_Canyon;
    double Angulo;
    double Radianes;
    int intentos;
    int acierto=0;
    double DistanciaY;
    float Gravedad=9.81;
    float RedondeoDistanciaY;
    float RedondeoPosY;
    // Definir variables de inicialización
    Pos_X_Canyon = 0.0;
    Pos_Y_Canyon = 0.0;
    printf("\nPosicion X del blanco.....: ");
    scanf(" %lf",&Pos_X_Blanco);
    printf("Posicion Y del blanco.....: ");
    scanf(" %lf",&Pos_Y_Blanco);
    printf("Velocidad Inicial.........: ");
    scanf(" %lf",&Velocidad);
    // realizar la petición de los intentos
    intentos=0;
    while(intentos<5 && acierto==0)
    {
       printf("Angulo......: ");
       scanf(" %lf",&Angulo);
       Radianes=(Angulo/180.0)*PI;
      // Calculo de la distancia Y
      //DistanciaY=(Velocidad*(sin(Radianes))*Tiempo)-((1/2)*Gravedad*(Tiempo*Tiempo));
      DistanciaY = tan(Radianes)*Pos_X_Blanco-((Gravedad*(Pos_X_Blanco*Pos_X_Blanco))/(2*(Velocidad*Velocidad)*cos(Radianes)*cos(Radianes)));
       // Si la distancia en Y coincide con la pos Y dada
       RedondeoDistanciaY=DistanciaY;
       RedondeoPosY=Pos_Y_Blanco;
       if ( RedondeoPosY+1>= RedondeoDistanciaY && RedondeoPosY-1<=RedondeoDistanciaY ) {
          printf("Has Acertado\n");
          acierto=1;
       }
       intentos++;
    }
    */
}
