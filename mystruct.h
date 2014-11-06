/*file for structure*/

struct vect{
	unsigned char value;
	int elem;
	float percent;
};



void inizialize(struct vect *a){
	int j;
	for ( j = 0; j < 26; j++){
		a[j].value = (unsigned char)j+97;
		a[j].elem = 0;
		a[j].percent = 0;
	}
	

}

void print(struct vect *a){
	int j;
	printf("+----+------+-------------+\n");
	printf("| CH | elem |        %     \n");
	printf("+----+------+-------------+\n");
	for ( j = 0; j < 26; j++){
		
		printf("| %2c | %4d | %3f\% \n",a[j].value,a[j].elem,a[j].percent); 
		printf("+----+------+-------------+\n");
	}
}

void calculate(struct vect *a){

	int j;
	float temp = 0.0f;
	int value = 0;
	for ( j = 0; j < 26; j++){
		value += a[j].elem; 
	}
	for ( j = 0; j < 26; j++){
		a[j].percent = ((float)a[j].elem/value)*100; 
		}
	printf("\nTotal char counted = %d\n",value);
	
}
