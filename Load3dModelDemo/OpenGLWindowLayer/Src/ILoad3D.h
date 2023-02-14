#ifndef ILOAD3D_H
#define ILOAD3D_H

#include "OpenGLWindowLayer/Src/OWCommon/OpenGLWindowLayer_global.h" //向外部暴露的接口必须使用带模块名的路径

//向外部暴露的的接口加上命名空间进行隔离, dll内部函数这不用添加命名空间
namespace OWlayerNS
{
    class OPENGLWINDOWLAYER_EXPORT ILoad3D
    {
    public:
        virtual void Load3DModel(QString path) = 0;
    };

}

#endif // ILOAD3D_H