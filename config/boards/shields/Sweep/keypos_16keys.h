/*                              16 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────┬────────────────╮ ╭─────────────────┬─────────────────╮
  │     0   1   2  | 3   4   5      │ │     LTR LTM LTI │ RTI RTM RTR     │
  │ 6   7   8   9  | 10  11  12  13 │ │ LBP LBR LBM LBI │ RBI RBM RBR RBP │
  ╰───────────╮ 14 │ 15 ╭───────────╯ ╰───────────╮ LTB │ RTB ╭───────────╯
              ╰────┴────╯                         ╰─────┴─────╯             */

#pragma once

#define LTI  2
#define LTM  1
#define LTR  0

#define RTI  3
#define RTM  4
#define RTR  5

#define LBI  9
#define LBM  8
#define LBR  7
#define LBP  6

#define RBI 10
#define RBM 11
#define RBR 12
#define RBP 13

#define LTB 14

#define RTB 15

#define KEYS_L LTI LTM LTR LBI LBM LBR LBP  // left-hand keys
#define KEYS_R RTI RTM RTR RBI RBM RBR RBP  // right-hand keys
#define THUMBS LTB RTB