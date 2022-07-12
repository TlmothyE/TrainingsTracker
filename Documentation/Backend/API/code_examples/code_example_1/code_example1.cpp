
QNetworkRequest request(url);
request.setHeader( QNetworkRequest::ContentTypeHeader, "some/type");
request.setRawHeader("Last-Modified", "Sun 6 Nov");
manager->get( header )