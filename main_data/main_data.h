#ifndef MAIN_DATA_H
#define MAIN_DATA_H

#include <QString>

class main_data
{
public:
    main_data();
	QString lock_style;
	QString default_style;
    QString lock_style_other_color;
    QString default_style_other_color;
	QString success_style_label;
	QString error_style_label;
	QString lock_style_label;

};

#endif // MAIN_DATA_H
