#include "data.h"

QString lock_style = "padding:2px 5px;"
             "height: 28px;"
             "color: white;"
             "background-color: #2a2a2a;"
             "border-radius: 5px;"
             "border: 2px solid #f5a2a2;"
             "font-size: 14px;";

QString default_style = "padding:2px 5px;"
                "height: 28px;"
                "color: white;"
                "background-color: #2a2a2a;"
                "border-radius: 5px;"
                "border: none;"
                "font-size: 14px;";

QString lock_style_other_color = "padding:2px 5px;"
                         "height: 28px;"
                         "color: white;"
                         "background-color: #404040;"
                         "border-radius: 5px;"
                         "border: 2px solid #f5a2a2;"
                         "font-size: 14px;";

QString default_style_other_color = "padding:2px 5px;"
                            "height: 28px;"
                            "color: white;"
                            "background-color: #404040;"
                            "border-radius: 5px;"
                            "border: none;"
                            "font-size: 14px;";

QString lock_style_label = "font-size: 14px;"
                   "color: #f5a2a2;";

QString success_style_label = "font-size: 14px;"
                      "color: #93edd2";

QString error_style_label = "font-size: 14px;"
                    "color: #ffc552";

QString lock_style_button = "padding: 2px;"
                            "font-size: 14px;"
                            "height: 28px;"
                            "color: white;"
                            "background-color: #949494;"
                            "border-radius: 5px;";

QString default_style_button = "padding: 2px;"
                               "font-size: 14px;"
                               "height: 28px;"
                               "color: white;"
                               "background-color: #404040;"
                               "border-radius: 5px;";

QString g_user_name = "";

int g_status_autorization = 0;
int g_status_delete = 0;
int g_status_change = 0;
int g_status_out = 0;
int g_status_delete_app = 0;
int g_status_change_app = 0;
int g_status_now_profile = 0;
int g_status_online = 0;
int g_status_in_app = 0;

int g_max_price = 0;
int g_min_price = 0;
QString g_technloges = "";
QString g_description = "";

QString g_ui = "";
