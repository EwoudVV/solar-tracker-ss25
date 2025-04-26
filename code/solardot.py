import serial
import matplotlib.pyplot as plt
import matplotlib.animation as animation
ser = serial.Serial('/dev/cu.usbmodem2101',9600,timeout=1)
fig,ax=plt.subplots()
ax.set_title("light direction")
ax.set_xlim(-100,100)
ax.set_ylim(-100,100)
ax.axhline(0,color='gray',linewidth=0.5)
ax.axvline(0,color='gray',linewidth=0.5)
dot,=ax.plot([0],[0],'ro',markersize=10)
def update(frame):
    try:
        line=ser.readline().decode('utf-8').strip()
        if line:
            parts=line.split(',')
            if len(parts)==2:
                x=float(parts[0])
                y=float(parts[1])
                dot.set_data([x],[y])
    except:
        pass
    return dot,
ani=animation.FuncAnimation(fig,update,frames=None,interval=500,cache_frame_data=False)
plt.xlabel("X")
plt.ylabel("Y")
plt.show()
