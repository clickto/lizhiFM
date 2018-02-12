#include "donatewidget.h"
#include <QVBoxLayout>
#include <QLabel>

DonateWidget::DonateWidget(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QLabel *label = new QLabel;
    mainLayout->addWidget(label);
    QString str = "<html>"
            "<head/>"

            "<body>"
                "<p>"
                    "<img src=\":/imgs/donate_alipay.jpg\" width=\"300\" />&nbsp;&nbsp;&nbsp;"
                    "<img src=\":/imgs/donate_wechat.jpg\" width=\"300\" />&nbsp;&nbsp;&nbsp;"
                    "<img src=\":/imgs/alipay.jpg\" width=\"300\" />"
                "</p>"
                "<p>手中有余的朋友可以进行小额捐赠，这将使我在开源软件做的更好</p>"
                "<p>囊肿羞涩的朋友可以点击领取支付宝赏金，赏金可以在支付宝现金支付，转账等场合使用，使用赏金后我也将获得一部分赏金。</p>"
                "<p>赏金每天可领一次，未使用赏金将不能领取第二天的赏金。第六期截止时间是2018年2月31日。</p>"
                "<p>二维码顺序为：支付宝、微信赞赏、支付宝赏金</p>"
            "</body>"

            "</html>";
    label->setText(str);
}