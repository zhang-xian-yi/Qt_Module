﻿#ifndef GLOBAL_H
#define GLOBAL_H

//文件编码
#include <QTextCodec>
#include <QString>


#define LOG
#define DEBUG_FILE


#ifdef DEBUG_FILE
#include <stdio.h>
#define TRACE_DEBUG(format,...) printf("[File: " __FILE__ ", Line: %d]:" format "\n", __LINE__, ##__VA_ARGS__)
#else
#define TRACE_DEBUG(format,...)
#endif

#ifdef DEBUG_RUN
#include <stdio.h>
#define TRACE_DEBUG(format,...) printf("[File: " __FILE__ ", Line: %d]:" format "\n", __LINE__, ##__VA_ARGS__)
#else
#define TRACE_DEBUG(format,...)
#endif



#ifdef LOG
#include <stdio.h>
#define LOG_INFO(format,...) printf("[File: " __FILE__ ", Line: %d]:" format "\n", __LINE__, ##__VA_ARGS__)
#else
#define LOG_INFO(format,...)
#endif

//文件编码
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif


#define FromQString(x) QTextCodec::codecForLocale()->fromUnicode(x).toStdString()
#define ToQString(x) QTextCodec::codecForLocale()->toUnicode((x).c_str())

#endif // GLOBAL_H
