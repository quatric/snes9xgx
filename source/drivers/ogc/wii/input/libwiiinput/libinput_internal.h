#ifndef LIBINPUT_INTERNAL_H
#define LIBINPUT_INTERNAL_H

/* Trimmed from libwiiinput: only what the pen tablet driver needs. snes9xgx reads
 * the Wii Remotes itself, so the uDraw GameTablet (which needs wiiuse hooks) is
 * left out and these report "no uDraw". */

#include <gctypes.h>
#include <stdbool.h>
#include "input_tablet.h"

bool inpw_udraw_pop(tb_sample *out);
bool inpw_udraw_state(tb_sample *out);
bool inpw_udraw_info(tb_info *info);
void inpw_udraw_extent(s32 *w, s32 *h);

#endif
