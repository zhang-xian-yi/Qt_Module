﻿#ifndef EXTSTRUCT_H
#define EXTSTRUCT_H

struct  Vec3F
{
    float one;
    float two;
    float three;
};

struct  Vec2F
{
    float one;
    float two;
};

// 颜色RGB
struct  ColorRGB
{
    ColorRGB(){}
    ColorRGB(float red, float green, float blue)
    {
        this->r = red;
        this->g = green;
        this->b = blue;
    }
    float r;
    float g;
    float b;
};

//默认材质
struct  Material
{
    float ambient = 1;//环境光
    float diffuse = 0;//漫反射
    float specular = 0;//镜面反射，值越大，越闪亮
    float shininess = 16;//值越大光斑越亮
};

struct  CoordPhysical
{
    Vec3F PostionXYZ;//模型场景坐标（相对于场景模型中心不同的坐标点） 3个浮点数
    QVector<float> PhyQuaValueVec; // 存储物理量要素值数据
};

//输入定点数据
struct  InVertex
{
    QVector<QString> PhyQuaNameVec;// 存储物理量（PhysicalQuantity）要素名的列表
    QVector<CoordPhysical> stCoordPhysicalVec;
    Vec3F Normal;
    Vec3F TexCoord;
};

//输入网格面数据
struct  InFaceIndex
{
    QVector<uint32_t> IndexsArray;
};

#endif // EXTSTRUCT_H