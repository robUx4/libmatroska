/****************************************************************************
** libmatroska : parse Matroska files, see http://www.matroska.org/
**
** <file/class description>
**
** Copyright (C) 2002-2010 Steve Lhomme.  All rights reserved.
**
** This file is part of libmatroska.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public
** License along with this library; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**
** See http://www.gnu.org/licenses/lgpl-2.1.html for LGPL licensing information.**
** Contact license@matroska.org if any conditions of this licensing are
** not clear to you.
**
**********************************************************************/

/*!
  \file
  \author Steve Lhomme     <robux4 @ users.sf.net>
*/
#ifndef LIBMATROSKA_FILE_H
#define LIBMATROSKA_FILE_H

//#include <vector>

#include "matroska/KaxTypes.h"
#include <ebml/IOCallback.h>
//#include "MainHeader.h"
//#include "TrackType.h"
//#include "StreamInfo.h"
//#include "Cluster.h"
//#include "CodecHeader.h"

using namespace libebml;

namespace libmatroska {

//class Track;
//class Frame;

/*!
    \class MATROSKA_DLL_API FileMatroska
    \brief General container of all the parameters and data of an Matroska file
    \todo Handle the filename and next filename
    \todo Handle the IOCallback selection/type
*/
class MATROSKA_DLL_API FileMatroska {
    public:
    FileMatroska(IOCallback & output);
    ~FileMatroska() = default;
    IOCallback & myFile;

};

} // namespace libmatroska

#ifdef __cplusplus
extern "C" {
#endif

MATROSKA_DLL_API void matroska_init();
MATROSKA_DLL_API void matroska_done();

#ifdef __cplusplus
}
#endif

#endif // FILE_KAX_HPP
