"""
(FEA 85) Deseja-se atualizar as contas correntes dos clientes de uma ag�ncia banc�ria. � dado o cadastro de n clientes contendo para cada cliente o n�mero de sua conta e o seu saldo; o cadastro est� ordenado pelo n�mero da conta. Em seguida, � dado o n�mero de opera��es efetuadas no dia e, para cada opera��o, o n�mero da conta, uma letra C ou D indicando se a opera��o � de cr�dito ou d�bito e o valor da opera��o . Emitir o cadastro de clientes atualizado. 
"""
vetor=[]
auxiliar=[]

clientes=int(input("Digite quantos clientes s�o:"))
funcionario = []
for i in range(clientes):
    nome=input("Qual o seu nome ?:")
    auxiliar.append(nome)
    conta=int(input("Digite o n�mero da conta corrente :"))
    auxiliar.append(conta)
    saldo=int(input("Digite o saldo da conta:"))
    auxiliar.append(saldo)
    funcionario.append(auxiliar)
    auxiliar=[]
    
for i in range(len(funcionario)):
    print("\n Nome:",funcionario[i][0])
    print("N�mero da conta:%d"%funcionario[i][1])
    print("Saldo total: R$%d"%funcionario[i][2])
 
operacoes=int(input("\n Digite quantas opera��es foram realizadas:"))
for a in range(operacoes):
    codigo=int(input("\n Digite o n�mero da conta corrente ?"))
    if codigo==funcionario[i][1]:
        print("\n Seja bem vindo(a)",funcionario[i][0],"seu saldo � de R$:",funcionario[i][2] )
    
    funcao=str(input("Digite a opera��o que deseja (C)-C/cr�dito ou (D)-P/D�bito:")).upper()
    
    if funcao=="C":
        quantia=float(input("Digite a quantia desejada para cr�dito:"))
        nova_quantia=funcionario[i][2]-quantia
    elif funcao=="D":
        quantia=float(input("Digite a quantia desejada para d�bito:"))
        nova_quantia=funcionario[i][2]-quantia
        
print("\n Dados ap�s a atualiza��o da conta")
print("Nome:",funcionario[i][0])
print("Saldo Total R$:",nova_quantia)

        
        
        

             