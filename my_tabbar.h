#ifndef MY_TABBAR_H
#define MY_TABBAR_H
#include <QFontMetrics>
#include <QPainter>
#include <QProxyStyle>
#include <QScreen>
#include <QStyle>
#include <QStyleOptionTab>
class CustomTabStyle : public QProxyStyle {
public:
    uint32_t tabbar_width  = 100;
    uint32_t tabbar_height = 70;

public:
    QSize sizeFromContents(ContentsType type, const QStyleOption* option, const QSize& size, const QWidget* widget) const
    {
        QSize s = QProxyStyle::sizeFromContents(type, option, size, widget);
        if (type == QStyle::CT_TabBarTab) {
            s.transpose();
            s.rwidth()  = tabbar_width;  // 设置每个tabBar中item的大小
            s.rheight() = tabbar_height;
        }
        return s;
    }

    void drawControl(ControlElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const
    {
        if (element == CE_TabBarTabLabel) {
            if (const QStyleOptionTab* tab = qstyleoption_cast<const QStyleOptionTab*>(option)) {
                QRect allRect = tab->rect;

                if (tab->state & QStyle::State_Selected) {
                    painter->save();
                    painter->setPen(0xc8c8ff);
                    painter->setBrush(QBrush(0xc8c8ff));
                    painter->drawRect(allRect.adjusted(5, 5, -5, -5));
                    painter->restore();
                }

                QRect tabRect = allRect.adjusted(0, 0, -0, -allRect.height() / 2);  // 调整绘制文本的区域

                if (!tab->icon.isNull()) {
                    int   iconSize = tabbar_height / 2;                                   // 设置图标大小
                    int   iconX    = tabRect.width() / 2 - iconSize / 2;                  // 图标的横坐标
                    int   iconY    = tabRect.top() + tabRect.height() - iconSize * 0.75;  // 图标的纵坐标
                    QRect iconRect(iconX, iconY, iconSize, iconSize);

                    tab->icon.paint(painter, iconRect, Qt::AlignCenter, QIcon::Normal, QIcon::On);  // 绘制图标
                }

                QTextOption option;
                option.setAlignment(Qt::AlignCenter);
                if (tab->state & QStyle::State_Selected) {
                    painter->setPen(0xf8fcff);
                } else {
                    painter->setPen(0x5d5d5d);
                }
                QRect textRect = QRect(tabRect.left(), tabRect.bottom(), tabRect.width(), allRect.height() / 2);
                painter->drawText(textRect, tab->text, option);
                return;
            }
        }

        if (element == CE_TabBarTab) {
            QProxyStyle::drawControl(element, option, painter, widget);
        }
    }
};
#endif  // MY_TABBAR_H
