/*
 *  Copyright (C) 2009 Exult Team
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public
 *  License along with this library; if not, write to the
 *  Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 *  Boston, MA  02111-1307, USA.
 */

#ifdef HAVE_CONFIG_H
#   include <config.h>
#endif

#include "SDL_video.h"
#include "imagewin.h"
#include "sdl-compat.h"
#include "ignore_unused_variable_warning.h"

//
// OpenGL 'scaler':
//
void Image_window::show_scaledOpenGL(
    int x, int y, int w, int h  // Area to show.
) {
	ignore_unused_variable_warning(x, y, w, h);
#if SDL_VERSION_ATLEAST(2, 0, 0)
	SDL_GL_SwapWindow(screen_window);
#else
	SDL_GL_SwapBuffers();       // Blit.
#endif
}
