#include <tchar.h>
#include <winsock.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
	// ���[�U�[���̎擾.
	char UserName[256];
	DWORD Size = sizeof( UserName );
	if ( GetUserNameA( UserName, &Size ) == 0 ) {
		//�擾�Ɏ��s����
		puts( "���[�U�[���̎擾�Ɏ��s���܂����B" );
	}

	// �_�E�����[�h�t�H���_�̐�΃p�X�̍쐬.
	std::string Path = "C:\\Users\\" + std::string( UserName ) + "\\Downloads\\Text.txt";
	puts( Path.c_str() );

	// �e�L�X�g���o��.
	std::ofstream outputfile( Path );
	outputfile << "Test";
	outputfile.close();
	return 0;
}