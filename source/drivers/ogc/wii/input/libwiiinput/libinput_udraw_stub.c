/* The pen tablet driver's uDraw hooks, without a uDraw. See libinput_internal.h. */

#ifdef HAVE_TABLET

#include "libinput_internal.h"

bool inpw_udraw_pop(tb_sample *out)   { return false; }
bool inpw_udraw_state(tb_sample *out) { return false; }
bool inpw_udraw_info(tb_info *info)   { return false; }
void inpw_udraw_extent(s32 *w, s32 *h)
{
	if (w) *w = 0;
	if (h) *h = 0;
}

#endif
