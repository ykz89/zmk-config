/*
 *                          roBa KEY MATRIX / LAYOUT MAPPING
 *
 *           ╭─────────────────────╮                      ╭─────────────────────╮
 *           │   0   1   2   3   4 ╰────╮            ╭────╯  5   6   7   8   9  │
 *           │  10  11  12  13  14  15  │            │  16  17  18  19  20  21  │
 *           │  22  23  24  25  26  27  │            │  28  29  30  31  32  33  │
 *           │  34  35  36  37  38  39  │            │  40  41 ╭──────────╮ 42  │
 *           ╰──────────────────────────╯            ╰─────────╯          ╰─────╯
 *
 *           ╭─────────────────────╮                      ╭─────────────────────╮
 *           │ LT4 LT3 LT2 LT1 LT0 ╰────╮            ╭────╯ RT0 RT1 RT2 RT3 RT4 │
 *           │ LM4 LM3 LM2 LM1 LM0 MLM0 │            │ MRM0 RM0 RM1 RM2 RM3 RM4 │
 *           │ LB4 LB3 LB2 LB1 LB0 MLB0 │            │ MRB0 RB0 RB1 RB2 RB3 RB4 │
 *           │ LH5 LH4 LH3 LH2 LH1 LH0  │            │ RH0  RH1 ╭─────────╮     │
 *           ╰──────────────────────────╯            ╰──────────╯         ╰─────╯
 */

 #pragma once

 #define LT0  4  // left-top row
 #define LT1  3
 #define LT2  2
 #define LT3  1
 #define LT4  0
 
 #define RT0  5  // right-top row
 #define RT1  6
 #define RT2  7
 #define RT3  8
 #define RT4  9
 
 #define MLM0 15
 #define LM0  14  // left-middle row
 #define LM1  13
 #define LM2  12
 #define LM3  11
 #define LM4  10
 
 #define MRM0 16
 #define RM0  17  // right-middle row
 #define RM1  18
 #define RM2  19
 #define RM3  20
 #define RM4  21
 
 #define MLB0 27 // left-bottom row
 #define LB0  26
 #define LB1  25
 #define LB2  24
 #define LB3  23
 #define LB4  22
 
 #define MRB0 28 // right-bottom row
 #define RB0  29
 #define RB1  30
 #define RB2  31
 #define RB3  32
 #define RB4  33
 
 #define LH0 39  // left thumb keys
 #define LH1 38
 #define LH2 37
 #define LH3 36
 #define LH4 35
 #define LH5 34
 
 #define RH0 40  // right thumb keys
 #define RH1 41
 
 // for home row mods
 #define KEYS_L LT0 LT1 LT2 LT3 LT4 MLM0 LM0 LM1 LM2 LM3 LM4 MLB0 LB0 LB1 LB2 LB3 LB4 LH3 LH4 LH5    // left hand
 #define KEYS_R RT0 RT1 RT2 RT3 RT4 MRM0 RM0 RM1 RM2 RM3 RM4 MRB0 RB0 RB1 RB2 RB3 RB4                // right hand
 #define THUMBS LH2 LH1 LH0 RH0 RH1                                                                  // thumbs
 
 /*
  * Key counts.
  * If you do not have all the keys in the default layout, overide the counts
  * appropriately (in the respective region) in your keyboard's keymap before
  * including `base.keymap`.
  */
 
 #define X_MM_N 2
 #define X_MB_N 2
 
 #define X_LH_N 4
 #define X_RH_N 1
 
 /* Define the following headers in your keyboard's keymap before including `base.keymap`.
 #define X_MM MML0 MMR0
 #define X_MB MBL0 MBR0
 
 #define X_LH LH5 LH4 LH3 LH2
 #define X_RB
  */