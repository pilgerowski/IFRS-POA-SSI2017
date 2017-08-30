public class Funcionario {
	private String nome;
	private char sexo;
	private String cpf;
	private double salarioBruto;
	
	public Funcionario(String nome, char sexo, String cpf, double salarioBruto) {
		setNome(nome);
		setSexo(sexo);
		setCpf(cpf);
		setSalarioBruto(salarioBruto);
	}
	
	public void setNome(String n) {
		this.nome = n;
	}
	
	public void setSexo(char s) {
		this.sexo = s;
	}
	
	public void setCpf(String c) {
		this.cpf = c;
	}
	
	public void setSalarioBruto(double s) {
		this.salarioBruto = s;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public char getSexo() {
		return this.sexo;
	}
	
	public String getCpf() {
		return this.cpf;
	}
	
	public double getSalarioBruto() {
		return this.salarioBruto;
	}
	
	public double txINSS() {
		if(this.salarioBruto <= 1000.0)
			return 0.08;
		if(this.salarioBruto <= 2000.0)
			return 0.09;
		if(this.salarioBruto <= 3000.0)
			return 0.10;
		return 0.11;		
	}
	
	public double getTetoINSS() {
		return 900.00;
	}
	
	public double valorINSS() {
		double valor;
		valor = this.salarioBruto * txINSS();
		if(valor > getTetoINSS())
			return getTetoINSS();
		return valor;
	}
	
	public double salarioLiquido() {		
		return this.salarioBruto - valorINSS();
	}

}
