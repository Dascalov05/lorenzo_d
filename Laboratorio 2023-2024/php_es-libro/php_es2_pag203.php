<?php
class Libro {
    public $nomeLibro;
    public $prezzo;
    public $numeroScaffale;
    public $numeroPagine;
    public $casaEditrice;

    public function inizializza($nomeLibro, $prezzo, $numeroScaffale, $numeroPagine, $casaEditrice) {
        $this->nomeLibro = $nomeLibro;
        $this->prezzo = $prezzo;
        $this->numeroScaffale = $numeroScaffale;
        $this->numeroPagine = $numeroPagine;
        $this->casaEditrice = $casaEditrice;
    }

    public function mostra() {
        echo "Nome: " . $this->nomeLibro . "\n";
        echo "Prezzo: " . $this->prezzo . "\n";
        echo "Scaffale: " . $this->numeroScaffale . "\n";
        echo "Numero di pagine: " . $this->numeroPagine . "\n";
        echo "Casa editrice: " . $this->casaEditrice . "\n";
    }

    public function applicaSconto() {
        $this->prezzo = $this->prezzo - ($this->prezzo * 0.10);
    }
}

$libro1 = new Libro();
$libro1->inizializza("harry potter", 11.05, 3, 450, "Mondadori");
$libro1->mostra();
echo "-----\n";
$libro1->applicaSconto();
$libro1->mostra();
?>
