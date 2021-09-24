#include "dusk.h"
#include "scenes.h"

#define NUM_DEMOS 7

int main() {
    dusk_init_all();

    Scene demos[NUM_DEMOS] = {
        audio_scene,
        merge_scene,
        fountain_scene,
        randbit_scene,
        thred_scene,
        autumn_scene,
    };
    int demo_ix = 0;

    dusk_scene_set(demos[demo_ix]);
    REG_WIN0H = 0xCCC0;

    while (TRUE) {
        key_poll(); // update input
        if (key_hit(KEY_START) || demo_ix < 4) {
            demo_ix = (demo_ix + 1) % NUM_DEMOS;
            dusk_scene_set(demos[demo_ix]);
            REG_WIN0H = 0xCCC1;
        }

        REG_WIN0H = 0xCCC7;
        dusk_scene_update();
    }
}