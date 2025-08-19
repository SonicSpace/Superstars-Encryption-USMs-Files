#ifndef _SONICTEAM_KEYS_H_
#define _SONICTEAM_KEYS_H_
#include <stdint.h>
//#Include "Recent_Sonic_Games_Keys_General.h"

typedef struct {
    uint64_t key;               /* General key or seed ('user') key */
#if 0
    const uint16_t* Sonickeys;    /* scramble sonickey table for seed key */
    size_t Sonickeys_size;        /* size of the derivation sonickey table */
#endif
} SonicTeamkey_info;

/**
 * List of known keys, extracted from the game files (most from data analisys, some from 2ch.net/forums).
 * CRI's tools expect an unsigned 64 bit numberic string, but keys are commonly found online in hex form.
 * Keys only use 56 bits though, so the upper 8 bits can be ignored.
 *
 * Some ACB,AWB And USMs after mid 2018 use a user seed key to create the final GENERAL key, 
 * which means there is one key per file created (so most have a unique key).
 */
static const sonickey_info sonickey_list[] = {

    // CRI General decoder default //

// Sonic Superstars ソニックスーパースターズ (Multi)
{1991062320230623}, // 000712DC5252B0DF

// Sonic Origins ソニック・オリジンズ (Multi)
{1991062320220623}, // 000712DC525289CF

// Sonic Colors: Ultimate ソニックカラーズ：アルティメット (Multi)
{1991062320101111}, // 000712DC5250B6F7

// Sonic Runners (iOS/Android)
{19910623}, // 00000000012FCFDF

