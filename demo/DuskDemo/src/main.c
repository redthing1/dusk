#include "dusk.h"
#include "scenes.h"

#define NUM_DEMOS 7

int main() {
    dusk_init_all();

    Scene demos[NUM_DEMOS] = {
        logo_scene,
        fountain_scene,
        randbit_scene,
        audio_scene,
        thred_scene,
        
        merge_scene,
        autumn_scene,
    };
    int demo_ix = 0;

    dusk_scene_set(demos[demo_ix]);

    while (TRUE) {
        key_poll(); // update input
        if (key_hit(KEY_START) || demo_ix < 4) {
            demo_ix = (demo_ix + 1) % NUM_DEMOS;
            dusk_scene_set(demos[demo_ix]);
        }

        dusk_scene_update();
    }
}