# This makefile pretends to generate a PDF with the graphics generated on the files "plotdatos*.py" and the data generated by "makedatos.py"and makedatos1.cpp
#

resultados.pdf: resultados.tex plot.pdf plot1.pdf
	pdflatex resultados.tex

plot.pdf: plotdatos.py datos.dat
	python3 plotdatos.py datos.dat

plot1.pdf: plotdatos1.py datos1.dat
	python3 plotdatos1.py

datos1.dat: makedatos1.cpp
	g++ makedatos1.cpp -o makedatos1
	./makedatos1 > datos1.dat

datos.dat: makedatos.py
	python3 makedatos.py > datos.dat

