#include <stdio.h>

int main(){
	int a, chuc, dvi;
	printf("Nhap vao so co hai chu so: ");
	scanf("%d", &a);
	if (a<100 && a >9){
	    chuc = a/10; dvi = a%10;
		switch (chuc){
			case 1:
				printf("Muoi ");
				break;
			case 2:	
				printf("Hai muoi ");
				break;
			case 3:
		  		printf("Ba muoi ");
		  		break;
			case 4:
				printf("Bon muoi ");
				break;
			case 5:
				printf("Nam muoi ");
				break;
			case 6:
				printf("Sau muoi ");
				break;
			case 7:
				printf("Bay muoi ");
				break;
			case 8:
				printf("Tam muoi ");
				break;
			default:
				printf("Chin muoi ");
				break;
		}
		switch (dvi){
            case 1:
				printf("Mot");
				break;
			case 2:	
				printf("Hai");
				break;
			case 3:
		  		printf("Ba");
		  		break;
			case 4:
				printf("Bon");
				break;
			case 5:
				printf("Lam");
				break;
			case 6:
				printf("Sau");
				break;
			case 7:
				printf("Bay");
				break;
			case 8:
				printf("Tam");
				break;
			case 9:
				printf("Chin");
				break;
		}
	}else printf("Khong hop le");
	return 0;		
}
