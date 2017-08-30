public class Retangulo {
	private double altura;
	private double alturaMaxima;
	private double fimDominioX;
	private double fimDominioY;
	private double inicioDominioX;
	private double inicioDominioY;
	private double largura;
	private double larguraMaxima;
	private double posicaoX;
	private double posicaoY;
	private String unidadeMedida = "mm";

	public Retangulo (double altura, double largura, double x, double y) {
		this.setAreaDeDominio();
		
		setAltura(altura);
		setLargura(largura);
		setPosicaoX(x);
		setPosicaoY(y);
	}

	public double getAltura () {
		return this.altura;
	}

	public double getArea () {
		return Math.pow(getLargura() * getAltura(), 2);
		
	}

	public double getLargura () {
		return this.largura;
		
	}

	public double getPerimetro () {
		return ( getLargura() + getAltura() ) * 2.0;
	}

	public double getPosicaoX () {
		return this.posicaoX;
		
	}

	public double getPosicaoY () {
		return this.posicaoY;
	}

	public void moverParaBaixo (double distancia) {
		if(this.validarDistancia(distancia)) {
			setPosicaoY( this.posicaoY - distancia);
		}
	}

	public void moverParaCima (double distancia) {
		if(this.validarDistancia(distancia)) {
			setPosicaoY( this.posicaoY + distancia);
		}
	}

	public void moverParaDireita (double distancia) {
		if(this.validarDistancia(distancia)) {
			setPosicaoX( this.posicaoX + distancia);
		}
	}

	public void moverParaEsquerda (double distancia) {
		if(this.validarDistancia(distancia)) {
			setPosicaoX( this.posicaoX - distancia);
		}
	}

	public void setAltura (double altura) {
		if(altura <= 0.000) {
			throw new IllegalArgumentException("Altura deve ser um valor positivo acima de zero.");
		} else if(altura > this.alturaMaxima) {
			throw new IllegalArgumentException("A altura não pode ser maior que a área de dominio.");
		} else {
			this.altura = altura;
		}
	}

	private void setAreaDeDominio() {
		this.inicioDominioX 	= -10.0;
		this.fimDominioX 		=  10.0;
		this.inicioDominioY 	= -20.0;
		this.fimDominioY 		=  20.0;
		
		double larguraMaxima = this.fimDominioX;
		if(this.inicioDominioX < 0.0) 
			larguraMaxima += Math.abs(this.inicioDominioX);
		else
			larguraMaxima -= this.inicioDominioX;
		this.larguraMaxima = Math.abs(larguraMaxima);
		
		double alturaMaxima = this.fimDominioY;
		if(this.inicioDominioY < 0.0) 
			alturaMaxima += Math.abs(this.inicioDominioY);
		else
			alturaMaxima -= this.inicioDominioY;
		this.alturaMaxima = Math.abs(alturaMaxima);
	}

	public void setLargura (double largura) {
		if(largura <= 0.000) {
			throw new IllegalArgumentException("Largura deve ser um valor positivo acima de zero.");
		} else if(largura > this.larguraMaxima) {
			throw new IllegalArgumentException("A largura não pode ser maior que a área de dominio.");
		} else {
			this.largura = largura;
		}
	}

	public void setPosicaoX (double x) {
		if(x < this.inicioDominioX || x > this.fimDominioX) {
			throw new IllegalArgumentException("A posição X está fora do domínio.");
		} else if( (x + this.largura) > this.fimDominioX ) {
			throw new IllegalArgumentException("A largura do retângulo não permite que ele seja colocado na posição X.");
		} else {
			posicaoX = x;
		}
	}
	
	public void setPosicaoY (double y) {
		if(y < this.inicioDominioY || y > this.fimDominioY) {
			throw new IllegalArgumentException("A posição Y está fora do domínio.");
		} else if( (y + this.altura) > this.fimDominioY ) {
			throw new IllegalArgumentException("A altura do retângulo não permite que ele seja colocado na posição Y.");
		} else {
			posicaoY = y;
		}		
	}
	
	public String toString() {
		String retorno;
		retorno  = "Retângulo de base " + this.largura + this.unidadeMedida + " e altura " + this.altura + this.unidadeMedida;
		retorno += " na posição (" + this.posicaoX + ";" + this.posicaoY + ").";
		return retorno;
	}
	
	private boolean validarDistancia(double distancia) {
		return !(distancia < 1);
	}

}

