#python3 -m manim codigo.py MiClase -pql
from manim import *
class MiClase(Scene):
    def construct(self):
        square_1_1 = Square(color=GREEN,fill_opacity=0.5,side_length=1.0).shift(2*LEFT,1*DOWN)
        square_1_2 = Square(color=GREEN,fill_opacity=0.5,side_length=1.0).next_to(square_1_1,direction=UP)
        square_1_3 = Square(color=GREEN,fill_opacity=0.5,side_length=1.0).next_to(square_1_2,direction=UP)
        square_2_1 = Square(color=GREEN,fill_opacity=0.5,side_length=1.0).next_to(square_1_1,direction=RIGHT)
        square_2_2 = Square(color=GREEN,fill_opacity=0.5,side_length=1.0).next_to(square_2_1,direction=UP)
        square_3_1 = Square(color=GREEN,fill_opacity=0.5,side_length=1.0).next_to(square_2_1,direction=RIGHT)
        square_4_1 = Square(color=GREEN,fill_opacity=0.5,side_length=1.0).next_to(square_3_1,direction=RIGHT)
        square_4_2 = Square(color=GREEN,fill_opacity=0.5,side_length=1.0).next_to(square_4_1,direction=UP)
        self.play(Create(square_1_1))
        self.play(Create(square_1_2))
        self.play(Create(square_1_3))
        self.play(Create(square_2_1))
        self.play(Create(square_2_2))
        self.play(Create(square_3_1))
        self.play(Create(square_4_1))
        self.play(Create(square_4_2))
        #Mover
        self.remove(square_2_2)
        square_2_2_nuevo = Square(color=ORANGE,fill_opacity=0.5,side_length=1.0).next_to(square_2_2,direction=RIGHT)
        self.play(Create(square_2_2_nuevo))

        self.remove(square_1_2)
        square_1_2_nuevo = Square(color=ORANGE,fill_opacity=0.5,side_length=1.0).next_to(square_1_2,direction=RIGHT)
        self.play(Create(square_1_2_nuevo))

        self.remove(square_1_3)
        square_1_3_nuevo = Square(color=ORANGE,fill_opacity=0.5,side_length=1.0).next_to(square_4_2,direction=UP)
        self.play(Create(square_1_3_nuevo))

        self.wait(4)
