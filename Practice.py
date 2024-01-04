from __future__ import absolute_import, division, print_function, unicode_literals

import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
from six.moves import urllib

# x = [1, 2, 2.5, 3, 4]
# y = [1, 4, 7, 9, 15]
# plt.plot(x, y, 'ro')
# plt.axis([0, 6, 0, 20])
# plt.plot(np.unique(x), np.poly1d(np.polyfit(x, y, 1))(np.unique(x)))
# # The above is the line of best fit, it refers to a line through a scatter plot of data points that
# # best expresses the relationship between those points

# plt.show()

# # In the above example we are doing this for 1-dimension but we can do the same for 8-9 parameters



## Load Dataset

dftrain = pd.read_csv("train.csv")   # training data
dfeval = pd.read_csv("eval.csv")     # testing data
y_train = dftrain.pop("survived")
y_eval = dfeval.pop("survived")

CATEGORICAL_COLUMNS = ["sex", "n_siblings_spouses", "parch", "class", "deck", "embark_town", "alone"]
NUMERIC_COLUMNS = ["age", "fare"]

# feature_columns = []
# for feature_name in CATEGORICAL_COLUMNS:
#     vocabulary = dftrain[feature_name].unique()  # gets a list of all unique values from given feature column
#     feature_columns.append(tf.feature_column.categorical_column_with_vocabulary_list(feature_name, vocabulary))

# for feature_name in NUMERIC_COLUMNS:
#     feature_columns.append(tf.feature_column.numeric_column(feature_name, dtype = tf.float32))

# print(feature_columns)

