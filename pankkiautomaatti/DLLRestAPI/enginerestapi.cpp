#include "enginerestapi.h"


engineRestApi::engineRestApi()
{

}

engineRestApi::~engineRestApi()
{

}

void engineRestApi::getPinEngine(QNetworkReply *reply)
{
    QString site_url="http://localhost:3000/card";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished (QNetworkReply*)),this, SLOT(getBookSlot(QNetworkReply*)));
    reply = getManager->get(request);
    }
