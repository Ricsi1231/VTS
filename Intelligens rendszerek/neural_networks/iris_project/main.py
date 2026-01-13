import numpy as np
import tensorflow as tf
from tensorflow.keras.utils import to_categorical
from sklearn.model_selection import train_test_split
from sklearn.datasets import load_iris

iris = load_iris()
X = iris.data
Y = iris.target
Y = to_categorical(Y)

XTranning, XTest, YTranning, YTest = train_test_split(X, Y, test_size=0.2)

model = tf.keras.models.Sequential()
opt = tf.keras.optimizers.SGD(0.1)

model.add(tf.keras.layers.Dense(8, input_dim = 4, kernel_initializer = 'random_normal', activation = 'relu'))
model.add(tf.keras.layers.Dense(3, kernel_initializer = 'random_normal', activation = 'softmax'))

model.compile(loss = 'categorical_crossentropy', optimizer = opt, metrics = ['accuracy'])
model.fit(XTranning, YTranning, epochs = 500, validation_split = 0.2)

loss, acc = model.evaluate(XTest, YTest, verbose = 2)
print(acc)

predicted = np.round(model.predict(XTest), 2)
checking = np.hstack((predicted, YTest))
print(checking)

model.save("iris.hdf5", True, True)