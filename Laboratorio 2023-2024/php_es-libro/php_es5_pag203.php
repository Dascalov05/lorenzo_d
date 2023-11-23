<?php
class ContoCorrente {
    private $nome;
    private $codiceConto;
    private $saldo;

    public function __construct($nome, $codiceConto, $saldo) {
        $this->nome = $nome;
        $this->codiceConto = $codiceConto;
        $this->saldo = $saldo;
    }

    public function getNome() {
        return $this->nome;
    }

    public function getCodiceConto() {
        return $this->codiceConto;
    }

    public function getSaldo() {
        return $this->saldo;
    }
}

$conto1 = new ContoCorrente("vladimir putin", "876", 666);

echo "Nome del titolare: " . $conto1->getNome() . "\n";
echo "Codice Conto: " . $conto1->getCodiceConto() . "\n";
echo "Saldo: " . $conto1->getSaldo() . "\n";
?>
