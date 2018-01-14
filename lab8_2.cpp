#include <iostream>

using namespace std;

int main () {

        char name[] = {"chonlada"};
        int nameLength = 9;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้

        char tao[9];
        tao[0]=name [8];
        tao[1]=name [7];
        tao[2]=name [6];
        tao[3]=name [5];
        tao[4]=name [4];
        tao[5]=name [3];
        tao[6]=name [2];
        tao[7]=name [1];
        tao[8]=name [0];
        tao[9]='\0';
        cout << tao;

        tao[0]= tao[0] +1;
        tao[1]= tao[1] +1;
        tao[2]= tao[2] +1;
        tao[3]= tao[3] +1;
        tao[4]= tao[4] +1;
        tao[5]= tao[5] +1;
        tao[6]= tao[6] +1;
        tao[7]= tao[7] +1;
        tao[8]= tao[8] +1;
        cout << tao;



        return 0;
}
