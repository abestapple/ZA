#utf-8
import gifmaze as gm
maze=anim.create_maze_in_region(cell_size=5,region=8,mask=None)
from gifmaze.algorithms import prim
surface=gm.GIFSurface(width=600,height=400,color_depth=2,bg_color=0)
surface.set_palette([0,0,0,255,255,255,255,0,255,0,0,0])
anim=gm.Animation(surface)
anim.set_control(speed=20,delay=5,trans_index=0)
anim.pad_delay_frame(200)
prim(maze,start=(0,0))
anim.pad_delay_frame(500)
surface.save("p.gif")
surface.close()
