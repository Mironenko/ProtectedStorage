#ifndef HELPDIALOG_H
#define HELPDIALOG_H

#include <QDialog>

namespace Ui {
	class HelpDialog;
}

class HelpDialog : public QDialog
{
	Q_OBJECT

public:
	explicit HelpDialog(QWidget* parent = nullptr);
	~HelpDialog();

public slots:
	void setupText(const char** text);

private:
	Ui::HelpDialog *ui;
};

#endif
