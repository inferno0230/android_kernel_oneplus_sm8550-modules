/***************************************************************
** Copyright (C), 2022, OPLUS Mobile Comm Corp., Ltd
**
** File : oplus_display_esd.h
** Description : oplus esd feature
** Version : 2.0
** Date : 2021/11/26
** Author : Display
******************************************************************/
#ifndef _OPLUS_ESD_H_
#define _OPLUS_ESD_H_

#include "dsi_panel.h"
#include "dsi_defs.h"
#include "oplus_display_private_api.h"

int oplus_panel_parse_esd_reg_read_configs(struct dsi_panel *panel);
bool oplus_panel_validate_reg_read(struct dsi_panel *panel);
void oplus_panel_esd_set_page(struct dsi_panel *panel, int cmd_index);
int oplus_display_status_check_mipi_err_gpio(struct dsi_display *display);

#endif /* _OPLUS_ESD_H_ */

