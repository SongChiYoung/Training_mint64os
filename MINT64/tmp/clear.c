int main(){
int i =0;
char* video_m = (char *)0xB8000;
while(1){
	video_m [ i] =0;
	video_m [ i+1] = 0x0a;

	i+= 2;

	if (i>= 80*25 *2){
		break;
	}

}
}
