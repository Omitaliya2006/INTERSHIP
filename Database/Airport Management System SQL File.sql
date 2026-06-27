CREATE TABLE "AIRPORT" (
	"Airport_ID"	INTEGER NOT NULL,
	"Airport_Name"	Varchar(20),
	"Address"	TEXT,
	"City"	Varchar(20),
	"Country"	Varchar(20),
	PRIMARY KEY("Airport_ID")
);
CREATE TABLE "AIRCRAFT" (
	"Aircraft_ID"	INTEGER NOT NULL,
	"Model"	Varchar(20),
	"Capacity"	INTEGER,
	"Manufacture_Year"	INTEGER,
	PRIMARY KEY("Aircraft_ID")
);
CREATE TABLE "PILOT" (
	"Pilot_ID"	INTEGER NOT NULL,
	"Name"	Varchar(20),
	"Phone_no"	BIGINT UNIQUE,
	"Email"	Varchar(20) UNIQUE,
	"License_no"	BIGINT UNIQUE,
	"Experience"	INTEGER,
	"Salary"	INTEGER,
	PRIMARY KEY("Pilot_ID")
);
CREATE TABLE "PASSENGER" (
	"Passenger_ID"	INTEGER NOT NULL,
	"Passenger_Name"	Varchar(20),
	"Phone_no"	BIGINT UNIQUE,
	"Address"	TEXT,
	"Gender"	Varchar(20),
	"Passport_no"	BIGINT UNIQUE,
	PRIMARY KEY("Passenger_ID")
);
CREATE TABLE "STAFF" (
	"Staff_ID"	INTEGER NOT NULL,
	"Staff_Name"	Varchar(20),
	"Phone_no"	BIGINT UNIQUE,
	"Role"	Varchar(20),
	"Email"	Varchar(50) UNIQUE,
	"Salary"	INTEGER,
	PRIMARY KEY("Staff_ID")
);
CREATE TABLE "HOTEL" (
	"Hotel_ID"	INTEGER NOT NULL,
	"Passenger_ID"	INTEGER,
	"Hotel_name"	Varchar(20),
	"Room_no"	INTEGER,
	"Entry_time"	TIME,
	"Exit_time"	TIME,
	PRIMARY KEY("Hotel_ID"),
	FOREIGN KEY("Passenger_ID") REFERENCES "PASSENGER"("Passenger_ID")
);
CREATE TABLE "BAGGAGE" (
	"Baggage_ID"	INTEGER NOT NULL,
	"Passenger_ID"	INTEGER,
	"Weight"	DECIMAL,
	"Status"	Varchar(20),
	PRIMARY KEY("Baggage_ID"),
	FOREIGN KEY("Passenger_ID") REFERENCES "PASSENGER"("Passenger_ID")
);
CREATE TABLE "BOOKING" (
	"Booking_ID"	INTEGER NOT NULL,
	"Passenger_ID"	INTEGER,
	"Booking_Date"	DATE,
	"Booking_Time"	TIME,
	PRIMARY KEY("Booking_ID"),
	FOREIGN KEY("Passenger_ID") REFERENCES "PASSENGER"("Passenger_ID")
);
CREATE TABLE "SECURITY" (
	"Security_ID"	INTEGER NOT NULL,
	"Passenger_ID"	INTEGER,
	"Entry_Time"	TIME,
	"Status"	Varchar(20),
	PRIMARY KEY("Security_ID"),
	FOREIGN KEY("Passenger_ID") REFERENCES "PASSENGER"("Passenger_ID")
);
CREATE TABLE "PAYMENT" (
	"Payment_ID"	INTEGER NOT NULL,
	"Booking_ID"	INTEGER,
	"Amount"	INTEGER,
	"Method"	Varchar(20),
	"Status"	Varchar(20),
	PRIMARY KEY("Payment_ID"),
	FOREIGN KEY("Booking_ID") REFERENCES "BOOKING"("Booking_ID")
);
CREATE TABLE "FLIGHT" (
	"Flight_ID"	INTEGER NOT NULL,
	"Airport_ID"	INTEGER,
	"Staff_ID"	INTEGER,
	"Pilot_ID"	INTEGER,
	"Booking_ID"	INTEGER,
	"Starting_Airport_Name"	Varchar(20),
	"Destination_Airport_Name"	Varchar(20),
	"Flight_Name"	Varchar(20),
	"Time_of_Depart"	TIME,
	"Time_of_Arrival"	TIME,
	PRIMARY KEY("Flight_ID"),
	FOREIGN KEY("Airport_ID") REFERENCES "AIRPORT"("Airport_ID"),
	FOREIGN KEY("Booking_ID") REFERENCES "BOOKING"("Booking_ID"),
	FOREIGN KEY("Pilot_ID") REFERENCES "PILOT"("Pilot_ID"),
	FOREIGN KEY("Staff_ID") REFERENCES "STAFF"("Staff_ID")
);
CREATE TABLE "SEAT" (
	"Seat_ID"	INTEGER NOT NULL,
	"Flight_ID"	INTEGER,
	"Booking_ID"	INTEGER,
	"Seat_no"	INTEGER,
	"Class"	Varchar(10),
	"Status"	Varchar(10),
	PRIMARY KEY("Seat_ID"),
	FOREIGN KEY("Booking_ID") REFERENCES "BOOKING"("Booking_ID"),
	FOREIGN KEY("Flight_ID") REFERENCES "FLIGHT"("Flight_ID")
);

INSERT INTO AIRPORT VALUES
(1, 'IGI Airport', 'Palam', 'Delhi', 'India'),
(2, 'CSM Airport', 'Santacruz', 'Mumbai', 'India'),
(3, 'Kempegowda', 'Devanahalli', 'Bangalore', 'India'),
(4, 'Chennai Air', 'Meenambakkam', 'Chennai', 'India'),
(5, 'Netaji Bose', 'Dum Dum', 'Kolkata', 'India'),
(6, 'SVPI Airport', 'Hansol', 'Ahmedabad', 'India'),
(7, 'Pune Airport', 'Lohegaon', 'Pune', 'India'),
(8, 'Goa Airport', 'Dabolim', 'Goa', 'India'),
(9, 'Jaipur Air', 'Sanganer', 'Jaipur', 'India'),
(10, 'Lucknow Air', 'Amausi', 'Lucknow', 'India'),
(11, 'Heathrow', 'Longford', 'London', 'UK'),
(12, 'JFK Airport', 'Queens', 'New York', 'USA'),
(13, 'LAX Airport', 'Westchester', 'Los Angeles', 'USA'),
(14, 'Changi Air', 'Airport Blvd', 'Singapore', 'Singapore'),
(15, 'Dubai Air', 'Al Garhoud', 'Dubai', 'UAE'),
(16, 'Doha Air', 'Hamad Intl', 'Doha', 'Qatar'),
(17, 'Narita Air', 'Narita', 'Tokyo', 'Japan'),
(18, 'Incheon Air', 'Jung-gu', 'Seoul', 'South Korea'),
(19, 'Charles DG', 'Roissy', 'Paris', 'France'),
(20, 'Frankfurt', 'Frankfurt Main', 'Frankfurt', 'Germany');
SELECT * FROM AIRPORT;

INSERT INTO PILOT VALUES
(1, 'Raj Patel', 9876500001, 'raj1@gmail.com', 10001, 5, 80000),
(2, 'Amit Sharma', 9876500002, 'amit2@gmail.com', 10002, 8, 95000),
(3, 'Vikram Singh', 9876500003, 'vikram3@gmail.com', 10003, 10, 120000),
(4, 'Rohan Mehta', 9876500004, 'rohan4@gmail.com', 10004, 6, 85000),
(5, 'Karan Verma', 9876500005, 'karan5@gmail.com', 10005, 12, 140000),
(6, 'Arjun Nair', 9876500006, 'arjun6@gmail.com', 10006, 7, 90000),
(7, 'Suresh Kumar', 9876500007, 'suresh7@gmail.com', 10007, 15, 180000),
(8, 'Deepak Joshi', 9876500008, 'deepak8@gmail.com', 10008, 9, 110000),
(9, 'Rahul Yadav', 9876500009, 'rahul9@gmail.com', 10009, 4, 75000),
(10, 'Manish Shah', 9876500010, 'manish10@gmail.com', 10010, 11, 130000),
(11, 'Neeraj Gupta', 9876500011, 'neeraj11@gmail.com', 10011, 13, 150000),
(12, 'Aditya Rao', 9876500012, 'aditya12@gmail.com', 10012, 6, 88000),
(13, 'Harsh Patel', 9876500013, 'harsh13@gmail.com', 10013, 8, 98000),
(14, 'Nitin Jain', 9876500014, 'nitin14@gmail.com', 10014, 14, 170000),
(15, 'Yash Desai', 9876500015, 'yash15@gmail.com', 10015, 5, 82000),
(16, 'Pranav Modi', 9876500016, 'pranav16@gmail.com', 10016, 9, 115000),
(17, 'Ankit Roy', 9876500017, 'ankit17@gmail.com', 10017, 7, 92000),
(18, 'Sanjay Kulkarni', 9876500018, 'sanjay18@gmail.com', 10018, 16, 190000),
(19, 'Ritesh Mishra', 9876500019, 'ritesh19@gmail.com', 10019, 10, 125000),
(20, 'Dhruv Trivedi', 9876500020, 'dhruv20@gmail.com', 10020, 12, 145000);
SELECT * FROM PILOT;

INSERT INTO AIRCRAFT VALUES
(1, 'Airbus A320', 180, 2018),
(2, 'Boeing 737', 189, 2017),
(3, 'Airbus A321', 220, 2019),
(4, 'Boeing 777', 396, 2016),
(5, 'Airbus A330', 300, 2015),
(6, 'Boeing 787', 335, 2020),
(7, 'ATR 72', 78, 2014),
(8, 'Embraer 190', 100, 2018),
(9, 'Airbus A350', 325, 2021),
(10, 'Boeing 747', 416, 2013),
(11, 'Airbus A220', 130, 2022),
(12, 'Boeing 767', 269, 2012),
(13, 'CRJ 900', 90, 2017),
(14, 'Dash 8 Q400', 86, 2016),
(15, 'Airbus A319', 156, 2015),
(16, 'Boeing 757', 243, 2011),
(17, 'Airbus A340', 295, 2010),
(18, 'Boeing 727', 149, 2009),
(19, 'Embraer 175', 88, 2020),
(20, 'Airbus A380', 555, 2019);
SELECT * FROM AIRCRAFT;

INSERT INTO STAFF VALUES
(1, 'Priya Shah', 9876600001, 'Manager', 'priya1@gmail.com', 70000),
(2, 'Ravi Patel', 9876600002, 'Ground Staff', 'ravi2@gmail.com', 35000),
(3, 'Neha Verma', 9876600003, 'Receptionist', 'neha3@gmail.com', 30000),
(4, 'Aakash Mehta', 9876600004, 'Technician', 'aakash4@gmail.com', 45000),
(5, 'Pooja Singh', 9876600005, 'Manager', 'pooja5@gmail.com', 75000),
(6, 'Vikas Kumar', 9876600006, 'Security', 'vikas6@gmail.com', 40000),
(7, 'Anjali Desai', 9876600007, 'Ground Staff', 'anjali7@gmail.com', 35000),
(8, 'Rohit Sharma', 9876600008, 'Technician', 'rohit8@gmail.com', 48000),
(9, 'Kiran Joshi', 9876600009, 'Receptionist', 'kiran9@gmail.com', 32000),
(10, 'Sanjay Patel', 9876600010, 'Security', 'sanjay10@gmail.com', 42000),
(11, 'Meera Nair', 9876600011, 'Manager', 'meera11@gmail.com', 80000),
(12, 'Harsh Modi', 9876600012, 'Ground Staff', 'harsh12@gmail.com', 36000),
(13, 'Nisha Gupta', 9876600013, 'Receptionist', 'nisha13@gmail.com', 31000),
(14, 'Arvind Rao', 9876600014, 'Technician', 'arvind14@gmail.com', 50000),
(15, 'Sneha Jain', 9876600015, 'Security', 'sneha15@gmail.com', 41000),
(16, 'Yash Trivedi', 9876600016, 'Ground Staff', 'yash16@gmail.com', 37000),
(17, 'Komal Shah', 9876600017, 'Receptionist', 'komal17@gmail.com', 33000),
(18, 'Deepak Mishra', 9876600018, 'Technician', 'deepak18@gmail.com', 52000),
(19, 'Ritika Kapoor', 9876600019, 'Manager', 'ritika19@gmail.com', 85000),
(20, 'Manoj Yadav', 9876600020, 'Security', 'manoj20@gmail.com', 43000);
SELECT * FROM STAFF;

INSERT INTO PASSENGER VALUES
(1, 'Aarav Patel', 9876700001, 'Surat, Gujarat', 'Male', 50001),
(2, 'Diya Shah', 9876700002, 'Ahmedabad, Gujarat', 'Female', 50002),
(3, 'Vivaan Mehta', 9876700003, 'Mumbai, Maharashtra', 'Male', 50003),
(4, 'Anaya Singh', 9876700004, 'Delhi', 'Female', 50004),
(5, 'Aditya Verma', 9876700005, 'Pune, Maharashtra', 'Male', 50005),
(6, 'Kavya Nair', 9876700006, 'Kochi, Kerala', 'Female', 50006),
(7, 'Arjun Kumar', 9876700007, 'Lucknow, UP', 'Male', 50007),
(8, 'Myra Desai', 9876700008, 'Vadodara, Gujarat', 'Female', 50008),
(9, 'Ishaan Gupta', 9876700009, 'Jaipur, Rajasthan', 'Male', 50009),
(10, 'Saanvi Joshi', 9876700010, 'Indore, MP', 'Female', 50010),
(11, 'Rohan Sharma', 9876700011, 'Chandigarh', 'Male', 50011),
(12, 'Aisha Khan', 9876700012, 'Hyderabad, Telangana', 'Female', 50012),
(13, 'Yash Patel', 9876700013, 'Rajkot, Gujarat', 'Male', 50013),
(14, 'Priya Mehta', 9876700014, 'Nashik, Maharashtra', 'Female', 50014),
(15, 'Krish Modi', 9876700015, 'Bhopal, MP', 'Male', 50015),
(16, 'Riya Kapoor', 9876700016, 'Amritsar, Punjab', 'Female', 50016),
(17, 'Dhruv Trivedi', 9876700017, 'Bhavnagar, Gujarat', 'Male', 50017),
(18, 'Neha Jain', 9876700018, 'Udaipur, Rajasthan', 'Female', 50018),
(19, 'Harsh Vyas', 9876700019, 'Nagpur, Maharashtra', 'Male', 50019),
(20, 'Pooja Roy', 9876700020, 'Kolkata, West Bengal', 'Female', 50020);
SELECT * FROM PASSENGER;

INSERT INTO BOOKING VALUES
(1, 1, '2026-06-01', '08:30:00'),
(2, 2, '2026-06-01', '09:00:00'),
(3, 3, '2026-06-02', '10:15:00'),
(4, 4, '2026-06-02', '11:00:00'),
(5, 5, '2026-06-03', '12:30:00'),
(6, 6, '2026-06-03', '13:45:00'),
(7, 7, '2026-06-04', '14:00:00'),
(8, 8, '2026-06-04', '15:20:00'),
(9, 9, '2026-06-05', '16:10:00'),
(10, 10, '2026-06-05', '17:30:00'),
(11, 11, '2026-06-06', '08:00:00'),
(12, 12, '2026-06-06', '09:40:00'),
(13, 13, '2026-06-07', '10:50:00'),
(14, 14, '2026-06-07', '11:25:00'),
(15, 15, '2026-06-08', '12:15:00'),
(16, 16, '2026-06-08', '13:35:00'),
(17, 17, '2026-06-09', '14:45:00'),
(18, 18, '2026-06-09', '15:55:00'),
(19, 19, '2026-06-10', '16:20:00'),
(20, 20, '2026-06-10', '17:10:00');
SELECT * FROM BOOKING;

INSERT INTO FLIGHT VALUES
(1, 1, 1, 1, 1, 'Delhi', 'Mumbai', 'AI101', '06:00:00', '08:00:00'),
(2, 2, 2, 2, 2, 'Mumbai', 'Bangalore', 'AI102', '07:00:00', '09:30:00'),
(3, 3, 3, 3, 3, 'Bangalore', 'Chennai', 'AI103', '08:00:00', '09:00:00'),
(4, 4, 4, 4, 4, 'Chennai', 'Kolkata', 'AI104', '10:00:00', '12:30:00'),
(5, 5, 5, 5, 5, 'Kolkata', 'Delhi', 'AI105', '13:00:00', '15:30:00'),
(6, 6, 6, 6, 6, 'Ahmedabad', 'Goa', 'AI106', '09:00:00', '11:00:00'),
(7, 7, 7, 7, 7, 'Pune', 'Jaipur', 'AI107', '11:00:00', '13:00:00'),
(8, 8, 8, 8, 8, 'Goa', 'Lucknow', 'AI108', '14:00:00', '16:30:00'),
(9, 9, 9, 9, 9, 'Jaipur', 'Delhi', 'AI109', '17:00:00', '18:30:00'),
(10, 10, 10, 10, 10, 'Lucknow', 'Mumbai', 'AI110', '19:00:00', '21:00:00'),
(11, 11, 11, 11, 11, 'London', 'New York', 'AI111', '08:00:00', '16:00:00'),
(12, 12, 12, 12, 12, 'New York', 'Los Angeles', 'AI112', '09:00:00', '13:00:00'),
(13, 13, 13, 13, 13, 'Los Angeles', 'Singapore', 'AI113', '15:00:00', '07:00:00'),
(14, 14, 14, 14, 14, 'Singapore', 'Dubai', 'AI114', '10:00:00', '14:00:00'),
(15, 15, 15, 15, 15, 'Dubai', 'Doha', 'AI115', '16:00:00', '17:00:00'),
(16, 16, 16, 16, 16, 'Doha', 'Tokyo', 'AI116', '18:00:00', '08:00:00'),
(17, 17, 17, 17, 17, 'Tokyo', 'Seoul', 'AI117', '09:00:00', '11:30:00'),
(18, 18, 18, 18, 18, 'Seoul', 'Paris', 'AI118', '12:00:00', '18:00:00'),
(19, 19, 19, 19, 19, 'Paris', 'Frankfurt', 'AI119', '20:00:00', '21:30:00'),
(20, 20, 20, 20, 20, 'Frankfurt', 'Delhi', 'AI120', '22:00:00', '09:00:00');
SELECT * FROM FLIGHT;

INSERT INTO SEAT (Seat_ID, Flight_ID, Booking_ID, Seat_no, Class, Status) VALUES
(1, 1, 1, 101, 'Economy', 'Booked'),
(2, 2, 2, 102, 'Economy', 'Booked'),
(3, 3, 3, 103, 'Business', 'Booked'),
(4, 4, 4, 104, 'Economy', 'Booked'),
(5, 5, 5, 105, 'First', 'Booked'),
(6, 6, 6, 106, 'Economy', 'Booked'),
(7, 7, 7, 107, 'Business', 'Booked'),
(8, 8, 8, 108, 'Economy', 'Booked'),
(9, 9, 9, 109, 'First', 'Booked'),
(10, 10, 10, 110, 'Economy', 'Booked'),
(11, 11, 11, 111, 'Business', 'Booked'),
(12, 12, 12, 112, 'Economy', 'Booked'),
(13, 13, 13, 113, 'First', 'Booked'),
(14, 14, 14, 114, 'Economy', 'Booked'),
(15, 15, 15, 115, 'Business', 'Booked'),
(16, 16, 16, 116, 'Economy', 'Booked'),
(17, 17, 17, 117, 'First', 'Booked'),
(18, 18, 18, 118, 'Economy', 'Booked'),
(19, 19, 19, 119, 'Business', 'Booked'),
(20, 20, 20, 120, 'Economy', 'Booked');
SELECT * FROM SEAT;

INSERT INTO SECURITY VALUES
(1, 1, '05:30:00', 'Cleared'),
(2, 2, '06:00:00', 'Cleared'),
(3, 3, '07:15:00', 'Cleared'),
(4, 4, '08:00:00', 'Cleared'),
(5, 5, '09:30:00', 'Cleared'),
(6, 6, '10:15:00', 'Pending'),
(7, 7, '11:00:00', 'Cleared'),
(8, 8, '12:20:00', 'Cleared'),
(9, 9, '13:10:00', 'Pending'),
(10, 10, '14:00:00', 'Cleared'),
(11, 11, '15:00:00', 'Cleared'),
(12, 12, '16:10:00', 'Cleared'),
(13, 13, '17:20:00', 'Pending'),
(14, 14, '18:00:00', 'Cleared'),
(15, 15, '19:15:00', 'Cleared'),
(16, 16, '20:00:00', 'Pending'),
(17, 17, '21:10:00', 'Cleared'),
(18, 18, '22:00:00', 'Cleared'),
(19, 19, '23:00:00', 'Pending'),
(20, 20, '23:30:00', 'Cleared');
SELECT * FROM SECURITY;

INSERT INTO HOTEL VALUES
(1, 1, 'Airport Inn', 101, '12:00:00', '08:00:00'),
(2, 2, 'Sky Hotel', 102, '13:00:00', '09:00:00'),
(3, 3, 'Aero Stay', 103, '14:00:00', '10:00:00'),
(4, 4, 'Cloud Resort', 104, '15:00:00', '11:00:00'),
(5, 5, 'Fly Inn', 105, '16:00:00', '12:00:00'),
(6, 6, 'Transit Hotel', 106, '17:00:00', '13:00:00'),
(7, 7, 'Airport Inn', 107, '18:00:00', '14:00:00'),
(8, 8, 'Sky Hotel', 108, '19:00:00', '15:00:00'),
(9, 9, 'Aero Stay', 109, '20:00:00', '16:00:00'),
(10, 10, 'Cloud Resort', 110, '21:00:00', '17:00:00'),
(11, 11, 'Fly Inn', 111, '22:00:00', '18:00:00'),
(12, 12, 'Transit Hotel', 112, '23:00:00', '19:00:00'),
(13, 13, 'Airport Inn', 113, '08:00:00', '20:00:00'),
(14, 14, 'Sky Hotel', 114, '09:00:00', '21:00:00'),
(15, 15, 'Aero Stay', 115, '10:00:00', '22:00:00'),
(16, 16, 'Cloud Resort', 116, '11:00:00', '23:00:00'),
(17, 17, 'Fly Inn', 117, '12:00:00', '08:00:00'),
(18, 18, 'Transit Hotel', 118, '13:00:00', '09:00:00'),
(19, 19, 'Airport Inn', 119, '14:00:00', '10:00:00'),
(20, 20, 'Sky Hotel', 120, '15:00:00', '11:00:00');
SELECT * FROM HOTEL;

INSERT INTO BAGGAGE VALUES
(1, 1, 12.5, 'Checked In'),
(2, 2, 15.0, 'Loaded'),
(3, 3, 18.2, 'In Transit'),
(4, 4, 10.8, 'Delivered'),
(5, 5, 22.4, 'Checked In'),
(6, 6, 14.6, 'Loaded'),
(7, 7, 16.3, 'In Transit'),
(8, 8, 19.7, 'Delivered'),
(9, 9, 11.2, 'Checked In'),
(10, 10, 20.5, 'Loaded'),
(11, 11, 13.9, 'In Transit'),
(12, 12, 17.4, 'Delivered'),
(13, 13, 21.0, 'Checked In'),
(14, 14, 12.7, 'Loaded'),
(15, 15, 15.8, 'In Transit'),
(16, 16, 18.9, 'Delivered'),
(17, 17, 23.1, 'Checked In'),
(18, 18, 14.3, 'Loaded'),
(19, 19, 16.8, 'In Transit'),
(20, 20, 19.5, 'Delivered');
SELECT * FROM BAGGAGE;

INSERT INTO PAYMENT VALUES
(1, 1, 4500, 'UPI', 'Success'),
(2, 2, 5200, 'Credit Card', 'Success'),
(3, 3, 6100, 'Debit Card', 'Success'),
(4, 4, 4800, 'UPI', 'Success'),
(5, 5, 7500, 'Net Banking', 'Success'),
(6, 6, 4300, 'UPI', 'Pending'),
(7, 7, 5600, 'Credit Card', 'Success'),
(8, 8, 6900, 'Debit Card', 'Success'),
(9, 9, 5100, 'UPI', 'Failed'),
(10, 10, 8200, 'Net Banking', 'Success'),
(11, 11, 9500, 'Credit Card', 'Success'),
(12, 12, 4700, 'UPI', 'Success'),
(13, 13, 6300, 'Debit Card', 'Pending'),
(14, 14, 7800, 'Net Banking', 'Success'),
(15, 15, 5400, 'UPI', 'Success'),
(16, 16, 8900, 'Credit Card', 'Success'),
(17, 17, 7200, 'Debit Card', 'Success'),
(18, 18, 4600, 'UPI', 'Failed'),
(19, 19, 6800, 'Net Banking', 'Success'),
(20, 20, 9900, 'Credit Card', 'Success');
SELECT * FROM PAYMENT;

SELECT * FROM PASSENGER;
SELECT * FROM PILOT WHERE Salary > 100000;
SELECT * FROM PAYMENT ORDER BY Amount DESC;
SELECT DISTINCT City FROM AIRPORT;
SELECT * FROM PASSENGER WHERE Passenger_Name LIKE 'A%';
SELECT * FROM PAYMENT WHERE Amount BETWEEN 5000 AND 8000;
SELECT * FROM STAFF WHERE Role IN ('Manager','Security');
SELECT COUNT(*) AS Total_Passengers FROM PASSENGER;
SELECT SUM(Amount) AS Total_Revenue FROM PAYMENT;
SELECT AVG(Salary) AS Avg_Salary FROM PILOT;
SELECT MAX(Weight) AS Max_Weight FROM BAGGAGE;
SELECT MIN(Amount) AS Min_Amount FROM PAYMENT;
SELECT Status, COUNT(*) AS Total FROM PAYMENT GROUP BY Status;
SELECT Method, COUNT(*) AS Total FROM PAYMENT GROUP BY Method HAVING COUNT(*) > 2;
SELECT Passenger_Name, Booking_Date FROM PASSENGER P JOIN BOOKING B ON P.Passenger_ID = B.Passenger_ID;