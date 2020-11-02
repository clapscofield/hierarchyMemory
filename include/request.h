
class Request {
  public:
    int endereco;
    int tipoOperacao;
    std::string dado;

    Request();
    Request(int enderecoN, int leituraEscrita, std::string dadoOp);
    Request(int enderecoN, int leituraEscrita);
    void printRequest(int requestNumber);

};
