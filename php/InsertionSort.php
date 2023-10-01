<?php 

class InsertionSort
{
    public $n; 
    public $key;
    public $x = [];

    public function insertion_sort($n , $x)
    {
        $this->n = $n;
        $this->x = $x;

        for($i = 1 ; $i<$this->n;$i++)
        {
            $this->key = $key = $x[$i];

            $j = $i-1; 
            while($j>=0 && $this->key<$this->x[$j])
            {
                $this->x[$j+1] = $this->x[$j];
                $j--;
            }
            $this->x[$j+1] = $key;
        }
    }
}

$sort = new InsertionSort;
$n = 5 ;
$array = [
  0=>7,
  1=>3,
  2=>2,
  3=>9,
  4=>4,
];
$sort->insertion_sort($n,$array);

for($i = 0; $i<$n; $i++)
{
    echo $sort->x[$i]." "; 
}