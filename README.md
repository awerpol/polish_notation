# polish_notation

Программа для построения графиков функций, задаваемых произвольными выражениями. 
Для вычисления значений выражений использован алгоритм Дейкстры для перевода выражения в польскую нотацию.


***Условия***

Область определения - [0; 4 Пи]

Область значений - [-1; 1]


***Примеры функций*** 
```
x*x
x
sin(x)
x^3
x+x*x
1/x
tan(x)
x*sin(x)
sin(sin(sin(sin(1/ln(x^123)))))
1
-1
-x*2
sqrt(-(-x^(-2)))
```

***Пример вывода*** 
Входные данные: sin(cos(2*x))
Выходные данные:
```
................................................................................
................................................................................
.........***.................**..................**.................***.........
........*...................*..*................*..*...................*........
............*...................*..............*...................*............
.......*...................*........................*...................*.......
.............*...................*............*...................*.............
..........................*..........................*..........................
......*..................................................................*......
..............*..................................................*..............
..................................*..........*..................................
.........................*............................*.........................
.....*....................................................................*.....
...............*................................................*...............
...................................*........*...................................
....*...................*..............................*...................*....
................*..............................................*................
....................................*......*....................................
.......................*................................*.......................
...*.............*............................................*.............*...
......................*..............*....*..............*......................
..*...............*...................*..*...................*...............*..
**.................***.................**.................***.................**
................................................................................
................................................................................
```
