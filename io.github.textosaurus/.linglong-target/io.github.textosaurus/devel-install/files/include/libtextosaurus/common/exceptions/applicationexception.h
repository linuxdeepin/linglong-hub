// This file is distributed under GNU GPLv3 license. For full license text, see <project-git-repository-root-folder>/LICENSE.md.

#ifndef APPLICATIONEXCEPTION_H
#define APPLICATIONEXCEPTION_H

#include <QString>

class ApplicationException {
  public:
    explicit ApplicationException(QString message = QString());
    virtual ~ApplicationException() = default;

    QString message() const;

  private:
    QString m_message;
};

#endif // APPLICATIONEXCEPTION_H
