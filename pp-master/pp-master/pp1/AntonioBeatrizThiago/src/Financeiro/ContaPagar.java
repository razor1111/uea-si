package Financeiro;

import javax.swing.JOptionPane;

public class ContaPagar {
    private String nome;
    private double preco;
    private int codigo;

    public ContaPagar() {
    }

    public ContaPagar(String nome, double preco, int codigo) {
        this.nome = nome;
        this.preco = preco;
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }


    
    public void mostrarConta(String nome,String mes){
        JOptionPane.showConfirmDialog(null, "Nome:" + nome + 
                "\nMes: " + mes + 
                "\nNome da Conta: " + this.getNome() +
                "\nPreco da Conta: " + this.getPreco() + 
                "\nCodigo da Conta: " + this.getCodigo());
    }
    
}
