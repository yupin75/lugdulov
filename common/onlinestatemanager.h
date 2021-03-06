/*
 * Copyright (C) 2010-2011 Corentin Chary <corentin.chary@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef ONLINE_STATE_MANAGER_H
# define ONLINE_STATE_MANAGER_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>

#include "mobility.h"

class QNetworkAccessManager;

class OnlineStateManager : public QObject {
    Q_OBJECT
public:
    static OnlineStateManager *instance();

    bool isOnline() const;
    void doOnlineTest(const QUrl & url);

private slots:
    void setOnlineState(bool onlineState);
    void onlineTestFinished();

signals:
    void onlineStateChanged(bool onlineState);
    void onlineTestFinished(const QUrl & url, const QByteArray & data, bool ok);

private:
    OnlineStateManager(QObject * parent = NULL);
    ~OnlineStateManager();

    bool online;
    QNetworkConfigurationManager *manager;
    QNetworkAccessManager *am;
    static OnlineStateManager *_instance;
};

#endif
