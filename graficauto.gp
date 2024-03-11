
set datafile separator ","

set title "Posición contra tiempo"
set xlabel "Tiempo [S]"
set ylabel "Posición [M]"



plot "Datostracker.csv " u 1:2 lw 3 t "Datos experimentales"

pause -1