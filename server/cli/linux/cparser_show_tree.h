/*----------------------------------------------------------------------
 * This file is generated by mk_parser_show.py.
 *----------------------------------------------------------------------*/
#ifndef __CPARSER_SHOW_TREE_H__
#define __CPARSER_SHOW_TREE_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern cparser_node_t cparser_show_root;

cparser_result_t cparser_cmd_show_protect_engine_work_mode(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_work_mode_online_bridge_proxy(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_work_mode_online_route_proxy(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_work_mode_online_reverse_proxy(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_work_mode_offline(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_encode(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_ip_black_list(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_ip_white_list(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_url_black_list(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_url_white_list(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_security_policy(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_security_policy_detail(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_security_policy_sp_name_detail(cparser_context_t *context,
    char **sp_name_ptr);
cparser_result_t cparser_cmd_show_protect_engine_security_policy_sp_name_type(cparser_context_t *context,
    char **sp_name_ptr,
    char **type_ptr);
cparser_result_t cparser_cmd_show_protect_engine_security_policy_sp_name_type_detail(cparser_context_t *context,
    char **sp_name_ptr,
    char **type_ptr);
cparser_result_t cparser_cmd_show_protect_engine_server_policy(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_server_policy_detail(cparser_context_t *context);
cparser_result_t cparser_cmd_show_protect_engine_server_policy_spname(cparser_context_t *context,
    char **spname_ptr);
cparser_result_t cparser_cmd_show_protect_engine_server_policy_spname_detail(cparser_context_t *context,
    char **spname_ptr);
cparser_result_t cparser_cmd_show_log_type(cparser_context_t *context,
    char **log_type_ptr);
cparser_result_t cparser_cmd_show_log_type_recent_hours(cparser_context_t *context,
    char **log_type_ptr,
    uint32_t *hours_ptr);
cparser_result_t cparser_cmd_show_log_type_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec(cparser_context_t *context,
    char **log_type_ptr,
    uint32_t *start_year_ptr,
    uint32_t *start_month_ptr,
    uint32_t *start_day_ptr,
    uint32_t *start_hour_ptr,
    uint32_t *start_min_ptr,
    uint32_t *start_sec_ptr,
    uint32_t *end_year_ptr,
    uint32_t *end_month_ptr,
    uint32_t *end_day_ptr,
    uint32_t *end_hour_ptr,
    uint32_t *end_min_ptr,
    uint32_t *end_sec_ptr);
cparser_result_t cparser_cmd_show_bridge_br_name(cparser_context_t *context,
    char **br_name_ptr);
cparser_result_t cparser_cmd_show_interface_intf_name(cparser_context_t *context,
    char **intf_name_ptr);
cparser_result_t cparser_cmd_show_running_config(cparser_context_t *context);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __CPARSER_SHOW_TREE_H__ */
