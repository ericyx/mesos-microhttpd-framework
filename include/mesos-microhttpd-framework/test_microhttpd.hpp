/*
     This file is part of libmicrohttpd
     Copyright (C) 2007 Christian Grothoff (and other contributing authors)

     This library is free software; you can redistribute it and/or
     modify it under the terms of the GNU Lesser General Public
     License as published by the Free Software Foundation; either
     version 2.1 of the License, or (at your option) any later version.

     This library is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
     Lesser General Public License for more details.

     You should have received a copy of the GNU Lesser General Public
     License along with this library; if not, write to the Free Software
     Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

/**
 * @file fileserver_example.c
 * @brief minimal example for how to use libmicrohttpd to serve files
 * @author Christian Grothoff
 */

#include <platform.h>
#include <unistd.h>
#include <microhttpd.h>

#define PAGE "<html><head><title>File not found</title></head><body>File not found</body></html>"

static ssize_t
file_reader (void *cls, uint64_t pos, char *buf, size_t max);

static void
free_callback (void *cls);

static int
ahc_echo (void *cls,
          struct MHD_Connection *connection,
          const char *url,
          const char *method,
          const char *version,
          const char *upload_data,
	  size_t *upload_data_size, void **ptr);

int testMicrohttpd(int port);
