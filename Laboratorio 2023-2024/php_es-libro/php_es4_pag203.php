<?php
class Negozio {
    private $proprietario;
    private $nomeNegozio;

    public function __construct($proprietario, $nomeNegozio) {
        $this->proprietario = $proprietario;
        $this->nomeNegozio = $nomeNegozio;
    }

    public function getNomeNegozio() {
        return $this->nomeNegozio;
    }

    public function getProprietario() {
        return $this->proprietario;
    }
}

$negozio1 = new Negozio("Berlusconi", "Mediaset");
echo "Nome: " . $negozio1->getNomeNegozio() . "\n";
echo "Proprietario: " . $negozio1->getProprietario() . "\n";
?>
