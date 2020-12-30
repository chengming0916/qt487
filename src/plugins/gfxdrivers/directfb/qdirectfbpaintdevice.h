/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the plugins of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QDIRECTFBPAINTDEVICE_H
#define QDIRECTFBPAINTDEVICE_H

#include <private/qpaintengine_raster_p.h>
#include "qdirectfbscreen.h"

#ifndef QT_NO_QWS_DIRECTFB

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Gui)

// Inherited by both window surface and pixmap
class QDirectFBPaintEngine;
class QDirectFBPaintDevice : public QCustomRasterPaintDevice
{
public:
    ~QDirectFBPaintDevice();

    virtual IDirectFBSurface *directFBSurface() const;

    bool lockSurface(DFBSurfaceLockFlags lockFlags);
    void unlockSurface();

    // Reimplemented from QCustomRasterPaintDevice:
    void *memory() const;
    QImage::Format format() const;
    int bytesPerLine() const;
    QSize size() const;
    int metric(QPaintDevice::PaintDeviceMetric metric) const;
    DFBSurfaceLockFlags lockFlags() const { return lockFlgs; }
    QPaintEngine *paintEngine() const;
protected:
    QDirectFBPaintDevice(QDirectFBScreen *scr);
    inline int dotsPerMeterX() const
    {
        return (screen->deviceWidth() * 1000) / screen->physicalWidth();
    }
    inline int dotsPerMeterY() const
    {
        return (screen->deviceHeight() * 1000) / screen->physicalHeight();
    }

    IDirectFBSurface *dfbSurface;
#ifdef QT_DIRECTFB_SUBSURFACE
    void releaseSubSurface();
    IDirectFBSurface *subSurface;
    friend class QDirectFBPaintEnginePrivate;
    bool syncPending;
#endif
    QImage lockedImage;
    QDirectFBScreen *screen;
    int bpl;
    DFBSurfaceLockFlags lockFlgs;
    uchar *mem;
    QDirectFBPaintEngine *engine;
    QImage::Format imageFormat;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QT_NO_QWS_DIRECTFB
#endif //QDIRECTFBPAINTDEVICE_H
