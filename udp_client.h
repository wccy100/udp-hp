//
//  udp_client.h
//  udp-hole-punch
//
//  Created by WAYNE SMALL on 2/19/17.
//  Copyright © 2017 Waynemystir. All rights reserved.
//

#ifndef udp_client_h
#define udp_client_h

#include "common.h"
#include "node.h"
#include "network_utils.h"

int wain(void (*self_info)(char *, unsigned short port, unsigned short chat_port, unsigned short family),
		void (*server_info)(char *),
		void (*socket_created)(int sock_fd),
		void (*socket_bound)(void),
		void (*sendto_succeeded)(size_t bytes_sent),
		void (*recd)(size_t bytes_recd, socklen_t addr_len, char *),
		void (*coll_buf)(char *),
		void (*new_client)(SERVER_TYPE, char *),
		void (*confirmed_client)(void),
		void (*stay_touch_recd)(SERVER_TYPE),
		void (*new_peer)(char *),
		void (*hole_punch_sent)(char *, int),
		void (*confirmed_peer_while_punching)(SERVER_TYPE),
		void (*from_peer)(SERVER_TYPE, char *),
		void (*chat_msg)(char *),
		void (*unhandled_response_from_server)(int),
		void (*whilew)(int),
		void (*end_while)(void));

void ping_all_peers();

void send_message_to_all_peers(char *);

void send_message_to_peer(node_min_t *peer, char *msg);

#endif /* udp_client_h */
