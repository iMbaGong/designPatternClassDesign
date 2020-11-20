#include"../h/RegisterForm.h"

/**
 * @brief: ����캯��
 * @param: data�Ǳ������
 * @ret:   ��
 */
RegisterForm::RegisterForm(const vector<string>& data){
	formData = data;
}

/**
 * @brief: ��д���
 * @param: data�Ǳ������
 * @ret:   ��
 */
void RegisterForm::fillForm(const vector<string>& data) {
	formData = data;
}

/**
 * @brief: ��ȡ�������
 * @param: ��
 * @ret:   �������
 */
vector<string> RegisterForm::getFormData() const {
	return formData;
}

/**
 * @brief: �������ת�����ַ���
 * @param: ��
 * @ret:   ������ݵ��ַ���
 */
string RegisterForm::toString() const{
	vector<string> formHeader = getFormHeader();
	string str= "{"+ formHeader[0] + ":" + formData[0];
	for (int i = 1; i < formHeader.size(); i++) {
		str += ","+ formHeader[i] + ":" + formData[i];
	}
	str += "}";
	return str;
}
