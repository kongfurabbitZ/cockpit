/*
 * This file is part of Cockpit.
 *
 * Copyright (C) 2013-2014 Red Hat, Inc.
 *
 * Cockpit is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Cockpit is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Cockpit; If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __COCKPIT_WEB_SERVICE_H__
#define __COCKPIT_WEB_SERVICE_H__

#include "cockpitwstypes.h"

#include "cockpitauth.h"

G_BEGIN_DECLS

#define COCKPIT_TYPE_WEB_SERVICE         (cockpit_web_service_get_type ())
#define COCKPIT_WEB_SERVICE(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), COCKPIT_TYPE_WEB_SERVICE, CockpitWebService))

typedef struct _CockpitWebService   CockpitWebService;

GType        cockpit_web_service_get_type    (void);

void         cockpit_web_service_socket      (GIOStream *io_stream,
                                              GHashTable *headers,
                                              GByteArray *input_buffer,
                                              CockpitAuth *auth);

G_END_DECLS

#endif /* __COCKPIT_WEB_SERVICE_H__ */