<?php

require('Clothing.php');

class Shirt extends Clothing
{
     //private atribut
     private $color;
     private $sleveeType;
     
     //constructor
     public function __construct($color = '', $sleveeType = '')
     {
         $this->color = $color;
         $this->sleveeType = $sleveeType;
     }

     public function setColor($color)
     {
         $this->color = $color;
     }

     public function getColor()
     {
         return $this->color;
     }

     public function setsleveeType($sleveeType)
     {
         $this->sleveeType = $sleveeType;
     }

     public function getsleveeType()
     {
         return $this->sleveeType;
     }
}
?>