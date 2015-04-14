#ifndef EXTENSION_H
#define EXTENSION_H

#include <QObject>
#include <QScriptEngine>

namespace Extensions {

    class Extension : public QObject
    {
        Q_OBJECT
    public:
        explicit Extension(QString path);
        ~Extension();

        Q_INVOKABLE QString id() const;
        Q_INVOKABLE QString name() const;
    signals:

    public slots:

    private:
        QString m_extensionId;
        QString m_name;
        QScriptEngine *m_uiScriptEngine;
        void failedToLoadExtension(QString path, QString reason);
    };

}

#endif // EXTENSION_H
