import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Locale;


public class TestaFuncionario {

	static void imprimeFuncionario(Funcionario func) {
		NumberFormat nf = NumberFormat.getInstance(new Locale("pt", "BR"));	
		DecimalFormat df = new DecimalFormat("#.##");
		
		String valorINSS;

		System.out.println("---------------------------------");
		System.out.println("Dados do Funcionário               ");
		System.out.println("---------------------------------");
		System.out.println("Nome: " + func.getNome());
		System.out.println("Sexo: " + func.getSexo());
		System.out.println("CPF : " + func.getCpf());
		System.out.println("---------------------------------");
		
		System.out.print("Salario Bruto        = ");
		System.out.println( String.format("%10s", nf.format(func.getSalarioBruto())));
		
		valorINSS = df.format( func.txINSS() * 100 );
		if( func.valorINSS() == func.getTetoINSS() ) {
			valorINSS = "INSS (" + valorINSS + "% -> teto)";
			if( (func.txINSS() * 100) < 10 ) {
				valorINSS = valorINSS + " ";
			}
		} else {
			valorINSS = "INSS (" + valorINSS + "%)         ";
		}
		System.out.print( valorINSS  );		
		System.out.println("   = " + String.format("%10s", nf.format(func.valorINSS())));
		
		System.out.println("                         --------");
		
		System.out.print("Salario Liquido      = ");
		System.out.println( String.format("%10s", nf.format(func.salarioLiquido())));
		
		System.out.println("---------------------------------");
		System.out.println();
		
	}
	
	public static void main(String[] args) {
		Funcionario func = new Funcionario("João da Silva", 'M', "123.456.789-99", 2000.00);
		imprimeFuncionario(func);
		func.setSalarioBruto(10000.00);
		imprimeFuncionario(func);		
	}
	

}
