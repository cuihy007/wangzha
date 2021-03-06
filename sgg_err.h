#ifndef __SGG_ERR_H__
#define __SGG_ERR_H__

enum{
    ERR_SGG_OK=0,
    ERR_SGG_ERR = 1,
    ERR_SGG_ALLOCATE_MEMORY_FAILED,
    ERR_SGG_MEMORY_NOT_ENOUGH,
    ERR_SGG_CONFIG_INVALID,
    ERR_SGG_OPEN_FILE_FAILED,
    ERR_SGG_USER_NOT_EXIST,
    ERR_SGG_INVALID_MSG_TYPE,
    ERR_SGG_INVALID_MSG_BODY,
    ERR_SGG_SERVER_M_NOT_READY,
    ERR_SGG_OBJ_NOT_EXIST,
    ERR_SGG_FUNCTION_NOT_SUPPORT,

    
    ERR_UDP_SOCKET_CLIENT_CREATE_FAILED = 100,
    ERR_UDP_SOCKET_CLIENT_CONNECT_FAILED,
    ERR_UDP_SOCKET_CLIENT_SEND_FAILED,
    ERR_UDP_SOCKET_PARA_INVALID,
    ERR_UDP_SOCKET_SERVER_CREATE_FAILED,
    ERR_UDP_SOCKET_GET_OPT_FAILED,
    ERR_UDP_SOCKET_SET_OPT_FAILED,
    ERR_UDP_SOCKET_SERVER_BIND_FAILED,
    ERR_UDP_SOCKET_ALLOC_MEM_FAILED,
    ERR_UDP_SOCKET_CREATE_THREAD_FAILED,
    ERR_UDP_SOCKET_ACK_STACK_IS_FULL,
    ERR_UDP_SOCKET_SVR_PORT_EXIST,
    ERR_UDP_SOCKET_ACK_STACK_FULL_WITH_HEART,
    ERR_UDP_SOCKET_ACK_STACK_FULL_WITHOUT_HEART,

    ERR_TCP_SOCKET_CLIENT_CREATE_FAILED = 200,
    ERR_TCP_SOCKET_CLIENT_CONNECT_FAILED,
    ERR_TCP_SOCKET_CLIENT_SEND_FAILED,
    ERR_TCP_SOCKET_PARA_INVALID,
    ERR_TCP_SOCKET_SERVER_CREATE_FAILED,
    ERR_TCP_SOCKET_GET_OPT_FAILED,
    ERR_TCP_SOCKET_SET_OPT_FAILED,
    ERR_TCP_SOCKET_SERVER_BIND_FAILED,
    ERR_TCP_SOCKET_ALLOC_MEM_FAILED,
    ERR_TCP_SOCKET_CREATE_THREAD_FAILED,
    ERR_TCP_SOCKET_NOT_ESTABLISHED,
    ERR_TCP_SOCKET_SVR_PORT_EXIST,
    ERR_TCP_SOCKET_ACCEPT_FAILED,
    
};

#endif