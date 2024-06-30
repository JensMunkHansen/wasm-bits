#include <QGuiApplication>
#include <QQuickView>
#include <QStringLiteral>


int main(int argc, char *argv[]){
	QGuiApplication app(argc, argv);

	const auto screens = app.screens();
	if(screens.size() < 2){
		qDebug() << "Expected at least 2 screens";
		return 1;
	}

	for(auto & screen : screens){
		qDebug() << screen;
	}

	QQuickView mainViewer;
	mainViewer.setScreen(screens[0]);
	//	mainViewer.setSource(QUrl(u"qrc:/wasm-multiwindow/main.qml"_qs));
	mainViewer.setSource(QUrl(QStringLiteral("qrc:/wasm-multiwindow/main.qml")));
	
	mainViewer.setResizeMode(QQuickView::SizeRootObjectToView);


	QQuickView secondViewer;
	secondViewer.setScreen(screens[1]);
	//	secondViewer.setSource(QUrl(u"qrc:/wasm-multiwindow/second.qml"_qs));
	secondViewer.setSource(QUrl(QStringLiteral("qrc:/wasm-multiwindow/second.qml")));
	secondViewer.setResizeMode(QQuickView::SizeRootObjectToView);

	mainViewer.show();
	secondViewer.show();



	return app.exec();
}
