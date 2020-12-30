/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the documentation of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

//! [0]
QUrlOperator op( "ftp://ftp.qt.nokia.com" );
op.listChildren(); // Asks the server to provide a directory listing
//! [0]


//! [1]
Q3Ftp *ftp = new Q3Ftp( this ); // this is an optional QObject parent
ftp->connectToHost( "ftp.qt.nokia.com" );
ftp->login();
//! [1]


//! [2]
ftp->connectToHost( "ftp.qt.nokia.com" );   // id == 1
ftp->login();                               // id == 2
ftp->cd( "qt" );                            // id == 3
ftp->get( "INSTALL" );                      // id == 4
ftp->close();                               // id == 5
//! [2]


//! [3]
start( 1 )
stateChanged( HostLookup )
stateChanged( Connecting )
stateChanged( Connected )
finished( 1, false )

start( 2 )
stateChanged( LoggedIn )
finished( 2, false )

start( 3 )
finished( 3, false )

start( 4 )
dataTransferProgress( 0, 3798 )
dataTransferProgress( 2896, 3798 )
readyRead()
dataTransferProgress( 3798, 3798 )
readyRead()
finished( 4, false )

start( 5 )
stateChanged( Closing )
stateChanged( Unconnected )
finished( 5, false )

done( false )
//! [3]


//! [4]
start( 1 )
stateChanged( HostLookup )
stateChanged( Connecting )
stateChanged( Connected )
finished( 1, false )

start( 2 )
finished( 2, true )

done( true )
//! [4]
