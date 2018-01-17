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
	unggas ayamlaki,ayambini;
	ayamlaki.renang	="kada bisa bakunyung";
	ayambini.renang ="kada bisa bakunyung";
	
	cout <<(ayamlaki.renang);
	ayamlaki.suara("kukuruyuk");
}
void unggas::suara(string bunyi){
	cout <<"bunyinya "<<bunyi<<endl;
}
