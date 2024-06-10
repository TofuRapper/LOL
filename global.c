#include "global.h"
#include "shapes/Shape.h"
#include <stdbool.h>
// variables for global usage
const double FPS = 60.0;
const int WIDTH = 900;
const int HEIGHT = 672;
int window = 0;
int attack = 300;
int health = 1000;
int score = 0;
int stage = 0;
int t_clock = 0;
int selected_equipment;

ALLEGRO_EVENT_QUEUE *event_queue = NULL;
ALLEGRO_EVENT event;
ALLEGRO_TIMER *fps = NULL;
bool key_state[ALLEGRO_KEY_MAX] = {false};
bool mouse_state[ALLEGRO_MOUSE_MAX_EXTRA_AXES] = {false};
bool over=false;
Point mouse;
bool pause=false;
bool debug_mode = true;
