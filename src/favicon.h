/**
 * @file favicon.h Liferea favicon handling
 *
 * Copyright (C) 2004-2006 Nathan J. Conrad <t98502@users.sourceforge.net>
 * Copyright (C) 2015-2020 Lars Windolf <lars.windolf@gmx.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _FAVICON_H
#define _FAVICON_H

#include <glib.h>
#include <gdk/gdk.h>

#include "subscription.h"

/**
 * favicon_load_from_cache: (skip)
 * Tries to load a given favicon from cache.
 *
 * @id:			the node id
 * @size:		width / height in pixel
 *
 * Returns: (transfer null): a pixmap (or NULL)
 */
GdkPixbuf * favicon_load_from_cache (const gchar *id, guint size);

/**
 * favicon_remove_from_cache:
 * Removes a given favicon from the favicon cache.
 *
 * @id:		the node id
 */
void favicon_remove_from_cache (const gchar *id);

/**
 * favicon_save_from_data:
 *
 * @result:		update result
 * @id:			the node id
 *
 * Returns: TRUE on success
 */
gboolean
favicon_save_from_data (const UpdateResult * const result, const gchar *id);

/**
 * favicon_get_urls: (skip)
 * Returns a list of URLs that are download/discovery targets for favicons
 * and favicon links.
 *
 * @subscription:	the subscription
 * @html_url:		a base URL for all HTML links
 *
 * Returns: (transfer full): list of URL strings
 */
GSList *
favicon_get_urls (subscriptionPtr subscription, const gchar *html_url);

#endif
