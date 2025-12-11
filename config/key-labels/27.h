/* 27 key / layout

  0   1   2   3   4     5   6   7   8   9
  10  11  12  13  14    15  16  17  18
      19  20  21  22    23  24  25
          26
  LT4 LT3 LT2 LT1 LT0 | RT0 RT1 RT2 RT3 RT4
  LM4 LM3 LM2 LM1 LM0 | RM0 RM1 RM2 RM3
      LB3 LB2 LB1 LB0 | RB0 RB1 RB2
          LH0         |
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

#define LM0 14  // left-middle row
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 99  // NA

#define LB0 22  // left-bottom row
#define LB1 21
#define LB2 20
#define LB3 19

#define RB0 23  // right-bottom row
#define RB1 24
#define RB2 25
#define RB3 99  // NA

#define LH0 26  // left thumb key

#define RH0 99  // NA
