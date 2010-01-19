/* Copyright (C) 2010 Mobile Sorcery AB

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.
*/

#ifndef BROADCASTER_H_
#define BROADCASTER_H_

#include <MAUtil/Vector.h>

using namespace MAUtil;

namespace MAPUtil
{
    //=========================================================================
    template<class T>
    class Broadcaster
    //=========================================================================
    {
    public:
                            Broadcaster( ) { }
        virtual				~Broadcaster( ) { }

        //
        // listener property
        //
        void				addListener( T* listener ) { mListeners.add( listener ); }
        void				removeListener( T* listener ) 
                            { 
                                for ( int i = 0; i < mListeners.size( ); i++ ) 
                                {
                                    if ( mListeners[i] == listener )
									{
                                        mListeners.remove( i );
                                        return;
                                    }
                                }
                            }
    protected:
        Vector<T*>			mListeners;
    };
}

#endif // BROADCASTER_H_
