//===- ProjectInfo.cpp - ART-GUI utilpart -----------------------*- C++ -*-===//
//
//                     ANDROID REVERSE TOOLKIT
//
// This file is distributed under the GNU GENERAL PUBLIC LICENSE
// V3 License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#include "utils/ProjectInfo.h"

ProjectInfo *ProjectInfo::instance ()
{
    static ProjectInfo* mInstance = nullptr;
    if(mInstance == nullptr) {
        mInstance = new ProjectInfo;
    }
    return mInstance;
}

QString ProjectInfo::getInfo(QString key)
{
    return mMap[key];
}

void ProjectInfo::setInfo(QString key, QString value)
{
    mMap[key] = value;
}

void ProjectInfo::reset()
{
    mMap.clear();
}

ProjectInfo::ProjectInfo()
{

}