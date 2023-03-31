import numpy as np
import matplotlib.pyplot as plt

# Generate some data
x = np.arange(0, 10, 0.5)
y = np.zeros_like(x)

# Set the values of y to create the /\/\/\/\ pattern
y[::2] = 1
y[1::2] = -1

# Plot the data
plt.plot(x, y)

# Add labels and title
plt.xlabel('X axis')
plt.ylabel('Y axis')
plt.title('Example Plot')

# Show the plot
plt.show()
