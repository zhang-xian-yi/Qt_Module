#ifndef OPENGLWINLAYER_H
#define OPENGLWINLAYER_H

#include "OpenGLWindowLayer/Src/OWCommon/OpenGLWindowLayer_global.h" //向外部暴露的接口必须使用带模块名的路径
#include "OpenGLWindowLayer/Src/OWCommon/MacroDefine.h"
#include "IOpenGLWin.h"
#include "ILoad3D.h"

class OpenGLWinLayerControl;

//向外部暴露的的接口加上命名空间进行隔离, dll内部函数这不用添加命名空间

namespace OWlayerNS
{
    class OPENGLWINDOWLAYER_EXPORT OpenGLWinLayerrFactory
    {
    SingletonSelfConstruct(OpenGLWinLayerrFactory)

    public:
        //获取opengGL窗口初始化的结果
        IOpenGLWin* GetWindowPtr();
        //获取加载3d模型的操作接口
        ILoad3D* GetLoad3DPtr();
    private:
        //控制器指针
        OpenGLWinLayerControl* m_pOWLCtl;
    };
}


#endif // OPENGLWINLAYER_H
