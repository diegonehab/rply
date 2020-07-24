#ifndef RPLY_MEMORY_H
#define RPLY_MEMORY_H
/* ----------------------------------------------------------------------
 * RPly library, read/write PLY files
 * Diego Nehab, IMPA
 * http://www.impa.br/~diego/software/rply
 *
 * In-memory read/write of PLY files
 * Patryk Kiepas
 * https://github.com/quepas
 *
 * This library is distributed under the MIT License. See notice
 * at the end of this file.
 * ---------------------------------------------------------------------- */

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------
 * Opens a PLY file for reading from memory (buffer of const char[])
 *
 * buffer      : file in the memory for reading
 * error_cb    : error callback function
 * idata,pdata : contextual information available to users
 *
 * Returns 1 if successful, 0 otherwise
 * ---------------------------------------------------------------------- */
p_ply ply_open_from_memory(const char *buffer, p_ply_error_cb error_cb, long idata, void *pdata);

/* ----------------------------------------------------------------------
 * Creates new PLY file for writing in memory (to a buffer of char[])
 *
 * buffer       : memory for storing the file
 * buffer_size  : size of pre-allocated memory for the buffer
 * ply_size     : actual size of the PLY file in memory
 * storage_mode : file format mode
 * error_cb     : error callback function
 * idata, pdata : contextual information available to users
 *
 * Returns handle to PLY file if successful, NULL otherwise
 * ---------------------------------------------------------------------- */
p_ply ply_create_to_memory(char *buffer, size_t buffer_size, size_t *ply_size, e_ply_storage_mode storage_mode, p_ply_error_cb error_cb, long idata, void *pdata);

#ifdef __cplusplus
}
#endif

#endif /* RPLY_MEMORY_H */

/* ----------------------------------------------------------------------
 * Copyright (C) 2003-2015 Diego Nehab. All rights reserved.
 * Copyright (C) 2020 Patryk Kiepas
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * ---------------------------------------------------------------------- */
