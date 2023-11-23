<?php
class Convertitore {
    private $tassoCambio;
    private $valutaDiPartenza;
    private $valutaDiArrivo;

    public function __construct($tassoCambio, $valutaDiPartenza, $valutaDiArrivo) {
        $this->tassoCambio = $tassoCambio;
        $this->valutaDiPartenza = $valutaDiPartenza;
        $this->valutaDiArrivo = $valutaDiArrivo;
    }

    public function calcolaConversione($importo) {
        return $importo * $this->tassoCambio;
    }

    public function stampaRisultato($importoConvertito) {
        echo "Importo convertito da {$this->valutaDiPartenza} a {$this->valutaDiArrivo}: {$importoConvertito} {$this->valutaDiArrivo}\n";
    }
}

$tassoCambioDollaroEuro = 0.85; // Tasso di cambio: 1 Dollaro = 0.85 Euro
$convertitoreDollaroEuro = new Convertitore($tassoCambioDollaroEuro, "Dollaro", "Euro");
$importoInDollari = 100;
$importoConvertito = $convertitoreDollaroEuro->calcolaConversione($importoInDollari);
$convertitoreDollaroEuro->stampaRisultato($importoConvertito);
?>
