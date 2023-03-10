/*
 * Copyright (c) 2022 XXIV
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef __SPINNER_H__
#define __SPINNER_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct spinner_t {
  void* spinner;
} spinner_t;

typedef enum {
    SPINNER_SPINNERS_DOTS,
    SPINNER_SPINNERS_DOTS2,
    SPINNER_SPINNERS_DOTS3,
    SPINNER_SPINNERS_DOTS4,
    SPINNER_SPINNERS_DOTS5,
    SPINNER_SPINNERS_DOTS6,
    SPINNER_SPINNERS_DOTS7,
    SPINNER_SPINNERS_DOTS8,
    SPINNER_SPINNERS_DOTS9,
    SPINNER_SPINNERS_DOTS10,
    SPINNER_SPINNERS_DOTS11,
    SPINNER_SPINNERS_DOTS12,
    SPINNER_SPINNERS_DOTS8BIT,
    SPINNER_SPINNERS_LINE,
    SPINNER_SPINNERS_LINE2,
    SPINNER_SPINNERS_PIPE,
    SPINNER_SPINNERS_SIMPLEDOTS,
    SPINNER_SPINNERS_SIMPLEDOTSSCROLLING,
    SPINNER_SPINNERS_STAR,
    SPINNER_SPINNERS_STAR2,
    SPINNER_SPINNERS_FLIP,
    SPINNER_SPINNERS_HAMBURGER,
    SPINNER_SPINNERS_GROWVERTICAL,
    SPINNER_SPINNERS_GROWHORIZONTAL,
    SPINNER_SPINNERS_BALLOON,
    SPINNER_SPINNERS_BALLOON2,
    SPINNER_SPINNERS_NOISE,
    SPINNER_SPINNERS_BOUNCE,
    SPINNER_SPINNERS_BOXBOUNCE,
    SPINNER_SPINNERS_BOXBOUNCE2,
    SPINNER_SPINNERS_TRIANGLE,
    SPINNER_SPINNERS_ARC,
    SPINNER_SPINNERS_CIRCLE,
    SPINNER_SPINNERS_SQUARECORNERS,
    SPINNER_SPINNERS_CIRCLEQUARTERS,
    SPINNER_SPINNERS_CIRCLEHALVES,
    SPINNER_SPINNERS_SQUISH,
    SPINNER_SPINNERS_TOGGLE,
    SPINNER_SPINNERS_TOGGLE2,
    SPINNER_SPINNERS_TOGGLE3,
    SPINNER_SPINNERS_TOGGLE4,
    SPINNER_SPINNERS_TOGGLE5,
    SPINNER_SPINNERS_TOGGLE6,
    SPINNER_SPINNERS_TOGGLE7,
    SPINNER_SPINNERS_TOGGLE8,
    SPINNER_SPINNERS_TOGGLE9,
    SPINNER_SPINNERS_TOGGLE10,
    SPINNER_SPINNERS_TOGGLE11,
    SPINNER_SPINNERS_TOGGLE12,
    SPINNER_SPINNERS_TOGGLE13,
    SPINNER_SPINNERS_ARROW,
    SPINNER_SPINNERS_ARROW2,
    SPINNER_SPINNERS_ARROW3,
    SPINNER_SPINNERS_BOUNCINGBAR,
    SPINNER_SPINNERS_BOUNCINGBALL,
    SPINNER_SPINNERS_SMILEY,
    SPINNER_SPINNERS_MONKEY,
    SPINNER_SPINNERS_HEARTS,
    SPINNER_SPINNERS_CLOCK,
    SPINNER_SPINNERS_EARTH,
    SPINNER_SPINNERS_MATERIAL,
    SPINNER_SPINNERS_MOON,
    SPINNER_SPINNERS_RUNNER,
    SPINNER_SPINNERS_PONG,
    SPINNER_SPINNERS_SHARK,
    SPINNER_SPINNERS_DQPB,
    SPINNER_SPINNERS_WEATHER,
    SPINNER_SPINNERS_CHRISTMAS,
    SPINNER_SPINNERS_GRENADE,
    SPINNER_SPINNERS_POINT,
    SPINNER_SPINNERS_LAYER,
    SPINNER_SPINNERS_BETAWAVE,
    SPINNER_SPINNERS_FINGERDANCE,
    SPINNER_SPINNERS_FISTBUMP,
    SPINNER_SPINNERS_SOCCERHEADER,
    SPINNER_SPINNERS_MINDBLOWN,
    SPINNER_SPINNERS_SPEAKER,
    SPINNER_SPINNERS_ORANGEPULSE,
    SPINNER_SPINNERS_BLUEPULSE,
    SPINNER_SPINNERS_ORANGEBLUEPULSE,
    SPINNER_SPINNERS_TIMETRAVEL,
    SPINNER_SPINNERS_AESTHETIC,
} spinner_spinners_t;

extern spinner_t spinner_new(spinner_spinners_t spinner, const char* message);

extern spinner_t spinner_new_with_timer(spinner_spinners_t spinner, const char* message);

extern void spinner_stop(spinner_t* spinner);

extern void spinner_stop_with_symbol(spinner_t* spinner, const char* symbol);

extern void spinner_stop_with_newline(spinner_t* spinner);

extern void spinner_stop_with_message(spinner_t* spinner, const char* msg);

extern void spinner_stop_and_persist(spinner_t* spinner, const char* symbol, const char* msg);

extern void spinner_clean(spinner_t* spinner);

#ifdef __cplusplus
}
#endif

#endif // __SPINNER_H__
