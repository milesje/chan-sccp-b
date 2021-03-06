/*!
 * \file        sccp_cli.h
 * \brief       SCCP CLI Header
 * \author      Sergio Chersovani <mlists [at] c-net.it>
 * \note        Reworked, but based on chan_sccp code.
 *              The original chan_sccp driver that was made by Zozo which itself was derived from the chan_skinny driver.
 *              Modified by Jan Czmok and Julien Goodwin
 * \note        This program is free software and may be modified and distributed under the terms of the GNU Public License.
 *              See the LICENSE file at the top of the source tree.
 *
 * $Date$
 * $Revision$
 */
#ifndef __SCCP_CLI_H
#define __SCCP_CLI_H

#ifdef CS_IPV6
#define CLI_AMI_LIST_WIDTH 46
#else
#define CLI_AMI_LIST_WIDTH 21
#endif



void sccp_register_cli(void);
void sccp_unregister_cli(void);

#endif														// __SCCP_CLI_H
