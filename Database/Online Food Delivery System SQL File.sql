CREATE TABLE "CUSTOMERS" (
	"C_ID"	INTEGER NOT NULL,
	"Name"	Varchar(20),
	"Email"	Varchar(50) UNIQUE,
	"Phone_No"	BIGINT,
	"Address"	TEXT,
	PRIMARY KEY("C_ID")
);
CREATE TABLE "RESTAURANTS" (
	"R_ID"	INTEGER NOT NULL,
	"Restaurant_name"	Varchar(20),
	"Owner_name"	Varchar(20),
	"Phone_no"	BIGINT,
	"Address"	TEXT,
	"Rating"	DECIMAL,
	PRIMARY KEY("R_ID")
);
CREATE TABLE "MENU_ITEM" (
    "M_ID" INTEGER NOT NULL,
    "R_ID" INTEGER,
    "Item_name" VARCHAR(20),
    "Price" INTEGER,
    "Description" TEXT,
    "Category" VARCHAR(20),
    PRIMARY KEY ("M_ID"),
    FOREIGN KEY ("R_ID") REFERENCES "RESTAURANTS"("R_ID")
);
CREATE TABLE "ORDERS" (
    "O_ID" INTEGER NOT NULL,
    "C_ID" INTEGER,
    "R_ID" INTEGER,
    "DP_ID" INTEGER,
    "Order_date" DATE,
    "Total_amount" INTEGER,
    "Status" VARCHAR(20),
    PRIMARY KEY ("O_ID"),
    FOREIGN KEY ("C_ID") REFERENCES "CUSTOMERS"("C_ID"),
    FOREIGN KEY ("R_ID") REFERENCES "RESTAURANTS"("R_ID"),
    FOREIGN KEY ("DP_ID") REFERENCES "DELIVERY_PARTNER"("DP_ID")
);
CREATE TABLE "ORDER_ITEM" (
	"OI_ID"	INTEGER NOT NULL,
	"O_ID"	INTEGER,
	"M_ID"	INTEGER,
	"Quantity"	INTEGER,
	"Item_price"	INTEGER,
	PRIMARY KEY("OI_ID"),
	FOREIGN KEY("M_ID") REFERENCES "MENU_ITEM"("M_ID"),
	FOREIGN KEY("O_ID") REFERENCES "ORDERS"("O_ID")
);
CREATE TABLE "DELIVERY_PARTNER" (
	"DP_ID"	INTEGER NOT NULL,
	"Name"	Varchar(20),
	"Phone_no"	BIGINT,
	"Vehicle_type"	Varchar(10),
	"Vehicle_no"	INTEGER,
	"Status"	BOOLEAN,
	"Rating"	INTEGER,
	PRIMARY KEY("DP_ID")
);
CREATE TABLE "PAYMENTS" (
	"P_ID"	INTEGER NOT NULL,
	"O_ID"	INTEGER,
	"Amount"	INTEGER,
	"Payment_method"	Varchar(20),
	"Payment_status"	Varchar(10),
	"Payment_date"	Date,
	PRIMARY KEY("P_ID"),
	FOREIGN KEY("O_ID") REFERENCES "ORDERS"("O_ID")
);
CREATE TABLE "REVIEWS" (
	"RE_ID"	INTEGER NOT NULL,
	"C_ID"	INTEGER,
	"R_ID"	INTEGER,
	"Rating"	DECIMAL,
	"Comment"	Varchar(50),
	PRIMARY KEY("RE_ID"),
	FOREIGN KEY("C_ID") REFERENCES "CUSTOMERS"("C_ID"),
	FOREIGN KEY("R_ID") REFERENCES "RESTAURANTS"("R_ID")
);
CREATE TABLE "CARTS" (
	"CT_ID"	INTEGER NOT NULL,
	"OI_ID"	INTEGER,
	"Total_items"	INTEGER,
	"Total_quantitiy"	INTEGER,
	PRIMARY KEY("CT_ID"),
	FOREIGN KEY("OI_ID") REFERENCES "ORDER_ITEM"("OI_ID")
);
INSERT INTO CUSTOMERS VALUES
(1, 'Rahul', 'rahul1@gmail.com', 9876543210, 'Mumbai'),
(2, 'Priya', 'priya2@gmail.com', 9876543211, 'Ahmedabad'),
(3, 'Amit', 'amit3@gmail.com', 9876543212, 'Delhi'),
(4, 'Neha', 'neha4@gmail.com', 9876543213, 'Jaipur'),
(5, 'Karan', 'karan5@gmail.com', 9876543214, 'Surat'),
(6, 'Anjali', 'anjali6@gmail.com', 9876543215, 'Vadodara'),
(7, 'Rohan', 'rohan7@gmail.com', 9876543216, 'Pune'),
(8, 'Sneha', 'sneha8@gmail.com', 9876543217, 'Indore'),
(9, 'Vikas', 'vikas9@gmail.com', 9876543218, 'Lucknow'),
(10, 'Pooja', 'pooja10@gmail.com', 9876543219, 'Kochi'),
(11, 'Arjun', 'arjun11@gmail.com', 9876543220, 'Hyderabad'),
(12, 'Meera', 'meera12@gmail.com', 9876543221, 'Chennai'),
(13, 'Suresh', 'suresh13@gmail.com', 9876543222, 'Patna'),
(14, 'Kavita', 'kavita14@gmail.com', 9876543223, 'Bhopal'),
(15, 'Manish', 'manish15@gmail.com', 9876543224, 'Nagpur'),
(16, 'Ritika', 'ritika16@gmail.com', 9876543225, 'Chandigarh'),
(17, 'Deepak', 'deepak17@gmail.com', 9876543226, 'Kanpur'),
(18, 'Nisha', 'nisha18@gmail.com', 9876543227, 'Rajkot'),
(19, 'Yash', 'yash19@gmail.com', 9876543228, 'Nashik'),
(20, 'Divya', 'divya20@gmail.com', 9876543229, 'Udaipur');
SELECT * FROM CUSTOMERS;

INSERT INTO RESTAURANTS VALUES
(1, 'Spice Hub', 'Rahul', 9876500001, 'Surat', 4.5),
(2, 'Food Palace', 'Priya', 9876500002, 'Ahmedabad', 4.2),
(3, 'Tasty Treat', 'Amit', 9876500003, 'Mumbai', 4.7),
(4, 'Royal Dine', 'Neha', 9876500004, 'Delhi', 4.1),
(5, 'Urban Bites', 'Karan', 9876500005, 'Pune', 4.4),
(6, 'Hungry Point', 'Anjali', 9876500006, 'Jaipur', 4.0),
(7, 'Food Corner', 'Rohan', 9876500007, 'Vadodara', 4.3),
(8, 'The Kitchen', 'Sneha', 9876500008, 'Indore', 4.6),
(9, 'Taste Town', 'Vikas', 9876500009, 'Lucknow', 4.2),
(10, 'Green Leaf', 'Pooja', 9876500010, 'Kochi', 4.8),
(11, 'Masala Magic', 'Arjun', 9876500011, 'Hyderabad', 4.5),
(12, 'Curry House', 'Meera', 9876500012, 'Chennai', 4.1),
(13, 'Food Fiesta', 'Suresh', 9876500013, 'Patna', 4.4),
(14, 'Golden Spoon', 'Kavita', 9876500014, 'Bhopal', 4.3),
(15, 'Dinner Delight', 'Manish', 9876500015, 'Nagpur', 4.0),
(16, 'Happy Meals', 'Ritika', 9876500016, 'Chandigarh', 4.6),
(17, 'Street Eats', 'Deepak', 9876500017, 'Kanpur', 4.2),
(18, 'Flavour Hub', 'Nisha', 9876500018, 'Rajkot', 4.5),
(19, 'Yummy Zone', 'Yash', 9876500019, 'Nashik', 4.1),
(20, 'Fresh Feast', 'Divya', 9876500020, 'Udaipur', 4.7);
SELECT * FROM RESTAURANTS;

INSERT INTO DELIVERY_PARTNER VALUES
(1, 'Aarav', 9876600001, 'Bike', 1001, 1, 5),
(2, 'Vivaan', 9876600002, 'Scooty', 1002, 1, 4),
(3, 'Aditya', 9876600003, 'Bike', 1003, 0, 5),
(4, 'Krish', 9876600004, 'Bike', 1004, 1, 4),
(5, 'Aryan', 9876600005, 'Scooty', 1005, 1, 5),
(6, 'Ishaan', 9876600006, 'Bike', 1006, 0, 4),
(7, 'Dhruv', 9876600007, 'Bike', 1007, 1, 5),
(8, 'Om', 9876600008, 'Scooty', 1008, 1, 4),
(9, 'Kartik', 9876600009, 'Bike', 1009, 0, 5),
(10, 'Rohan', 9876600010, 'Bike', 1010, 1, 4),
(11, 'Ayaan', 9876600011, 'Scooty', 1011, 1, 5),
(12, 'Reyansh', 9876600012, 'Bike', 1012, 0, 4),
(13, 'Vihaan', 9876600013, 'Bike', 1013, 1, 5),
(14, 'Arnav', 9876600014, 'Scooty', 1014, 1, 4),
(15, 'Sai', 9876600015, 'Bike', 1015, 0, 5),
(16, 'Kabir', 9876600016, 'Bike', 1016, 1, 4),
(17, 'Dev', 9876600017, 'Scooty', 1017, 1, 5),
(18, 'Rudra', 9876600018, 'Bike', 1018, 0, 4),
(19, 'Parth', 9876600019, 'Bike', 1019, 1, 5),
(20, 'Yuvan', 9876600020, 'Scooty', 1020, 1, 4);
SELECT * FROM DELIVERY_PARTNER;


INSERT INTO ORDERS VALUES
(1, 1, 1, 1, '2026-06-01', 450, 'Delivered'),
(2, 2, 2, 2, '2026-06-01', 200, 'Delivered'),
(3, 3, 3, 3, '2026-06-02', 590, 'Preparing'),
(4, 4, 4, 4, '2026-06-02', 290, 'Delivered'),
(5, 5, 5, 5, '2026-06-03', 1050, 'Out for Delivery'),
(6, 6, 6, 6, '2026-06-03', 150, 'Delivered'),
(7, 7, 7, 7, '2026-06-04', 210, 'Preparing'),
(8, 8, 8, 8, '2026-06-04', 530, 'Delivered'),
(9, 9, 9, 9, '2026-06-05', 230, 'Cancelled'),
(10, 10, 10, 10, '2026-06-05', 490, 'Delivered'),
(11, 11, 11, 11, '2026-06-06', 470, 'Preparing'),
(12, 12, 12, 12, '2026-06-06', 130, 'Delivered'),
(13, 13, 13, 13, '2026-06-07', 180, 'Delivered'),
(14, 14, 14, 14, '2026-06-07', 530, 'Out for Delivery'),
(15, 15, 15, 15, '2026-06-08', 150, 'Delivered'),
(16, 16, 16, 16, '2026-06-08', 320, 'Preparing'),
(17, 17, 17, 17, '2026-06-09', 270, 'Delivered'),
(18, 18, 18, 18, '2026-06-09', 120, 'Cancelled'),
(19, 19, 19, 19, '2026-06-10', 290, 'Delivered'),
(20, 20, 20, 20, '2026-06-10', 230, 'Out for Delivery');
SELECT * FROM ORDERS;

INSERT INTO MENU_ITEM VALUES
(1, 1, 'Pizza', 200, 'Cheese Pizza', 'Fast Food'),
(2, 2, 'Burger', 150, 'Veg Burger', 'Fast Food'),
(3, 3, 'Pasta', 180, 'White Sauce Pasta', 'Italian'),
(4, 4, 'Sandwich', 120, 'Grilled Sandwich', 'Snacks'),
(5, 5, 'Biryani', 250, 'Chicken Biryani', 'Main Course'),
(6, 6, 'Dosa', 100, 'Masala Dosa', 'South Indian'),
(7, 7, 'Idli', 80, 'Steamed Idli', 'South Indian'),
(8, 8, 'Noodles', 160, 'Hakka Noodles', 'Chinese'),
(9, 9, 'Manchurian', 180, 'Veg Manchurian', 'Chinese'),
(10, 10, 'Paneer Tikka', 220, 'Grilled Paneer', 'Starter'),
(11, 11, 'Dal Fry', 140, 'Dal with Spices', 'Main Course'),
(12, 12, 'Butter Naan', 40, 'Soft Butter Naan', 'Bread'),
(13, 13, 'Chole Bhature', 130, 'Spicy Chole Bhature', 'North Indian'),
(14, 14, 'Pav Bhaji', 120, 'Mumbai Style Pav Bhaji', 'Street Food'),
(15, 15, 'Vada Pav', 50, 'Classic Vada Pav', 'Street Food'),
(16, 16, 'Frankie', 90, 'Veg Frankie Roll', 'Snacks'),
(17, 17, 'Momos', 110, 'Steamed Momos', 'Chinese'),
(18, 18, 'Ice Cream', 70, 'Vanilla Ice Cream', 'Dessert'),
(19, 19, 'Gulab Jamun', 60, 'Sweet Gulab Jamun', 'Dessert'),
(20, 20, 'Cold Coffee', 90, 'Chilled Cold Coffee', 'Beverage');
SELECT * FROM MENU_ITEM;

INSERT INTO ORDER_ITEM VALUES
(1, 1, 1, 2, 400),
(2, 2, 2, 1, 150),
(3, 3, 3, 3, 540),
(4, 4, 4, 2, 240),
(5, 5, 5, 4, 1000),
(6, 6, 6, 1, 100),
(7, 7, 7, 2, 160),
(8, 8, 8, 3, 480),
(9, 9, 9, 1, 180),
(10, 10, 10, 2, 440),
(11, 11, 11, 3, 420),
(12, 12, 12, 2, 80),
(13, 13, 13, 1, 130),
(14, 14, 14, 4, 480),
(15, 15, 15, 2, 100),
(16, 16, 16, 3, 270),
(17, 17, 17, 2, 220),
(18, 18, 18, 1, 70),
(19, 19, 19, 4, 240),
(20, 20, 20, 2, 180);
SELECT * FROM ORDER_ITEM;

INSERT INTO REVIEWS VALUES
(1, 1, 1, 4.5, 'Excellent food'),
(2, 2, 2, 4.0, 'Good service'),
(3, 3, 3, 5.0, 'Amazing taste'),
(4, 4, 4, 3.5, 'Nice ambience'),
(5, 5, 5, 4.8, 'Loved the biryani'),
(6, 6, 6, 4.2, 'Tasty food'),
(7, 7, 7, 3.8, 'Good quality'),
(8, 8, 8, 4.6, 'Very delicious'),
(9, 9, 9, 3.9, 'Quick delivery'),
(10, 10, 10, 4.9, 'Highly recommended'),
(11, 11, 11, 4.3, 'Fresh food'),
(12, 12, 12, 4.0, 'Good experience'),
(13, 13, 13, 4.4, 'Worth the price'),
(14, 14, 14, 4.1, 'Nice taste'),
(15, 15, 15, 3.7, 'Average service'),
(16, 16, 16, 4.7, 'Excellent snacks'),
(17, 17, 17, 4.2, 'Good momos'),
(18, 18, 18, 4.5, 'Great dessert'),
(19, 19, 19, 4.0, 'Sweet and tasty'),
(20, 20, 20, 4.8, 'Best cold coffee');
SELECT * FROM REVIEWS;

INSERT INTO PAYMENTS VALUES
(1, 1, 450, 'UPI', 'Paid', '2026-06-01'),
(2, 2, 200, 'Card', 'Paid', '2026-06-01'),
(3, 3, 590, 'UPI', 'Paid', '2026-06-02'),
(4, 4, 290, 'Cash', 'Paid', '2026-06-02'),
(5, 5, 1050, 'Card', 'Paid', '2026-06-03'),
(6, 6, 150, 'UPI', 'Paid', '2026-06-03'),
(7, 7, 210, 'Cash', 'Paid', '2026-06-04'),
(8, 8, 530, 'UPI', 'Paid', '2026-06-04'),
(9, 9, 230, 'UPI', 'Failed', '2026-06-05'),
(10, 10, 490, 'Card', 'Paid', '2026-06-05'),
(11, 11, 470, 'UPI', 'Paid', '2026-06-06'),
(12, 12, 130, 'Cash', 'Paid', '2026-06-06'),
(13, 13, 180, 'UPI', 'Paid', '2026-06-07'),
(14, 14, 530, 'Card', 'Paid', '2026-06-07'),
(15, 15, 150, 'Cash', 'Paid', '2026-06-08'),
(16, 16, 320, 'UPI', 'Paid', '2026-06-08'),
(17, 17, 270, 'Card', 'Paid', '2026-06-09'),
(18, 18, 120, 'UPI', 'Failed', '2026-06-09'),
(19, 19, 290, 'Cash', 'Paid', '2026-06-10'),
(20, 20, 230, 'UPI', 'Paid', '2026-06-10');
SELECT * FROM PAYMENTS;

INSERT INTO CARTS VALUES
(1, 1, 1, 2),
(2, 2, 1, 1),
(3, 3, 1, 3),
(4, 4, 1, 2),
(5, 5, 1, 4),
(6, 6, 1, 1),
(7, 7, 1, 2),
(8, 8, 1, 3),
(9, 9, 1, 1),
(10, 10, 1, 2),
(11, 11, 1, 3),
(12, 12, 1, 2),
(13, 13, 1, 1),
(14, 14, 1, 4),
(15, 15, 1, 2),
(16, 16, 1, 3),
(17, 17, 1, 2),
(18, 18, 1, 1),
(19, 19, 1, 4),
(20, 20, 1, 2);
SELECT * FROM CARTS;

SELECT * FROM CUSTOMERS;
SELECT * FROM CUSTOMERS WHERE Address='Surat';
SELECT * FROM CUSTOMERS ORDER BY Name ASC;
SELECT DISTINCT Address FROM CUSTOMERS;
SELECT * FROM CUSTOMERS WHERE Name LIKE 'A%';
SELECT * FROM ORDERS WHERE Total_amount BETWEEN 200 AND 500;
SELECT * FROM RESTAURANTS WHERE Rating IN (4.5,4.7,4.8);
SELECT COUNT(*) AS Total_Customers FROM CUSTOMERS;
SELECT SUM(Total_amount) AS Total_Revenue FROM ORDERS;
SELECT AVG(Rating) AS Avg_Rating FROM RESTAURANTS;
SELECT MAX(Total_amount) AS Max_Order FROM ORDERS;
SELECT MIN(Total_amount) AS Min_Order FROM ORDERS;
SELECT Status, COUNT(*) AS Total FROM ORDERS GROUP BY Status;
SELECT Payment_method, COUNT(*) AS Total FROM PAYMENTS GROUP BY Payment_method HAVING COUNT(*) > 2;
SELECT C.Name, O.Order_date, O.Total_amount FROM CUSTOMERS C INNER JOIN ORDERS O ON C.C_ID = O.C_ID;