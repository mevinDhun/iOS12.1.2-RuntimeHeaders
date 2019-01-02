/* Generated by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint_flow : NSObject <OS_nw_endpoint_flow> {
    id /* block */  adaptive_read_event_handler;
    id /* block */  adaptive_write_event_handler;
    unsigned int  assigned_initial_writes;
    NSObject<OS_nw_channel> * channel;
    NSObject<OS_dispatch_queue> * client_queue;
    NWConcrete_nw_endpoint_flow * clone_from_flow;
    unsigned int  configured_keepalive_count;
    unsigned int  configured_keepalive_interval;
    NSObject<OS_nw_fd_wrapper> * connected_fd_wrapper;
    NSObject<OS_nw_array> * connected_metadata;
    NSObject<OS_nw_path> * connected_path;
    unsigned int  custom_protocols_only;
    NSObject<OS_dispatch_data> * final_data;
    NSObject<OS_nw_error> * final_error;
    unsigned long long  first_keepalive_time;
    NSObject<OS_nw_endpoint> * flow_divert_endpoint;
    NSObject<OS_xpc_object> * flow_divert_token;
    NSObject<OS_nw_path_flow_registration> * flow_registration;
    unsigned int  has_connected;
    unsigned int  initial_payload_sent;
    unsigned int  initialized_protocol;
    NSObject<OS_nw_dictionary> * input_contexts;
    unsigned int  input_finished;
    void * internally_retained_object;
    struct nw_protocol_identifier { BOOL x1[32]; int x2; int x3; } * ip_protocol_identifier;
    unsigned int  is_channel;
    unsigned int  is_flow_divert;
    unsigned int  is_multipath;
    unsigned int  is_viable;
    unsigned int  keepalive_count;
    unsigned int  keepalive_event_enabled;
    id /* block */  keepalive_event_handler;
    NSObject<OS_nw_error> * last_error;
    NSObject<OS_nw_content_context> * last_output_context;
    unsigned int  last_output_context_pending;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  multipath_nat64_query_outstanding;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  pending_input_frames;
    unsigned int  pending_write_bytes;
    int  pre_connected_fd;
    struct nw_protocol_callbacks { 
        int (*add_input_handler)(); 
        int (*remove_input_handler)(); 
        int (*replace_input_handler)(); 
        int (*connect)(); 
        int (*disconnect)(); 
        int (*connected)(); 
        int (*disconnected)(); 
        int (*error)(); 
        int (*input_available)(); 
        int (*output_available)(); 
        int (*get_input_frames)(); 
        int (*get_output_frames)(); 
        int (*finalize_output_frames)(); 
        int (*link_state)(); 
        int (*get_parameters)(); 
        int (*get_path)(); 
        int (*get_local_endpoint)(); 
        int (*get_remote_endpoint)(); 
        int (*register_notification)(); 
        int (*unregister_notification)(); 
        int (*notify)(); 
        int (*updated_path)(); 
        int (*supports_external_data)(); 
        int (*input_finished)(); 
        int (*output_finished)(); 
        int (*get_output_local_endpoint)(); 
        int (*get_output_interface)(); 
        int (*waiting_for_output)(); 
        int (*copy_info)(); 
        int (*add_listen_handler)(); 
        int (*remove_listen_handler)(); 
        int (*get_message_properties)(); 
        int (*reset)(); 
        int (*input_flush)(); 
    }  protocol_callbacks;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  protocol_handler;
    struct nw_protocol_identifier { 
        BOOL name[32]; 
        int level; 
        int mapping; 
    }  protocol_identifier;
    unsigned short  protocol_log_id_num;
    id /* block */  read_close_handler;
    NSObject<OS_nw_read_request> * read_requests;
    unsigned int  servicing_reads;
    unsigned int  setup_protocols;
    struct _DNSServiceRef_t { } * sleep_proxy_ref;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * socket_protocol;
    unsigned int  started;
    unsigned int  started_protocols;
    struct tcp_connection_info { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 17; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; } * tcp_connection_info;
    struct tcp_info { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned char x30; unsigned char x31; unsigned short x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned long long x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; struct tcp_conn_status { unsigned int x_45_1_1 : 1; unsigned int x_45_1_2 : 1; unsigned int x_45_1_3 : 1; unsigned int x_45_1_4 : 1; } x45; } * tcp_info;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * tls_protocol;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * transport_protocol;
    id /* block */  write_close_handler;
    NSObject<OS_nw_write_request> * write_requests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelWithHandler:(id)arg1 forced:(bool)arg2;
- (void)dealloc;
- (id)init;
- (void)startWithHandler:(id)arg1;
- (void)updatePathWithHandler:(id)arg1;

@end
