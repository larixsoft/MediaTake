/****************************************************************************
    Media Take : A Qt and GStreamer Based cross platform Media Player for PC
    Copyright (C) 2013  Anubhav Arun <dr.xperience@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*****************************************************************************/

#ifndef SELECTFILEDIALOG_H
#define SELECTFILEDIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>

namespace Ui {
class SelectFileDialog;
}

class SelectFileDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SelectFileDialog(QWidget *parent = 0);
    ~SelectFileDialog();

signals:
    void selectedPath(QString);
private slots:
    void on_treeViewFolderExplorer_pressed(const QModelIndex &index);

    void on_pushButtonSelect_clicked();

    void on_pushButtonClose_clicked();

private:
    Ui::SelectFileDialog *ui;
    QFileSystemModel *mDirModel;
};

#endif // SELECTFILEDIALOG_H
