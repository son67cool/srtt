Лабораторная работа 4

Домашние задание 

Условие задачи:
Контроль качества на фабрике игрушек пропускает партию, если вес каждой из трех случайно выбранных игрушек (A, B, C грамм) кратен семи. Это свидетельствует о соблюдении технологических норм. Запишите условие принятия партии.

Программа:

#include <stdio.h>

#include <locale.h>

int main() {

  setlocale(LC_CTYPE, "RUS");
  
	int kah, a, b, c;
	printf("~Контроль качества игрушек~\n");
	printf("Введите вес игрушек:\n");
	scanf_s("%d %d %d", &a, &b, &c);

	kah = (a % 7 == 0 && b % 7 == 0 && c % 7 == 0);
	printf("Технологические нормы соблюдены (1 - да, 0 - нет): %d\n ", kah);
	return 0;


}



Блок схема
[Диаграмма без названия.drawio](https://github.com/user-attachments/files/33198369/default.drawio)
<mxfile host="app.diagrams.net">
  <diagram name="Страница-1" id="bzpHlSIKLDD_N-cWMwOw">
    <mxGraphModel dx="823" dy="1235" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="O60oX6cdP-eKtZpldIN0-13" edge="1" parent="1" source="dQAtlE3eLP8cbh4EH0vj-5" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="O60oX6cdP-eKtZpldIN0-12" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="dQAtlE3eLP8cbh4EH0vj-5" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="kah=0" vertex="1">
          <mxGeometry height="60" width="120" x="400" y="340" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-1" edge="1" parent="1" source="dQAtlE3eLP8cbh4EH0vj-3" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="dQAtlE3eLP8cbh4EH0vj-4" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="dQAtlE3eLP8cbh4EH0vj-3" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="Ввести a, b, c" vertex="1">
          <mxGeometry height="60" width="120" x="300" y="140" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-21" edge="1" parent="1" source="dQAtlE3eLP8cbh4EH0vj-2" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="O60oX6cdP-eKtZpldIN0-20" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="dQAtlE3eLP8cbh4EH0vj-2" parent="1" style="rounded=0;whiteSpace=wrap;html=1;points=[[0,0,1,0,0],[0.25,0,1,0,0],[0.5,0,1,0,0],[0.75,0,1,0,0],[1,0,1,0,0],[0,0.25,1,0,0],[0,0.5,1,0,0],[0,0.75,1,0,0],[1,0.25,1,0,0],[1,0.5,1,0,0],[1,0.75,1,0,0],[0,1,1,0,0],[0.25,1,1,0,0],[0.5,1,1,0,0],[0.75,1,1,0,0],[1,1,1,0,0],[0.583333,0.333333,0,0,0]];" value="kah=1" vertex="1">
          <mxGeometry height="60" width="120" x="220" y="350" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-3" edge="1" parent="1" source="dQAtlE3eLP8cbh4EH0vj-4" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="O60oX6cdP-eKtZpldIN0-2" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-6" edge="1" parent="1" source="dQAtlE3eLP8cbh4EH0vj-4" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="O60oX6cdP-eKtZpldIN0-5" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-10" edge="1" parent="1" source="dQAtlE3eLP8cbh4EH0vj-3" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;exitX=0.5;exitY=0;exitDx=0;exitDy=0;" target="dQAtlE3eLP8cbh4EH0vj-3">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="dQAtlE3eLP8cbh4EH0vj-4" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="a%7==0или b%7==oили c%7==0&lt;br&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="110" width="120" x="300" y="230" as="geometry" />
        </mxCell>
        <mxCell id="dQAtlE3eLP8cbh4EH0vj-9" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="Конец" vertex="1">
          <mxGeometry height="80" width="120" x="310" y="620" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-9" edge="1" parent="1" source="dQAtlE3eLP8cbh4EH0vj-6" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="dQAtlE3eLP8cbh4EH0vj-3" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="dQAtlE3eLP8cbh4EH0vj-6" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="Начало" vertex="1">
          <mxGeometry height="70" width="120" x="300" y="30" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-27" edge="1" parent="1" source="O60oX6cdP-eKtZpldIN0-2" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="dQAtlE3eLP8cbh4EH0vj-5" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-2" parent="1" style="shape=waypoint;sketch=0;size=6;pointerEvents=1;points=[];fillColor=default;resizable=0;rotatable=0;perimeter=centerPerimeter;snapToPoint=1;" value="" vertex="1">
          <mxGeometry height="20" width="20" x="450" y="275" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-7" edge="1" parent="1" source="O60oX6cdP-eKtZpldIN0-5" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;entryX=0.417;entryY=0;entryDx=0;entryDy=0;entryPerimeter=0;" target="dQAtlE3eLP8cbh4EH0vj-2" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-5" parent="1" style="shape=waypoint;sketch=0;size=6;pointerEvents=1;points=[];fillColor=default;resizable=0;rotatable=0;perimeter=centerPerimeter;snapToPoint=1;" value="" vertex="1">
          <mxGeometry height="20" width="20" x="260" y="280" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-11" edge="1" parent="1" source="dQAtlE3eLP8cbh4EH0vj-7" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="dQAtlE3eLP8cbh4EH0vj-9" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="dQAtlE3eLP8cbh4EH0vj-7" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="Вывести kah" vertex="1">
          <mxGeometry height="60" width="120" x="310" y="510" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-17" edge="1" parent="1" source="O60oX6cdP-eKtZpldIN0-12" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="O60oX6cdP-eKtZpldIN0-16" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-12" parent="1" style="shape=waypoint;sketch=0;size=6;pointerEvents=1;points=[];fillColor=default;resizable=0;rotatable=0;perimeter=centerPerimeter;snapToPoint=1;rounded=0;" value="" vertex="1">
          <mxGeometry height="20" width="20" x="450" y="450" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-23" edge="1" parent="1" source="O60oX6cdP-eKtZpldIN0-16" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="dQAtlE3eLP8cbh4EH0vj-7" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-16" parent="1" style="shape=waypoint;sketch=0;size=6;pointerEvents=1;points=[];fillColor=default;resizable=0;rotatable=0;perimeter=centerPerimeter;snapToPoint=1;rounded=0;" value="" vertex="1">
          <mxGeometry height="20" width="20" x="360" y="450" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-22" edge="1" parent="1" source="O60oX6cdP-eKtZpldIN0-20" style="edgeStyle=none;curved=1;rounded=0;curveGeometry=1;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" target="O60oX6cdP-eKtZpldIN0-16" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="O60oX6cdP-eKtZpldIN0-20" parent="1" style="shape=waypoint;sketch=0;size=6;pointerEvents=1;points=[];fillColor=default;resizable=0;rotatable=0;perimeter=centerPerimeter;snapToPoint=1;rounded=0;" value="" vertex="1">
          <mxGeometry height="20" width="20" x="270" y="450" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>


<img width="1170" height="1662" alt="image-08-10-26-01-03" src="https://github.com/user-attachments/assets/dd0d4b18-549a-48d5-bab5-dc57e18e6ee9" />


На функции

    #include <stdio.h>
    #include <locale.h>

    int input()
	
{   int a,b,c; 

    printf("Введите вес игрушек:\n");
	
    scanf_s("%d %d %d", &a, &b, &c);
	return (a % 7 == 0 || b % 7 == 0 || c % 7 == 0);
}


    int main()
{
    setlocale(LC_CTYPE, "RUS");

    int kah;

    printf("Контроль качества игрушек\n");

    kah = input();
	
    printf("Технологические нормы соблюдены (1 - да, 0 - нет): %d\n", kah);

    return 0;
}
