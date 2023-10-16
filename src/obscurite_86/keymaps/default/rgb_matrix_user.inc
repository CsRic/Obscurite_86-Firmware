
RGB_MATRIX_EFFECT(PURE_DARK_CSRIC)
RGB_MATRIX_EFFECT(BAND_VAL_CSRIC)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
static bool PURE_DARK_CSRIC(effect_params_t* params){
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    rgb_matrix_set_color_all(0, 0, 0);
    return rgb_matrix_check_finished_leds(led_max);
}

static HSV BAND_VAL_CSRIC_math(HSV hsv, uint8_t i, uint8_t time){
    int16_t effect =
        abs(scale8(g_led_config.point[i].x, 228) + 28 - sin8(time)) * 8;
    if(effect > 255)
        effect = 255;
    effect = scale8(effect, hsv.v) + 2;
    hsv.v = qsub8(hsv.v, effect);
    return hsv;
}

static bool BAND_VAL_CSRIC(effect_params_t* params){
    return effect_runner_i(params, &BAND_VAL_CSRIC_math);
}
#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
