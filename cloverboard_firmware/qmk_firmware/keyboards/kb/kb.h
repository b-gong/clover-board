#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000,       K002, K003, K004, K005,       K007, K008, K009, K010, K011, K012, K013, K014, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112,       K114, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313,       \
	      K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,       K413, K414, \
	K500, K501,       K503,             K506,                   K510, K511,       K513, K514  \
) { \
	{ K000,  KC_NO, K002,  K003,  K004,  K005,  KC_NO, K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  KC_NO, K114 }, \
	{ K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214 }, \
	{ K300,  KC_NO, K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  KC_NO }, \
	{ KC_NO, K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  KC_NO, K413,  K414 }, \
	{ K500,  K501,  KC_NO, K503,  KC_NO, KC_NO, K506,  KC_NO, KC_NO, KC_NO, K510,  K511,  KC_NO, K513,  K514 }  \
}

#endif