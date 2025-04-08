void	ft_putchar(char c);

void	ft_is_negative(int n){

	if(n < 0){
		ft_putchar('n');
	}else{
		ft_putchar('P');
	}
}

int main(){
	int nombre;

	nombre = 5;
	ft_is_negative(nombre);
	return 0;
}
