#include <iostream>


enum Categoria {
    CatA,
    CatB
};

class Produto
{
private:
    int id;
    std::string descricao;
    std::string nome;
    double preco;
    int categoria;

public:
    Produto(int id, std::string descricao,
            std::string nome,
            double preco, int categoria) : id(id), descricao(descricao), nome(nome), preco(preco), categoria(categoria) {}

    int getId()
    {
        return id;
    }
    std::string getNome()
    {
        return nome;
    }
    std::string getDescricao()
    {
        return descricao;
    }
    double getPreco()
    { // interessante definir os getters como constantes (const)
        return preco;
    }
    void setId(int Id)
    {
        this->id = id;
    }
    void setNome(std::string nome)
    {
        this->nome = nome;
    }
    void setDescricao(std::string descricao)
    {
        this->descricao = descricao;
    }
    void setPreco(double preco)
    {
        this->preco = preco;
    }
};
