#include "dusk.h"
#include "scenes.h"

#define NUM_DEMOS 2

int main() {
    dusk_init_all();

    Scene demos[NUM_DEMOS] = {
        fountain_scene,
        logo_scene,
    };
    int demo_ix = 0;

    dusk_scene_set(demos[demo_ix]);

    while (TRUE) {
        key_poll(); // update input
        if (key_hit(KEY_START)) {
            demo_ix = (++demo_ix) % NUM_DEMOS;
            dusk_scene_set(demos[demo_ix]);
        }

        dusk_scene_update();
    }
}