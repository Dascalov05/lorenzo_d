<?php
class Prodotto {
    private $codice;
    private $descrizione;

    public function __construct($codice, $descrizione) {
        $this->codice = $codice;
        $this->descrizione = $descrizione;
    }

    public function getCodice() {
        return $this->codice;
    }

    public function getDescrizione() {
        return $this->descrizione;
    }
}


$prodotto1 = new Prodotto("99", "Iphone x");
echo "Codice: " . $prodotto1->getCodice() . "\n";
echo "Descrizione: " . $prodotto1->getDescrizione() . "\n";
?>
