/*
 * six_app.h
 *
 *  Created on: Jul 25, 2016
 *  Updated on: 2016.11.11
 *  Updated on: Jan 31, 2017; Feb 8, 2017; Feb 14, 2017
 *      Author: Qige Zhao <qige@6harmonics.com>
 */

#ifndef SIX_APP_H_
#define SIX_APP_H_

#include "_gws.h"
#include "_def.h"


#define APP_DESC				("GWS Analog Baseband")
#define APP_VERSION				("v1.0-1-140217. Buildtime: "__DATE__", "__TIME__)


// size define
#define APP_NAME_LENGTH			16

// ABB source is IWINFO
#if (defined(_ABB_SRC) && (_ABB_SRC == IWINFO))
#define ABB_IFNAME_LENGTH		16
#endif


// user input struct
typedef struct {
	struct {
		int version;
		int help;
		int debug;
		int daemon;
	} flag;
	struct {
		int pid;
		char app[APP_NAME_LENGTH];
		char key[GWS_APP_KEY_LENGTH];

#if (defined(_ABB_SRC) && (_ABB_SRC == IWINFO))
		int bw;
		char ifname[ABB_IFNAME_LENGTH];
#endif
		int idle;

	} conf;
} APP_ENV;

#endif /* SIX_APP_H_ */
