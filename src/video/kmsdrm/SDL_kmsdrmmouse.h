/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2020 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#include "../../SDL_internal.h"

#ifndef SDL_KMSDRM_mouse_h_
#define SDL_KMSDRM_mouse_h_

#include <gbm.h>

#define MAX_CURSOR_W 512
#define MAX_CURSOR_H 512

/* Driverdata with driver-side info about the cursor. */
typedef struct _KMSDRM_CursorData
{
    struct gbm_bo *bo;
    struct plane *plane;
    uint32_t       crtc_id;
    int            hot_x, hot_y;
    int            w, h;
    /* The video devide implemented on SDL_kmsdrmvideo.c 
     * to be used as _THIS pointer in SDL_kmsdrmvideo.c 
     * functions that need it. */
    SDL_VideoDevice *video;
} KMSDRM_CursorData;

extern void KMSDRM_InitMouse(_THIS);
extern void KMSDRM_QuitMouse(_THIS);

#endif /* SDL_KMSDRM_mouse_h_ */

/* vi: set ts=4 sw=4 expandtab: */
