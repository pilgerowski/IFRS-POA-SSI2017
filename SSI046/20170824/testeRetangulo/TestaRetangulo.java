public class TestaRetangulo {

	public static void main(String[] args) {

		testarConstrutorComParametroAlturaNegativo();
		testarConstrutorComParametroAlturaZerado();
		testarConstrutorComParametroLarguraNegativa();
		testarConstrutorComParametroLarguraZerada();
		
		testarConstrutorComParametroPosicaoXMenorQueDominio();
		testarConstrutorComParametroPosicaoXMaiorQueDominio();
		testarConstrutorComParametroLarguraEPosicaoXMaiorQueDominio();
		
		testarConstrutorComParametroPosicaoYMenorQueDominio();
		testarConstrutorComParametroPosicaoYMaiorQueDominio();
		testarConstrutorComParametroAlturaEPosicaoYMaiorQueDominio();
		
		testarPosicionamentoDoRetangulo();
		
		testarCalculoPerimetroDoRetangulo();
		testarCalculoAreaDoRetangulo();
	}

	static void testarConstrutorComParametroAlturaNegativo() {
		try {
			Retangulo retangulo = new Retangulo(-1.0,3.0,0.0,0.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}
	}
	
	static void testarConstrutorComParametroAlturaZerado() {
		try {
			Retangulo retangulo = new Retangulo(0.0,3.0,0.0,0.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}
	}

	static void testarConstrutorComParametroLarguraNegativa() {
		try {
			Retangulo retangulo = new Retangulo(1.0,-3.0,0.0,0.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}
	}
	
	static void testarConstrutorComParametroLarguraZerada() {
		try {
			Retangulo retangulo = new Retangulo(1.0,0.0,0.0,0.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}
	}
	
	static void testarConstrutorComParametroPosicaoXMenorQueDominio() {
		try {
			Retangulo retangulo = new Retangulo(1.0,1.0,-100.0,0.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}		
	}
	

	static void testarConstrutorComParametroPosicaoXMaiorQueDominio() {
		try {
			Retangulo retangulo = new Retangulo(1.0,1.0,100.0,0.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}		
	}
	
	static void testarConstrutorComParametroLarguraEPosicaoXMaiorQueDominio() {
		try {
			Retangulo retangulo = new Retangulo(10.0,10.0,1.0,0.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}		
	}

	static void testarConstrutorComParametroPosicaoYMenorQueDominio() {
		try {
			Retangulo retangulo = new Retangulo(1.0,1.0,0.0,-100.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}		
	}
	

	static void testarConstrutorComParametroPosicaoYMaiorQueDominio() {
		try {
			Retangulo retangulo = new Retangulo(1.0,1.0,0.0,100.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}		
	}
	
	static void testarConstrutorComParametroAlturaEPosicaoYMaiorQueDominio() {
		try {
			Retangulo retangulo = new Retangulo(20.0,1.0,1.0,1.0);
			System.out.println(retangulo.toString());
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}		
	}
	
	static void testarAlturaNegativa(Retangulo retangulo) {
		try {
			retangulo.setAltura(-2);
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}		
	}
	
	static void testarLarguraNegativa(Retangulo retangulo) {
		try {
			retangulo.setLargura(-2);
		} catch(IllegalArgumentException e){
		    System.out.println(e);
		}		
	}
	
	static void testarRetanguloSubindo(Retangulo retangulo) {
		System.out.println("Movendo o retângulo para cima.");
		try {
			while(true){
				retangulo.moverParaCima(2);
				System.out.println(retangulo.toString());
			}
		}catch(IllegalArgumentException e){
		    System.out.println(e);
		}	
	}	
	
	static void testarRetanguloDescendo(Retangulo retangulo) {
		System.out.println("Movendo o retângulo para baixo.");
		try {
			while(true){
				retangulo.moverParaBaixo(2);
				System.out.println(retangulo.toString());
			}
		}catch(IllegalArgumentException e){
		    System.out.println(e);
		}	
	}
	
	static void testarRetanguloIndoParaADireita(Retangulo retangulo) {
		System.out.println("Movendo o retângulo para a direita.");
		try {
			while(true){
				retangulo.moverParaDireita(2);
				System.out.println(retangulo.toString());
			}
		}catch(IllegalArgumentException e){
		    System.out.println(e);
		}	
	}

	
	static void testarRetanguloIndoParaAEsquerda(Retangulo retangulo) {
		System.out.println("Movendo o retângulo para a esquerda.");
		try {
			while(true){
				retangulo.moverParaEsquerda(2);
				System.out.println(retangulo.toString());
			}
		}catch(IllegalArgumentException e){
		    System.out.println(e);
		}	
	}
	
	static void testarPosicionamentoDoRetangulo() {		
		Retangulo retangulo = new Retangulo(8.0,8.0,0.0,0.0);
		System.out.println(retangulo.toString());
		testarAlturaNegativa(retangulo);
		testarLarguraNegativa(retangulo);
		testarRetanguloSubindo(retangulo);
		testarRetanguloDescendo(retangulo);
		testarRetanguloIndoParaADireita(retangulo);
		testarRetanguloIndoParaAEsquerda(retangulo);
	}
		
	static void testarCalculoPerimetroDoRetangulo() {
		Retangulo retangulo = new Retangulo(1.0,1.0,0.0,0.0);
		System.out.print(retangulo.toString());
		System.out.println(" Perímetro: " + retangulo.getPerimetro());
		retangulo.setAltura(2.0);
		System.out.print(retangulo.toString());
		System.out.println(" Perímetro: " + retangulo.getPerimetro());
		retangulo.setLargura(2);
		System.out.print(retangulo.toString());
		System.out.println(" Perímetro: " + retangulo.getPerimetro());
		retangulo.setAltura(1.5);
		retangulo.setLargura(5);
		System.out.print(retangulo.toString());
		System.out.println(" Perímetro: " + retangulo.getPerimetro());
	}

	static void testarCalculoAreaDoRetangulo() {
		Retangulo retangulo = new Retangulo(1.0,1.0,0.0,0.0);
		System.out.print(retangulo.toString());
		System.out.println(" Área: " + retangulo.getArea());
		retangulo.setAltura(2.0);
		System.out.print(retangulo.toString());
		System.out.println(" Área: " + retangulo.getArea());
		retangulo.setLargura(2);
		System.out.print(retangulo.toString());
		System.out.println(" Área: " + retangulo.getArea());
		retangulo.setAltura(1.5);
		retangulo.setLargura(5);
		System.out.print(retangulo.toString());
		System.out.println(" Área: " + retangulo.getArea());
	}
	
}
