#include <tchar.h>
#include <winsock.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
	// ユーザー名の取得.
	char UserName[256];
	DWORD Size = sizeof( UserName );
	if ( GetUserNameA( UserName, &Size ) == 0 ) {
		//取得に失敗した
		puts( "ユーザー名の取得に失敗しました。" );
	}

	// ダウンロードフォルダの絶対パスの作成.
	std::string Path = "C:\\Users\\" + std::string( UserName ) + "\\Downloads\\Text.txt";
	puts( Path.c_str() );

	// テキストを出力.
	std::ofstream outputfile( Path );
	outputfile << "Test";
	outputfile.close();
	return 0;
}