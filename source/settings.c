#include "settings.h"
#include "profiles.h"

/*
 * Active profiles
 * Add profiles from source/profiles.h in the profile array
 */
profile profiles[] = {
    // Static
    // 0: Color Bleed
    {colorBleed, {0, 0, 0, 0}, NULL, NULL},
    // 1: Full White
    {white, {0, 0, 0, 0}, NULL, NULL},
    // 2: Full Red
    {red, {0, 0, 0, 0}, NULL, NULL},
    // 3: Full Green
    {green, {0, 0, 0, 0}, NULL, NULL},
    // 4: Full Blue
    {blue, {0, 0, 0, 0}, NULL, NULL},
    // 5: Horizontal Rainbow
    {rainbowHorizontal, {0, 0, 0, 0}, NULL, NULL},
    // 6: Vertical Rainbow
    {rainbowVertical, {0, 0, 0, 0}, NULL, NULL},
    // 7: Miami Nights
    {miamiNights, {0, 0, 0, 0}, NULL, NULL},

    // Animated
    // 8: Animated Vertical Rainbow
    {animatedRainbowVertical, {35, 28, 21, 14}, NULL, NULL},
    // 9: Animated Flowing Rainbow
    {animatedRainbowFlow, {7, 5, 2, 1}, NULL, NULL},
    // 10: Animated Waterfall Rainbow
    {animatedRainbowWaterfall, {7, 5, 2, 1}, NULL, NULL},
    // 11: Animated Breathing
    {animatedBreathing, {5, 3, 2, 1}, NULL, NULL},
    // 12: Animated Spectrum
    {animatedSpectrum, {11, 6, 4, 1}, NULL, NULL},
    // 13: Animated Wave
    {animatedWave, {5, 3, 2, 1}, NULL, NULL},

    // Reactive
    // 14: Reactive Fade
    {reactiveFade, {4, 3, 2, 1}, reactiveFadeKeypress, reactiveFadeInit},
    // 15: Reactive Pulse
    {reactivePulse, {4, 3, 2, 1}, reactivePulseKeypress, reactivePulseInit},
    // 16: Reactive Term
    {reactiveTerm, {1, 2, 3, 4}, reactiveTermKeypress, reactiveTermInit}};

/* Set your defaults here */
uint8_t currentProfile = 0;
const uint8_t amountOfProfiles = sizeof(profiles) / sizeof(profile);
volatile uint8_t currentSpeed = 0;
uint8_t manualControl = 0;
uint8_t backlightDisabled = 0;
uint8_t stickyKeysExist = 0;
uint8_t ledIntensity = 0;
led_t color_correction = (led_t){.rgb = 0x80FF99};
led_t color_temperature = (led_t){.rgb = 0xFFFFFF};
