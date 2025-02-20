/*
 *     ╭────────╮ ╭─────────────────────────╮ ╭────────╮ ╭─────────────────────────╮ ╭────────╮
 *     │ X_LT_# │ │  .    .    .    .    .  │ │ X_MT_# │ │  .    .    .    .    .  │ │ X_RT_# │
 *     │ X_LM_# │ │  .    .    .    .    .  │ │ X_MM_# │ │  .    .    .    .    .  │ │ X_RM_# │
 *     │ X_LB_# │ │  .    .    .    .    .  │ │ X_MB_# │ │  .    .    .    .    .  │ │ X_RB_# │
 *     ╰────────╯ ╰───╮────────╭─╮──────────┤ ├────────┤ ├──────────╮─╭────────╮───╯ ╰────────╯
 *                    │ X_LH_# │ │  .    .  │ │ X_MH_# │ │  .    .  │ │ X_RH_# │
 *                    ╰────────╯ ╰──────────╯ ╰────────╯ ╰──────────╯ ╰────────╯
 * 
 * The default layout has 34 keys.
 * Additional keys can be added by pre-defining any of the macros defined above to
 * the array of keycodes, before sourcing this file.
 *
 * The above diagram represents how the key clusters that can be defined are ordered.
 * Note: `N` is a placeholder for the same key on Layer N.
 *
 *  - `X_LT_1` defines the keycode on layer 1.
 *  - `X_LT` is the default value, that `X_LT_#` falls back to if undefined. 
 */

/*
 * Generate the transparent keys for the layers that don't have anything defined.
 * `TRANSPARENT(n)` will create `n` instances of `&trans`.
 * More `TRANSPARENT_N(t)` methods can be added, as necessary. 
 */
 #define TRANSPARENT_1(t) t
 #define TRANSPARENT_2(t) t t
 #define TRANSPARENT_3(t) t t t
 #define TRANSPARENT_11(t) t t t t t t t t t t t
 #define TRANSPARENT_17(t) TRANSPARENT_11(t) TRANSPARENT_3(t) TRANSPARENT_3(t)
 
 #define CONCAT_(a, b) a##b
 #define CONCAT(a, b) CONCAT_(a, b)
 
 #define TRANSPARENT(n) CONCAT(TRANSPARENT_, n)(&trans)
 
 /* PER-LAYER VALUES */
 
 /* Per-layer values for left of left half */
 // Left: Top Row
 #if defined(X_LT) || defined(X_LT_0)
     #ifdef X_LT_N
         #define X_LT_TRANS TRANSPARENT(X_LT_N)
     #else
         #error "Keys for X_LT defined, but count is undefined. Please define X_LT_N."
     #endif
 
     #ifndef X_LT_0
         #define X_LT_0 X_LT
     #endif
     #ifndef X_LT_1
         #define X_LT_1 X_LT_TRANS
     #endif
     #ifndef X_LT_2
         #define X_LT_2 X_LT_TRANS
     #endif
     #ifndef X_LT_3
         #define X_LT_3 X_LT_TRANS
     #endif
     #ifndef X_LT_4
         #define X_LT_4 X_LT_TRANS
     #endif
     #ifndef X_LT_5
         #define X_LT_5 X_LT_TRANS
     #endif
     #ifndef X_LT_6
         #define X_LT_6 X_LT_TRANS
     #endif
     #ifndef X_LT_7
         #define X_LT_7 X_LT_TRANS
     #endif
 #else
     #define X_LT_0
     #define X_LT_1
     #define X_LT_2
     #define X_LT_3
     #define X_LT_4
     #define X_LT_5
     #define X_LT_6
     #define X_LT_7
 #endif
 
 // Left: Middle Row
 #if defined(X_LM) || defined(X_LM_0)
     #ifdef X_LM_N
         #define X_LM_TRANS TRANSPARENT(X_LM_N)
     #else
         #error "Keys for X_LM defined, but count is undefined. Please define X_LM_N."
     #endif
 
     #ifndef X_LM_0
         #define X_LM_0 X_LM
     #endif
     #ifndef X_LM_1
         #define X_LM_1 X_LM_TRANS
     #endif
     #ifndef X_LM_2
         #define X_LM_2 X_LM_TRANS
     #endif
     #ifndef X_LM_3
         #define X_LM_3 X_LM_TRANS
     #endif
     #ifndef X_LM_4
         #define X_LM_4 X_LM_TRANS
     #endif
     #ifndef X_LM_5
         #define X_LM_5 X_LM_TRANS
     #endif
     #ifndef X_LM_6
         #define X_LM_6 X_LM_TRANS
     #endif
     #ifndef X_LM_7
         #define X_LM_7 X_LM_TRANS
     #endif
 #else
     #define X_LM_0
     #define X_LM_1
     #define X_LM_2
     #define X_LM_3
     #define X_LM_4
     #define X_LM_5
     #define X_LM_6
     #define X_LM_7
 #endif
 
 // Left: Bottom Row
 #if defined(X_LB) || defined(X_LB_0)
     #ifdef X_LB_N
         #define X_LB_TRANS TRANSPARENT(X_LB_N)
     #else
         #error "Keys for X_LB defined, but count is undefined. Please define X_LB_N."
     #endif
 
     #ifndef X_LB_0
         #define X_LB_0 X_LB
     #endif
     #ifndef X_LB_1
         #define X_LB_1 X_LB_TRANS
     #endif
     #ifndef X_LB_2
         #define X_LB_2 X_LB_TRANS
     #endif
     #ifndef X_LB_3
         #define X_LB_3 X_LB_TRANS
     #endif
     #ifndef X_LB_4
         #define X_LB_4 X_LB_TRANS
     #endif
     #ifndef X_LB_5
         #define X_LB_5 X_LB_TRANS
     #endif
     #ifndef X_LB_6
         #define X_LB_6 X_LB_TRANS
     #endif
     #ifndef X_LB_7
         #define X_LB_7 X_LB_TRANS
     #endif
 #else
     #define X_LB_0
     #define X_LB_1
     #define X_LB_2
     #define X_LB_3
     #define X_LB_4
     #define X_LB_5
     #define X_LB_6
     #define X_LB_7
 #endif
 
 // Left: Thumb Row
 #if defined(X_LH) || defined(X_LH_0)
     #ifdef X_LH_N
         #define X_LH_TRANS TRANSPARENT(X_LH_N)
     #else
         #error "Keys for X_LH defined, but count is undefined. Please define X_LH_N."
     #endif
 
     #ifndef X_LH_0
         #define X_LH_0 X_LH
     #endif
     #ifndef X_LH_1
         #define X_LH_1 X_LH_TRANS
     #endif
     #ifndef X_LH_2
         #define X_LH_2 X_LH_TRANS
     #endif
     #ifndef X_LH_3
         #define X_LH_3 X_LH_TRANS
     #endif
     #ifndef X_LH_4
         #define X_LH_4 X_LH_TRANS
     #endif
     #ifndef X_LH_5
         #define X_LH_5 X_LH_TRANS
     #endif
     #ifndef X_LH_6
         #define X_LH_6 X_LH_TRANS
     #endif
     #ifndef X_LH_7
         #define X_LH_7 X_LH_TRANS
     #endif
 
 #else
     #define X_LH_0
     #define X_LH_1
     #define X_LH_2
     #define X_LH_3
     #define X_LH_4
     #define X_LH_5
     #define X_LH_6
     #define X_LH_7
 #endif
 
 
 /* Per-layer values for between left and right halves */
 // Middle: Top Row
 #if defined(X_MT) || defined(X_MT_0)
     #ifdef X_MT_N
         #define X_MT_TRANS TRANSPARENT(X_MT_N)
     #else
         #error "Keys for X_MT defined, but count is undefined. Please define X_MT_N."
     #endif
 
     #ifndef X_MT_0
         #define X_MT_0 X_MT
     #endif
     #ifndef X_MT_1
         #define X_MT_1 X_MT_TRANS
     #endif
     #ifndef X_MT_2
         #define X_MT_2 X_MT_TRANS
     #endif
     #ifndef X_MT_3
         #define X_MT_3 X_MT_TRANS
     #endif
     #ifndef X_MT_4
         #define X_MT_4 X_MT_TRANS
     #endif
     #ifndef X_MT_5
         #define X_MT_5 X_MT_TRANS
     #endif
     #ifndef X_MT_6
         #define X_MT_6 X_MT_TRANS
     #endif
     #ifndef X_MT_7
         #define X_MT_7 X_MT_TRANS
     #endif
 #else
     #define X_MT_0
     #define X_MT_1
     #define X_MT_2
     #define X_MT_3
     #define X_MT_4
     #define X_MT_5
     #define X_MT_6
     #define X_MT_7
 #endif
 
 // Middle: Middle Row
 #if defined(X_MM) || defined(X_MM_0)
     #ifdef X_MM_N
         #define X_MM_TRANS TRANSPARENT(X_MM_N)
     #else
         #error "Keys for X_MM defined, but count is undefined. Please define X_MM_N."
     #endif
 
     #ifndef X_MM_0
         #define X_MM_0 X_MM
     #endif
     #ifndef X_MM_1
         #define X_MM_1 X_MM_TRANS
     #endif
     #ifndef X_MM_2
         #define X_MM_2 X_MM_TRANS
     #endif
     #ifndef X_MM_3
         #define X_MM_3 X_MM_TRANS
     #endif
     #ifndef X_MM_4
         #define X_MM_4 X_MM_TRANS
     #endif
     #ifndef X_MM_5
         #define X_MM_5 X_MM_TRANS
     #endif
     #ifndef X_MM_6
         #define X_MM_6 X_MM_TRANS
     #endif
     #ifndef X_MM_7
         #define X_MM_7 X_MM_TRANS
     #endif
 #else
     #define X_MM_0
     #define X_MM_1
     #define X_MM_2
     #define X_MM_3
     #define X_MM_4
     #define X_MM_5
     #define X_MM_6
     #define X_MM_7
 #endif
 
 // Middle: Bottom Row
 #if defined(X_MB) || defined(X_MB_0)
     #ifdef X_MB_N
         #define X_MB_TRANS TRANSPARENT(X_MB_N)
     #else
         #error "Keys for X_MB defined, but count is undefined. Please define X_MB_N."
     #endif
 
     #ifndef X_MB_0
         #define X_MB_0 X_MB
     #endif
     #ifndef X_MB_1
         #define X_MB_1 X_MB_TRANS
     #endif
     #ifndef X_MB_2
         #define X_MB_2 X_MB_TRANS
     #endif
     #ifndef X_MB_3
         #define X_MB_3 X_MB_TRANS
     #endif
     #ifndef X_MB_4
         #define X_MB_4 X_MB_TRANS
     #endif
     #ifndef X_MB_5
         #define X_MB_5 X_MB_TRANS
     #endif
     #ifndef X_MB_6
         #define X_MB_6 X_MB_TRANS
     #endif
     #ifndef X_MB_7
         #define X_MB_7 X_MB_TRANS
     #endif
 #else
     #define X_MB_0
     #define X_MB_1
     #define X_MB_2
     #define X_MB_3
     #define X_MB_4
     #define X_MB_5
     #define X_MB_6
     #define X_MB_7
 #endif
 
 // Middle: Thumb Row
 #if defined(X_MH) || defined(X_MH_0)
     #ifdef X_MH_N
         #define X_MH_TRANS TRANSPARENT(X_MH_N)
     #else
         #error "Keys for X_MH defined, but count is undefined. Please define X_MH_N."
     #endif
 
     #ifndef X_MH_0
         #define X_MH_0 X_MH
     #endif
     #ifndef X_MH_1
         #define X_MH_1 X_MH_TRANS
     #endif
     #ifndef X_MH_2
         #define X_MH_2 X_MH_TRANS
     #endif
     #ifndef X_MH_3
         #define X_MH_3 X_MH_TRANS
     #endif
     #ifndef X_MH_4
         #define X_MH_4 X_MH_TRANS
     #endif
     #ifndef X_MH_5
         #define X_MH_5 X_MH_TRANS
     #endif
     #ifndef X_MH_6
         #define X_MH_6 X_MH_TRANS
     #endif
     #ifndef X_MH_7
         #define X_MH_7 X_MH_TRANS
     #endif
 #else
     #define X_MH_0
     #define X_MH_1
     #define X_MH_2
     #define X_MH_3
     #define X_MH_4
     #define X_MH_5
     #define X_MH_6
     #define X_MH_7
 #endif
 
 
 /* Per-layer values for right of right half */
 // Right: Top Row
 #if defined(X_RT) || defined(X_RT_0)
     #ifdef X_RT_N
         #define X_RT_TRANS TRANSPARENT(X_RT_N)
     #else
         #error "Keys for X_RT defined, but count is undefined. Please define X_RT_N."
     #endif
 
     #ifndef X_RT_0
         #define X_RT_0 X_RT
     #endif
     #ifndef X_RT_1
         #define X_RT_1 X_RT_TRANS
     #endif
     #ifndef X_RT_2
         #define X_RT_2 X_RT_TRANS
     #endif
     #ifndef X_RT_3
         #define X_RT_3 X_RT_TRANS
     #endif
     #ifndef X_RT_4
         #define X_RT_4 X_RT_TRANS
     #endif
     #ifndef X_RT_5
         #define X_RT_5 X_RT_TRANS
     #endif
     #ifndef X_RT_6
         #define X_RT_6 X_RT_TRANS
     #endif
     #ifndef X_RT_7
         #define X_RT_7 X_RT_TRANS
     #endif
 #else
     #define X_RT_0
     #define X_RT_1
     #define X_RT_2
     #define X_RT_3
     #define X_RT_4
     #define X_RT_5
     #define X_RT_6
     #define X_RT_7
 #endif
 
 // Right: Middle Row
 #if defined(X_RM) || defined(X_RM_0)
     #ifdef X_RM_N
         #define X_RM_TRANS TRANSPARENT(X_RM_N)
     #else
         #error "Keys for X_RM defined, but count is undefined. Please define X_RM_N."
     #endif
 
     #ifndef X_RM_0
         #define X_RM_0 X_RM
     #endif
     #ifndef X_RM_1
         #define X_RM_1 X_RM_TRANS
     #endif
     #ifndef X_RM_2
         #define X_RM_2 X_RM_TRANS
     #endif
     #ifndef X_RM_3
         #define X_RM_3 X_RM_TRANS
     #endif
     #ifndef X_RM_4
         #define X_RM_4 X_RM_TRANS
     #endif
     #ifndef X_RM_5
         #define X_RM_5 X_RM_TRANS
     #endif
     #ifndef X_RM_6
         #define X_RM_6 X_RM_TRANS
     #endif
     #ifndef X_RM_7
         #define X_RM_7 X_RM_TRANS
     #endif
 #else
     #define X_RM_0
     #define X_RM_1
     #define X_RM_2
     #define X_RM_3
     #define X_RM_4
     #define X_RM_5
     #define X_RM_6
     #define X_RM_7
 #endif
 
 // Right: Bottom Row
 #if  defined(X_RB) || defined(X_RB_0)
     #ifdef X_RB_N
         #define X_RB_TRANS TRANSPARENT(X_RB_N)
     #else
         #error "Keys for X_RB defined, but count is undefined. Please define X_RB_N."
     #endif
 
     #ifndef X_RB_0
         #define X_RB_0 X_RB
     #endif
     #ifndef X_RB_1
         #define X_RB_1 X_RB_TRANS
     #endif
     #ifndef X_RB_2
         #define X_RB_2 X_RB_TRANS
     #endif
     #ifndef X_RB_3
         #define X_RB_3 X_RB_TRANS
     #endif
     #ifndef X_RB_4
         #define X_RB_4 X_RB_TRANS
     #endif
     #ifndef X_RB_5
         #define X_RB_5 X_RB_TRANS
     #endif
     #ifndef X_RB_6
         #define X_RB_6 X_RB_TRANS
     #endif
     #ifndef X_RB_7
         #define X_RB_7 X_RB_TRANS
     #endif
 #else
     #define X_RB_0
     #define X_RB_1
     #define X_RB_2
     #define X_RB_3
     #define X_RB_4
     #define X_RB_5
     #define X_RB_6
     #define X_RB_7
 #endif
 
 // Right: Thumb Row
 #if defined(X_RH) || defined(X_RH_0)
     #ifdef X_RH_N
         #define X_RH_TRANS TRANSPARENT(X_RH_N)
     #else
         #error "Keys for X_RH defined, but count is undefined. Please define X_RH_N."
     #endif
 
     #ifndef X_RH_0
         #define X_RH_0 X_RH
     #endif
     #ifndef X_RH_1
         #define X_RH_1 X_RH_TRANS
     #endif
     #ifndef X_RH_2
         #define X_RH_2 X_RH_TRANS
     #endif
     #ifndef X_RH_3
         #define X_RH_3 X_RH_TRANS
     #endif
     #ifndef X_RH_4
         #define X_RH_4 X_RH_TRANS
     #endif
     #ifndef X_RH_5
         #define X_RH_5 X_RH_TRANS
     #endif
     #ifndef X_RH_6
         #define X_RH_6 X_RH_TRANS
     #endif
     #ifndef X_RH_7
         #define X_RH_7 X_RH_TRANS
     #endif
 #else
     #define X_RH_0
     #define X_RH_1
     #define X_RH_2
     #define X_RH_3
     #define X_RH_4
     #define X_RH_5
     #define X_RH_6
     #define X_RH_7
 #endif