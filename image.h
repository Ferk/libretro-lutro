#ifndef IMAGE_H
#define IMAGE_H

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "runtime.h"
#include "formats/rpng.h"
#include "painter.h"

void lutro_image_init();
int lutro_image_preload(lua_State *L);

void *image_data_create_from_path(lua_State *L, const char *path);
void *image_data_create(lua_State *L, bitmap_t* self);

#endif // IMAGE_H
