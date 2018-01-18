#include <iostream>
#include <string>
using namespace std;

class unggas {
	public:
		void suara(string bunyi);
		int terbang(string sayap);
		string renang;
		void ukuranTelur(string ukuran);
		void jumlahTelur(int jumlah);
};
int main(){
	unggas ayamlaki,ayambini,itiklaki,itikbini,angsalaki,angsabini,puyuhlaki,puyuhbini,belibislaki,belibisbini;
	ayamlaki.renang	="kada bisa bakunyung ";
	ayambini.renang ="kada bisa bakunyung ";
	itiklaki.renang	="harat bakunyung ";
	itikbini.renang	="harat bakunyung ";
	angsalaki.renang="jago bakunyung ";
	angsabini.renang="jago bakunyung ";
	puyuhlaki.renang="kada bisa bakunyung ";
	puyuhbini.renang="kada bisa bakunyung ";
	belibislaki.renang="harat banar bakunyung ";
	belibisbini.renang="harat banar bakunyung ";
	
	cout <<"Ciri-ciri ayam laki: \n\n";
	cout <<(ayamlaki.renang);
	ayamlaki.suara("kukuruyuk");
	ayamlaki.terbang("kada kawa tinggi ");
	ayamlaki.ukuranTelur("laki kada bahintalu");
	ayamlaki.jumlahTelur(0);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri ayam bini: \n\n";
	cout <<(ayambini.renang);
	ayambini.suara("kutakkutak");
	ayambini.terbang("kada kawa tinggi ");
	ayambini.ukuranTelur("sadang");
	ayambini.jumlahTelur(15);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri itik laki: \n\n";
	cout <<(itiklaki.renang);
	itiklaki.suara("gugakgugak");
	itiklaki.terbang("harat jua ");
	itiklaki.ukuranTelur("laki kada bahintalu");
	itiklaki.jumlahTelur(0);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri itik bini: \n\n";
	cout <<(itikbini.renang);
	itikbini.suara("gakgakgak");
	itikbini.terbang("harat jua ");
	itikbini.ukuranTelur("ganal pada ayam");
	itikbini.jumlahTelur(22);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri angsa laki: \n\n";
	cout <<(angsalaki.renang);
	angsalaki.suara("nyuukkk");
	angsalaki.terbang("sadang haja ");
	angsalaki.ukuranTelur("laki kada bahintalu");
	angsalaki.jumlahTelur(0);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri angsa bini: \n\n";
	cout <<(angsabini.renang);
	angsabini.suara("nyaakkk");
	angsabini.terbang("sadang haja ");
	angsabini.ukuranTelur("ganal banar");
	angsabini.jumlahTelur(10);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri puyuh laki: \n\n";
	cout <<(puyuhlaki.renang);
	puyuhlaki.suara("kurrrhhh");
	puyuhlaki.terbang("kada bisa tarabang ");
	puyuhlaki.ukuranTelur("laki kada bahintalu");
	puyuhlaki.jumlahTelur(0);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri puyuh bini: \n\n";
	cout <<(puyuhbini.renang);
	puyuhbini.suara("wruuhhh");
	puyuhbini.terbang("kada bisa ");
	puyuhbini.ukuranTelur("halus");
	puyuhbini.jumlahTelur(30);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri belibis laki: \n\n";
	cout <<(belibislaki.renang);
	belibislaki.suara("ckakckak");
	belibislaki.terbang("tinggi banar ");
	belibislaki.ukuranTelur("laki kada bahintalu");
	belibislaki.jumlahTelur(0);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri belibis bini: \n\n";
	cout <<(belibisbini.renang);
	belibisbini.suara("ckaaakkk");
	belibisbini.terbang("tinggi banar ");
	belibisbini.ukuranTelur("sadang");
	belibisbini.jumlahTelur(6);
	cout <<"_______________________________\n\n";
}
void unggas::suara(string bunyi){
	cout <<"\nbunyinya "<<bunyi<<endl;
}
int unggas::terbang(string sayap){
	cout <<"terbang "<<sayap<<endl;
}
void unggas::ukuranTelur(string ukuran){
	cout <<"hintalunya: "<<ukuran<<endl;
}
void unggas::jumlahTelur(int jumlah){
	cout <<"bahintalu "<<jumlah<<" butir"<<endl;
}
