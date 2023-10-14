// This file is distributed under GNU GPLv3 license. For full license text, see <project-git-repository-root-folder>/LICENSE.md.

#ifndef BASENETWORKACCESSMANAGER_H
#define BASENETWORKACCESSMANAGER_H

#include <QNetworkAccessManager>

// This is base class for all network access managers.
class BaseNetworkAccessManager : public QNetworkAccessManager {
  Q_OBJECT

  public:
    explicit BaseNetworkAccessManager(QObject* parent = nullptr);
    virtual ~BaseNetworkAccessManager() = default;

  public slots:
    virtual void loadSettings();

  protected slots:
    void onSslErrors(QNetworkReply* reply, const QList<QSslError>& error);

  protected:
    virtual QNetworkReply* createRequest(Operation op, const QNetworkRequest& request, QIODevice* outgoingData) override;
};

#endif // BASENETWORKACCESSMANAGER_H
