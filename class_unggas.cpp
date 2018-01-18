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
	
	cout <<(ayamlaki.renang);
	ayamlaki.suara("kukuruyuk");
	ayamlaki.terbang("kada kawa tinggi ");
	ayamlaki.ukuranTelur("laki kada bahintalu");
	ayamlaki.jumlahTelur(0);
	
	cout <<(ayambini.renang);
	ayambini.suara("kutakkutak");
	ayambini.terbang("kada kawa tinggi ");
	ayambini.ukuranTelur("sadang");
	ayambini.jumlahTelur(15);
	
	cout <<(itiklaki.renang);
	itiklaki.suara("gugakgugak");
	itiklaki.terbang("harat jua tarabang ");
	itiklaki.ukuranTelur("laki kada bahintalu");
	itiklaki.jumlahTelur(0);
	
	cout <<(itikbini.renang);
	itikbini.suara("gakgakgak");
	itikbini.terbang("harat jua tarabang ");
	itikbini.ukuranTelur("ganal pada ayam");
	itikbini.jumlahTelur(22);
	
	cout <<(angsalaki.renang);
	angsalaki.suara("nyuukkk");
	angsalaki.terbang("sadang haja tarabangnya ");
	angsalaki.ukuranTelur("laki kada bahintalu");
	angsalaki.jumlahTelur(0);
	
	cout <<(angsabini.renang);
	angsabini.suara("nyaakkk");
	angsabini.terbang("sadang haja tarabangnya ");
	angsabini.ukuranTelur("ganal banar");
	angsabini.jumlahTelur(10);
	
	cout <<(puyuhlaki.renang);
	puyuhlaki.suara("kurrrhhh");
	puyuhlaki.terbang("kada bisa tarabang ");
	puyuhlaki.ukuranTelur("laki kada bahintalu");
	puyuhlaki.jumlahTelur(0);
	
	cout <<(puyuhbini.renang);
	puyuhbini.suara("wruuhhh");
	puyuhbini.terbang("kada bisa tarabang ");
	puyuhbini.ukuranTelur("halus");
	puyuhbini.jumlahTelur(30);
	
	cout <<(belibislaki.renang);
	belibislaki.suara("ckakckak");
	belibislaki.terbang("tinggi banar ");
	belibislaki.ukuranTelur("laki kada bahintalu");
	belibislaki.jumlahTelur(0);
	
	cout <<(belibisbini.renang);
	belibisbini.suara("ckaaakkk");
	belibisbini.terbang("tinggi banar ");
	belibisbini.ukuranTelur("sadang");
	belibisbini.jumlahTelur(6);
}
void unggas::suara(string bunyi){
	cout <<"bunyinya "<<bunyi<<endl;
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
