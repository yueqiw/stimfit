// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

// Inspired by sigTOOL
// http://sigtool.sourceforge.net/
// Original comment for the Matlab file:
//--------------------------------------------------------------------------
// Author: Malcolm Lidierth 12/09
// Copyright (c) The Author & King's College London 2009-
//--------------------------------------------------------------------------

/*! \file hekalib.h
 *  \author Christoph Schmidt-Hieber, Malcolm Lidierth
 *  \date 2008-01-23
 *  \brief Import axon binary files.
 */

#ifndef _HEKALIB_H
#define _HEKALIB_H

namespace stf {

//! Open an HEKA file and store its contents to a Recording object.
/*! \param fName The full path to the file to be opened.
 *  \param ReturnData On entry, an empty Recording object. On exit,
 *         the data stored in \e fName.
 *  \param progress True if the progress dialog should be updated.
 */
void importHEKAFile(const wxString& fName, Recording& ReturnData, bool progress = true);

}

#endif
