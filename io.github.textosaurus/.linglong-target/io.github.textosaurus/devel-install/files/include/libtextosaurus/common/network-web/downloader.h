// This file is distributed under GNU GPLv3 license. For full license text, see <project-git-repository-root-folder>/LICENSE.md.

#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>

#include "common/network-web/silentnetworkaccessmanager.h"
#include "definitions/definitions.h"

#include <QNetworkReply>
#include <QSslError>

class QTimer;

class Downloader : public QObject {
  Q_OBJECT

  public:

    // Constructors and destructors.
    explicit Downloader(QObject* parent = nullptr);
    virtual ~Downloader() = default;

    // Access to last received full output data/error/content-type.
    QByteArray lastOutputData() const;
    QNetworkReply::NetworkError lastOutputError() const;
    QVariant lastContentType() const;

  public slots:
    void cancel();

    void appendRawHeader(const QByteArray& name, const QByteArray& value);

    // Performs asynchronous download of given file. Redirections are handled.
    void downloadFile(const QString& url, int timeout = DOWNLOAD_TIMEOUT, bool protected_contents = false,
                      const QString& username = QString(), const QString& password = QString());

    void uploadFile(const QString& url, const QByteArray& data, int timeout = DOWNLOAD_TIMEOUT,
                    bool protected_contents = false, const QString& username = QString(),
                    const QString& password = QString());

    void manipulateData(const QString& url, QNetworkAccessManager::Operation operation,
                        const QByteArray& data = QByteArray(),
                        int timeout = DOWNLOAD_TIMEOUT, bool protected_contents = false,
                        const QString& username = QString(), const QString& password = QString());

  signals:

    // Emitted when new progress is known.
    void progress(qint64 bytes_received, qint64 bytes_total);
    void completed(QNetworkReply::NetworkError status, QByteArray contents = QByteArray());

  private slots:
    void finished();

    // Called when progress of downloaded file changes.
    void progressInternal(qint64 bytes_received, qint64 bytes_total);

  private:
    void runDeleteRequest(const QNetworkRequest& request);
    void runPutRequest(const QNetworkRequest& request, const QByteArray& data);
    void runPostRequest(const QNetworkRequest& request, const QByteArray& data);
    void runGetRequest(const QNetworkRequest& request);

  private:
    QNetworkReply* m_activeReply;

    QScopedPointer<SilentNetworkAccessManager> m_downloadManager;
    QTimer* m_timer;

    QHash<QByteArray, QByteArray> m_customHeaders;
    QByteArray m_inputData;
    bool m_targetProtected;
    QString m_targetUsername;
    QString m_targetPassword;
    QByteArray m_lastOutputData;

    QNetworkReply::NetworkError m_lastOutputError;
    QVariant m_lastContentType;
};

#endif // DOWNLOADER_H
