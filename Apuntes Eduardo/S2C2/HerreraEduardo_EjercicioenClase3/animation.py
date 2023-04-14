import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as ani

df = pd.read_csv("./x_values.csv")
x = np.array(df["x"])
y = np.array(df["y"])

fig = plt.figure()
ax = fig.gca()
ax.set_xlim([0, 24])
ax.set_ylim([0, 8])

def update(i): 
    ax.plot(x[:i], y[:i])
    
anim_para = ani.FuncAnimation(fig, func = update, frames = len(x))
anim_para.save('parabolico.gif', fps=20)