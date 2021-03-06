/*
 * Copyright (C) 2013 ~ 2015 National University of Defense Technology(NUDT) & Kylin Ltd.
 *
 * Authors:
 *  Kobe Lee    xiangli@ubuntukylin.com/kobe24_lixiang@126.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CPUWIDGET_H
#define CPUWIDGET_H

#include <QWidget>
#include "computerpage.h"
#include "../component/scrollwidget.h"
#include <QMap>
//#include <QTimer>

class QVariant;
class SystemDispatcher;

class CpuWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CpuWidget(QWidget *parent = 0, SystemDispatcher *proxy = 0);
    ~CpuWidget();
    void initData();
    bool getStatus();

signals:

public slots:
//    void updateCpuTemp();

private:
    ScrollWidget *scroll_widget;
    ComputerPage *page;
    QMap<QString, QVariant> cpu_info_map;
    SystemDispatcher *systemproxy;
    bool dataOK;
//    QTimer *timer;
};

#endif // CPUWIDGET_H
