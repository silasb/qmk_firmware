#include <string.h>
#include "quantum.h"

uint8_t led_state[DRIVER_LED_TOTAL];

void init(void) {}

static void flush(void) {}

void set_value(int index, uint8_t value) {
    led_state[index] = value;
}

static void set_value_all(uint8_t value) {
    for (int i=0; i<DRIVER_LED_TOTAL; i++)
        set_value(i, value);
}

const led_matrix_driver_t led_matrix_driver = {
    .init          = init,
    .flush         = flush,
    .set_value     = set_value,
    .set_value_all = set_value_all,
};

