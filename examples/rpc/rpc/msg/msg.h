/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MSG_H_RPCGEN
#define _MSG_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct args_in {
	struct {
		u_int heights_len;
		int *heights_val;
	} heights;
	struct {
		u_int widths_len;
		int *widths_val;
	} widths;
};
typedef struct args_in args_in;

#define MESSAGEPROG 99
#define MESSAGEVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define PRINTMESSAGE 1
extern  int * printmessage_1(char **, CLIENT *);
extern  int * printmessage_1_svc(char **, struct svc_req *);
extern int messageprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define PRINTMESSAGE 1
extern  int * printmessage_1();
extern  int * printmessage_1_svc();
extern int messageprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_args_in (XDR *, args_in*);

#else /* K&R C */
extern bool_t xdr_args_in ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MSG_H_RPCGEN */