﻿#ifndef GLOBAL_H
#define GLOBAL_H

//文件编码
#include <QTextCodec>
#include <QString>
/*
#define DEBUG_FILE
#define DEBUG_RUN
#define DEBUG_NETWORK_TRACE
#define DEBUG_TCP_TRACE
#define DEBUG_UI_TRACE
*/

#define DEBUG_NETWORK_TRACE

#define LOG


#ifdef DEBUG_NETWORK_TRACE
#include <stdio.h>
#define DEBUG_NETWORK(format,...) printf("[File: " __FILE__ ", Line: %d]:" format "\n", __LINE__, ##__VA_ARGS__)
#else
#define DEBUG_NETWORK(format,...)
#endif

#ifdef DEBUG_UI_TRACE
#include <stdio.h>
#define DEBUG_UI(format,...) printf("[File: " __FILE__ ", Line: %d]:" format "\n", __LINE__, ##__VA_ARGS__)
#else
#define DEBUG_UI(format,...)
#endif


#ifdef DEBUG_TCP_TRACE
#include <stdio.h>
#define DEBUG_TCP(format,...) printf("[File: " __FILE__ ", Line: %d]:" format "\n", __LINE__, ##__VA_ARGS__)
#else
#define DEBUG_TCP(format,...)
#endif



#ifdef DEBUG_FILE
#include <stdio.h>
#define TRACE_FILE(format,...) printf("[File: " __FILE__ ", Line: %d]:" format "\n", __LINE__, ##__VA_ARGS__)
#else
#define TRACE_FILE(format,...)
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
