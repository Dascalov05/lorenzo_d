<?php
class Massimi {
    public function trovaMassimo($numero1, $numero2) {
        return max($numero1, $numero2);
    }

    public function trovaMinimo($numero1, $numero2) {
        return min($numero1, $numero2);
    }
}

$calcolatoreMassimi = new Massimi();
$primoNumero = 8;
$secondoNumero = 5;
$massimo = $calcolatoreMassimi->trovaMassimo($primoNumero, $secondoNumero);
$minimo = $calcolatoreMassimi->trovaMinimo($primoNumero, $secondoNumero);

echo "Il massimo tra {$primoNumero} e {$secondoNumero} è: {$massimo}\n";
echo "Il minimo tra {$primoNumero} e {$secondoNumero} è: {$minimo}\n";
?>
