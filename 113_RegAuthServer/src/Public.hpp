#ifndef __PUBLIC_HPP__
#define __PUBLIC_HPP__

#include "GameProtocol.hpp"
#include "RegAuthErrorNumDef.hpp"

typedef struct
{
    GameProtocolMsg stResponseMsg; // ��Ӧ��Ϣ
    int iNeedResponse;       // �Ƿ���Ҫ�ظ���1��ʾ��Ҫ�ظ���0��ʾ����Ҫ�ظ�
} SHandleResult;

const int NETHEAD_V2_SIZE = 24;

typedef struct tagNetHead_V2
{
    unsigned int    m_uiSocketFD; //!<�׽���
    unsigned int    m_uiSocketTime;    //!<�׽��ִ���ʱ��
    unsigned int    m_uiSrcIP; //!<Դ��ַ
    unsigned short  m_ushSrcPort; //!<Դ�˿�
    unsigned short  m_ushReservedValue01; //!<�ֽڶ��룬δ��
    unsigned int    m_uiCodeTime; //!<��Ϣʱ��
    unsigned int    m_uiCodeFlag; //!<��Ϣ��־������ʵ���׽��ֿ���
} TNetHead_V2;

const int MAX_CODE_LEN = 10240;

const int MAX_PATH_LEN = 256;      // ����·������󳤶�
const int MAX_SHELL_CMD_LEN = 512; // shell�������󳤶�

const int MAX_LIVE_TIME_OF_CACHE = 60; // cache���������ʱ��Ϊ60��

#endif // __PUBLIC_HPP__