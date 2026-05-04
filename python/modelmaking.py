# ---------------- STEP 1: IMPORT LIBRARIES ----------------
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error

# ---------------- STEP 2: LOAD DATASET ----------------
# Replace with your file name
df = pd.read_csv("data.csv")

print(df.head())   # View first 5 rows

# ---------------- STEP 3: DATA PREPROCESSING ----------------
# Example: assume last column is target
X = df.iloc[:, :-1]   # features
y = df.iloc[:, -1]    # target

# Handle missing values (basic)
X = X.fillna(X.mean())

# ---------------- STEP 4: SPLIT DATA ----------------
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)

# ---------------- STEP 5: TRAIN MODEL ----------------
model = LinearRegression()
model.fit(X_train, y_train)

# ---------------- STEP 6: PREDICT ----------------
y_pred = model.predict(X_test)

# ---------------- STEP 7: EVALUATE ----------------
mse = mean_squared_error(y_test, y_pred)
print("Mean Squared Error:", mse)

# ---------------- STEP 8: NEW PREDICTION ----------------
# Example: predict using new input
sample = X_test.iloc[0:1]
prediction = model.predict(sample)

print("Prediction:", prediction)

'''
🧠 Explanation (Simple Words)
🔹 pd.read_csv()

👉 Loads your dataset

🔹 X and y
X → input features
y → output (target)
🔹 train_test_split

👉 Splits data:

80% → training
20% → testing
🔹 LinearRegression()

👉 Simple ML model for prediction

🔹 model.fit()

👉 Trains the model

🔹 model.predict()

👉 Makes predictions

🔹 mean_squared_error

👉 Measures how good your model is

🎯 Interview Answer (IMPORTANT)

If asked:
👉 “How did you build your model?”

Say:

“I loaded the dataset using pandas, performed preprocessing, split the data into training and testing sets, trained a regression model using scikit-learn, and evaluated it using mean squared error.”

⚠️ Important Notes
If target is categorical → use LogisticRegression
If data is complex → use RandomForest
'''