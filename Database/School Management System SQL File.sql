CREATE TABLE "CLASS" (
	"C_ID"	INTEGER NOT NULL,
	"Classname"	Varchar(10),
	"Section"	Varchar(10),
	"Year"	INTEGER,
	PRIMARY KEY("C_ID")
);
CREATE TABLE "PARENTS" (
	"P_ID"	INTEGER NOT NULL,
	"Father_Name"	Varchar(50),
	"Mother_Name"	Varchar(50),
	"Phone_No(F)"	BIGINT,
	"Phone_No(M)"	BIGINT,
	"Email"	Varchar(50) UNIQUE,
	PRIMARY KEY("P_ID")
);
CREATE TABLE "STUDENTS" (
	"S_ID"	INTEGER NOT NULL,
	"C_ID"	INTEGER,
	"P_ID"	INTEGER,
	"Name"	Varchar(20),
	"Age"	INTEGER,
	"Admission_ID"	INTEGER UNIQUE,
	"Gender"	Varchar(10),
	"DOB"	Date,
	"Email"	Varchar(50) UNIQUE,
	"Phone_no"	BIGINT,
	"Cast"	Varchar(20),
	PRIMARY KEY("S_ID"),
	FOREIGN KEY("C_ID") REFERENCES "CLASS"("C_ID"),
	FOREIGN KEY("P_ID") REFERENCES "PARENTS"("P_ID")
);
CREATE TABLE "TEACHERS" (
	"T_ID"	INTEGER NOT NULL,
	"Name"	Varchar(20),
	"Gender"	Varchar(10),
	"DOB"	Date,
	"Phone"	BIGINT,
	"Email"	Varchar(50) UNIQUE,
	"Salary"	INTEGER,
	"Qualification"	Varchar(50),
	"Experience(in_yrs)"	INTEGER,
	PRIMARY KEY("T_ID")
);
CREATE TABLE "STAFF" (
	"STF_ID"	INTEGER NOT NULL,
	"Name"	Varchar(20),
	"Role"	Varchar(20),
	"Email"	Varchar(50) UNIQUE,
	"Phone"	BIGINT UNIQUE,
	"Salary"	INTEGER,
	PRIMARY KEY("STF_ID")
);
CREATE TABLE "ATTENDANCE" (
	"A_ID"	INTEGER NOT NULL,
	"S_ID"	INTEGER,
	"T_ID"	INTEGER,
	"STF_ID"	INTEGER,
	"Date"	Date,
	"Status"	Varchar(10),
	"Remarks"	Varchar(10),
	PRIMARY KEY("A_ID"),
	FOREIGN KEY("STF_ID") REFERENCES "STAFF"("STF_ID"),
	FOREIGN KEY("S_ID") REFERENCES "STUDENTS"("S_ID"),
	FOREIGN KEY("T_ID") REFERENCES "TEACHERS"("T_ID")
);
CREATE TABLE "ACADEMIC" (
	"Aca_ID"	INTEGER NOT NULL,
	"S_ID"	INTEGER,
	"T_ID"	INTEGER,
	"Year"	INTEGER,
	"Internal_mark"	INTEGER,
	"External_mark"	INTEGER,
	"Total_mark"	INTEGER,
	"Grade"	Varcher(10),
	"Rank"	INTEGER,
	PRIMARY KEY("Aca_ID"),
	FOREIGN KEY("S_ID") REFERENCES "STUDENTS"("S_ID"),
	FOREIGN KEY("T_ID") REFERENCES "TEACHERS"("T_ID")
);
CREATE TABLE "EXAM" (
	"E_ID"	INTEGER NOT NULL,
	"S_ID"	INTEGER,
	"Name"	Varchar(20),
	"Type"	Varchar(20),
	"Starting_Date"	Date,
	PRIMARY KEY("E_ID"),
	FOREIGN KEY("S_ID") REFERENCES "STUDENTS"("S_ID")
);
CREATE TABLE "FEE&PAYMENT" (
	"Fee_ID"	INTEGER NOT NULL,
	"S_ID"	INTEGER,
	"Amount_Paid"	INTEGER,
	"Payment_Date"	Date,
	"Payment_Mode"	Varchar(20),
	"Recipt_No"	INTEGER,
	PRIMARY KEY("Fee_ID"),
	FOREIGN KEY("S_ID") REFERENCES "STUDENTS"("S_ID")
);
CREATE TABLE "RESULTS" (
	"R_ID"	INTEGER NOT NULL,
	"E_ID"	INTEGER,
	"Pertcentage"	DECIMAL,
	"Passing_Marks"	INTEGER,
	"Obtained_Marks"	INTEGER,
	"Total_Marks"	INTEGER,
	"Grade"	Varchar(5),
	PRIMARY KEY("R_ID"),
	FOREIGN KEY("E_ID") REFERENCES "EXAM"("E_ID")
);
CREATE TABLE "SUBJECTS" (
	"Sub_ID"	INTEGER NOT NULL,
	"T_ID"	INTEGER,
	"Name"	Varchar(20),
	"Assignment"	Varchar(10),
	PRIMARY KEY("Sub_ID"),
	FOREIGN KEY("T_ID") REFERENCES "TEACHERS"("T_ID")
);
CREATE TABLE "TRANSPORT" (
	"Trans_ID"	INTEGER NOT NULL,
	"S_ID"	INTEGER,
	"Vehicle_Type"	Varchar(20),
	"Vehicle_No"	INTEGER,
	"Driver_Name"	Varchar(20),
	"Driver_Phone"	BIGINT,
	PRIMARY KEY("Trans_ID"),
	FOREIGN KEY("S_ID") REFERENCES "STUDENTS"("S_ID")
);

INSERT INTO CLASS VALUES
(1,'10th','A',2025),
(2,'10th','B',2025),
(3,'10th','C',2025),
(4,'10th','D',2025),
(5,'11th','A',2025),
(6,'11th','B',2025),
(7,'11th','C',2025),
(8,'11th','D',2025),
(9,'12th','A',2025),
(10,'12th','B',2025),
(11,'12th','C',2025),
(12,'12th','D',2025),
(13,'9th','A',2025),
(14,'9th','B',2025),
(15,'9th','C',2025),
(16,'8th','A',2025),
(17,'8th','B',2025),
(18,'8th','C',2025),
(19,'7th','A',2025),
(20,'7th','B',2025);
SELECT * FROM CLASS;

INSERT INTO PARENTS VALUES
(1,'Rajesh','Neeta',9876543201,9876543301,'parent1@gmail.com'),
(2,'Amit','Kiran',9876543202,9876543302,'parent2@gmail.com'),
(3,'Suresh','Pooja',9876543203,9876543303,'parent3@gmail.com'),
(4,'Rakesh','Anita',9876543204,9876543304,'parent4@gmail.com'),
(5,'Mahesh','Seema',9876543205,9876543305,'parent5@gmail.com'),
(6,'Vijay','Sunita',9876543206,9876543306,'parent6@gmail.com'),
(7,'Nitin','Kavita',9876543207,9876543307,'parent7@gmail.com'),
(8,'Arun','Bhavna',9876543208,9876543308,'parent8@gmail.com'),
(9,'Manoj','Rekha',9876543209,9876543309,'parent9@gmail.com'),
(10,'Ketan','Jyoti',9876543210,9876543310,'parent10@gmail.com'),
(11,'Rohit','Meena',9876543211,9876543311,'parent11@gmail.com'),
(12,'Deepak','Rita',9876543212,9876543312,'parent12@gmail.com'),
(13,'Ajay','Hema',9876543213,9876543313,'parent13@gmail.com'),
(14,'Sanjay','Nisha',9876543214,9876543314,'parent14@gmail.com'),
(15,'Harish','Asha',9876543215,9876543315,'parent15@gmail.com'),
(16,'Mukesh','Varsha',9876543216,9876543316,'parent16@gmail.com'),
(17,'Prakash','Lata',9876543217,9876543317,'parent17@gmail.com'),
(18,'Dinesh','Komal',9876543218,9876543318,'parent18@gmail.com'),
(19,'Ramesh','Priti',9876543219,9876543319,'parent19@gmail.com'),
(20,'Kamal','Shweta',9876543220,9876543320,'parent20@gmail.com');
SELECT * FROM PARENTS;

INSERT INTO STUDENTS VALUES
(1,1,1,'Aarav',15,1001,'Male','2010-01-15','aarav@gmail.com',9876700001,'General'),
(2,2,2,'Vivaan',16,1002,'Male','2009-03-12','vivaan@gmail.com',9876700002,'OBC'),
(3,3,3,'Aditya',15,1003,'Male','2010-05-20','aditya@gmail.com',9876700003,'General'),
(4,4,4,'Vihaan',16,1004,'Male','2009-07-08','vihaan@gmail.com',9876700004,'SC'),
(5,5,5,'Arjun',17,1005,'Male','2008-09-14','arjun@gmail.com',9876700005,'General'),
(6,6,6,'Sai',15,1006,'Male','2010-02-25','sai@gmail.com',9876700006,'ST'),
(7,7,7,'Krishna',16,1007,'Male','2009-04-10','krishna@gmail.com',9876700007,'OBC'),
(8,8,8,'Ishaan',17,1008,'Male','2008-06-18','ishaan@gmail.com',9876700008,'General'),
(9,9,9,'Reyansh',15,1009,'Male','2010-08-30','reyansh@gmail.com',9876700009,'SC'),
(10,10,10,'Atharv',16,1010,'Male','2009-11-05','atharv@gmail.com',9876700010,'General'),
(11,11,11,'Ananya',15,1011,'Female','2010-01-22','ananya@gmail.com',9876700011,'OBC'),
(12,12,12,'Diya',16,1012,'Female','2009-03-28','diya@gmail.com',9876700012,'General'),
(13,13,13,'Aadhya',15,1013,'Female','2010-05-17','aadhya@gmail.com',9876700013,'ST'),
(14,14,14,'Myra',17,1014,'Female','2008-07-24','myra@gmail.com',9876700014,'General'),
(15,15,15,'Pari',16,1015,'Female','2009-09-02','pari@gmail.com',9876700015,'SC'),
(16,16,16,'Navya',15,1016,'Female','2010-02-11','navya@gmail.com',9876700016,'OBC'),
(17,17,17,'Kiara',17,1017,'Female','2008-04-19','kiara@gmail.com',9876700017,'General'),
(18,18,18,'Riya',16,1018,'Female','2009-06-07','riya@gmail.com',9876700018,'ST'),
(19,19,19,'Saanvi',15,1019,'Female','2010-08-13','saanvi@gmail.com',9876700019,'General'),
(20,20,20,'Kavya',17,1020,'Female','2008-10-26','kavya@gmail.com',9876700020,'OBC');
SELECT * FROM STUDENTS;

INSERT INTO STAFF VALUES
(1,'Arvind','Principal','principal@gmail.com',9876600001,70000),
(2,'Ramesh','Peon','peon1@gmail.com',9876600002,18000),
(3,'Sanjay','Cleaner','cleaner1@gmail.com',9876600003,15000),
(4,'Kishan','Security Guard','security1@gmail.com',9876600004,22000),
(5,'Bhavna','Receptionist','reception1@gmail.com',9876600005,25000),
(6,'Mahesh','Peon','peon2@gmail.com',9876600006,18500),
(7,'Pankaj','Cleaner','cleaner2@gmail.com',9876600007,15500),
(8,'Rohit','Security Guard','security2@gmail.com',9876600008,22500),
(9,'Nisha','Receptionist','reception2@gmail.com',9876600009,26000),
(10,'Karan','Accountant','accountant1@gmail.com',9876600010,35000),
(11,'Vijay','Librarian','librarian1@gmail.com',9876600011,30000),
(12,'Amit','Peon','peon3@gmail.com',9876600012,19000),
(13,'Seema','Cleaner','cleaner3@gmail.com',9876600013,16000),
(14,'Ajay','Security Guard','security3@gmail.com',9876600014,23000),
(15,'Komal','Receptionist','reception3@gmail.com',9876600015,27000),
(16,'Deepak','Accountant','accountant2@gmail.com',9876600016,36000),
(17,'Anita','Librarian','librarian2@gmail.com',9876600017,31000),
(18,'Harish','Peon','peon4@gmail.com',9876600018,19500),
(19,'Jyoti','Cleaner','cleaner4@gmail.com',9876600019,16500),
(20,'Mukesh','Security Guard','security4@gmail.com',9876600020,23500);
SELECT * FROM STAFF;

INSERT INTO TEACHERS VALUES
(101,'Dhruv','Male','1987-04-18',9876500141,'dhruv@gmail.com',48500,'M.Sc',9),
(102,'Yash','Male','1983-12-11',9876500389,'yash@gmail.com',61000,'M.A',16),
(103,'Meera','Female','1988-02-07',9876500421,'meera@gmail.com',47000,'M.Com',8),
(104,'Arjun','Male','1985-06-29',9876500563,'arjun@gmail.com',54000,'M.Sc',12),
(105,'Ishita','Female','1992-11-14',9876500618,'ishita@gmail.com',39000,'B.Ed',4),
(106,'Kunal','Male','1980-08-03',9876500784,'kunal@gmail.com',65000,'M.A',20),
(107,'Manav','Male','1986-01-25',9876500942,'manav@gmail.com',52000,'M.Com',11),
(108,'Sneha','Female','1990-07-30',9876501056,'sneha@gmail.com',43500,'B.Ed',6),
(109,'Tushar','Male','1984-03-12',9876501168,'tushar@gmail.com',57000,'M.Sc',14),
(110,'Pallavi','Female','1993-10-08',9876501239,'pallavi@gmail.com',40000,'M.A',3),
(111,'Harsh','Male','1981-09-27',9876501375,'harsh@gmail.com',62000,'M.Com',18),
(112,'Neha','Female','1987-12-05',9876501420,'neha@gmail.com',48000,'M.Sc',9),
(113,'Ritesh','Male','1991-04-16',9876501583,'ritesh@gmail.com',44500,'B.Ed',5),
(114,'Aarti','Female','1982-06-21',9876501694,'aarti@gmail.com',59000,'M.A',17),
(115,'Dev','Male','1988-08-10',9876501748,'dev@gmail.com',50000,'M.Sc',10),
(116,'Om','Male','1985-11-17',9876501975,'om@gmail.com',55000,'M.Com',13),
(117,'Khushi','Female','1994-01-31',9876501862,'khushi@gmail.com',38500,'B.Ed',2),
(118,'Trisha','Female','1989-07-09',9876502084,'trisha@gmail.com',46000,'M.Sc',8),
(119,'Naman','Male','1983-05-24',9876502145,'naman@gmail.com',60500,'M.A',15),
(120,'Rupal','Female','1990-09-14',9876502288,'rupal@gmail.com',42500,'B.Ed',6);
SELECT * FROM TEACHERS;

INSERT INTO ATTENDANCE VALUES
(1,1,101,NULL,'2026-06-01','Present','Good'),
(2,2,102,NULL,'2026-06-01','Present','Good'),
(3,3,103,1,'2026-06-01','Absent','Sick'),
(4,4,104,NULL,'2026-06-01','Present','Good'),
(5,5,105,1,'2026-06-01','Present','Late'),
(6,6,106,NULL,'2026-06-02','Present','Good'),
(7,7,107,1,'2026-06-02','Absent','Leave'),
(8,8,108,NULL,'2026-06-02','Present','Good'),
(9,9,109,NULL,'2026-06-02','Present','Good'),
(10,10,110,1,'2026-06-02','Absent','Sick'),
(11,11,111,NULL,'2026-06-03','Present','Good'),
(12,12,112,NULL,'2026-06-03','Present','Good'),
(13,13,113,1,'2026-06-03','Present','Late'),
(14,14,114,1,'2026-06-03','Absent','Leave'),
(15,15,115,NULL,'2026-06-03','Present','Good'),
(16,16,116,NULL,'2026-06-04','Present','Good'),
(17,17,117,1,'2026-06-04','Absent','Sick'),
(18,18,118,NULL,'2026-06-04','Present','Good'),
(19,19,119,1,'2026-06-04','Present','Late'),
(20,20,120,NULL,'2026-06-04','Present','Good');
SELECT * FROM ATTENDANCE;

INSERT INTO SUBJECTS VALUES
(1,101,'Mathematics','Yes'),
(2,102,'Science','Yes'),
(3,103,'English','Yes'),
(4,104,'Computer','Yes'),
(5,105,'Social Science','No'),
(6,106,'Physics','Yes'),
(7,107,'Chemistry','Yes'),
(8,108,'Biology','No'),
(9,109,'History','Yes'),
(10,110,'Geography','No'),
(11,111,'Economics','Yes'),
(12,112,'Accounts','Yes'),
(13,113,'Statistics','No'),
(14,114,'Hindi','Yes'),
(15,115,'Gujarati','No'),
(16,116,'Sanskrit','Yes'),
(17,117,'Environmental Science','Yes'),
(18,118,'Business Studies','No'),
(19,119,'Political Science','Yes'),
(20,120,'Physical Education','No');
SELECT * FROM SUBJECTS;

INSERT INTO EXAM VALUES
(1,1,'Mathematics','Unit Test','2026-07-01'),
(2,2,'Science','Unit Test','2026-07-02'),
(3,3,'English','Unit Test','2026-07-03'),
(4,4,'Computer','Unit Test','2026-07-04'),
(5,5,'Social Science','Unit Test','2026-07-05'),
(6,6,'Mathematics','Mid Term','2026-08-01'),
(7,7,'Science','Mid Term','2026-08-02'),
(8,8,'English','Mid Term','2026-08-03'),
(9,9,'Computer','Mid Term','2026-08-04'),
(10,10,'Social Science','Mid Term','2026-08-05'),
(11,11,'Mathematics','Final','2026-12-01'),
(12,12,'Science','Final','2026-12-02'),
(13,13,'English','Final','2026-12-03'),
(14,14,'Computer','Final','2026-12-04'),
(15,15,'Social Science','Final','2026-12-05'),
(16,16,'Mathematics','Unit Test','2026-07-06'),
(17,17,'Science','Unit Test','2026-07-07'),
(18,18,'English','Unit Test','2026-07-08'),
(19,19,'Computer','Unit Test','2026-07-09'),
(20,20,'Social Science','Unit Test','2026-07-10');
SELECT * FROM EXAM;

INSERT INTO RESULTS VALUES
(1,1,90.00,7,18,20,'A+'),
(2,2,80.00,7,16,20,'A'),
(3,3,75.00,7,15,20,'B'),
(4,4,85.00,7,17,20,'A'),
(5,5,70.00,7,14,20,'B'),
(6,6,84.00,18,42,50,'A'),
(7,7,76.00,18,38,50,'B'),
(8,8,90.00,18,45,50,'A+'),
(9,9,68.00,18,34,50,'C'),
(10,10,80.00,18,40,50,'A'),
(11,11,88.00,35,88,100,'A+'),
(12,12,72.00,35,72,100,'B'),
(13,13,95.00,35,95,100,'A+'),
(14,14,65.00,35,65,100,'C'),
(15,15,81.00,35,81,100,'A'),
(16,16,95.00,7,19,20,'A+'),
(17,17,85.00,7,17,20,'A'),
(18,18,80.00,7,16,20,'A'),
(19,19,75.00,7,15,20,'B'),
(20,20,90.00,7,18,20,'A+');
SELECT * FROM RESULTS;

INSERT INTO "FEE&PAYMENT" VALUES
(1,1,15000,'2026-04-05','UPI',5001),
(2,2,18000,'2026-04-07','Cash',5002),
(3,3,12000,'2026-04-10','Card',5003),
(4,4,20000,'2026-04-12','UPI',5004),
(5,5,17000,'2026-04-15','Net Banking',5005),
(6,6,15000,'2026-04-18','Cash',5006),
(7,7,22000,'2026-04-20','UPI',5007),
(8,8,19000,'2026-04-22','Card',5008),
(9,9,16000,'2026-04-25','Cash',5009),
(10,10,25000,'2026-04-28','Net Banking',5010),
(11,11,18000,'2026-05-02','UPI',5011),
(12,12,14000,'2026-05-05','Cash',5012),
(13,13,21000,'2026-05-08','Card',5013),
(14,14,23000,'2026-05-10','UPI',5014),
(15,15,17000,'2026-05-12','Net Banking',5015),
(16,16,15500,'2026-05-15','Cash',5016),
(17,17,24000,'2026-05-18','UPI',5017),
(18,18,19500,'2026-05-20','Card',5018),
(19,19,16500,'2026-05-22','Cash',5019),
(20,20,26000,'2026-05-25','Net Banking',5020);
SELECT * FROM "FEE&PAYMENT";

INSERT INTO ACADEMIC VALUES
(1,1,105,'2026',18,72,90,'A',5),
(2,2,102,'2026',15,60,75,'B',14),
(3,3,118,'2026',19,77,96,'A+',3),
(4,4,109,'2026',12,58,70,'C',17),
(5,5,101,'2026',17,68,85,'A',9),
(6,6,114,'2026',14,61,75,'B',14),
(7,7,107,'2026',20,78,98,'A+',2),
(8,8,112,'2026',16,66,82,'A',11),
(9,9,103,'2026',11,54,65,'C',19),
(10,10,120,'2026',18,70,88,'A',6),
(11,11,106,'2026',13,62,75,'B',14),
(12,12,111,'2026',17,71,88,'A',6),
(13,13,104,'2026',10,55,65,'C',19),
(14,14,116,'2026',19,74,93,'A+',4),
(15,15,108,'2026',15,63,78,'B',12),
(16,16,115,'2026',18,69,87,'A',8),
(17,17,110,'2026',12,56,68,'C',18),
(18,18,117,'2026',20,79,99,'A+',1),
(19,19,113,'2026',14,64,78,'B',12),
(20,20,119,'2026',16,67,83,'A',10);
SELECT * FROM ACADEMIC;

INSERT INTO TRANSPORT VALUES
(1,1,'Bus',4837,'Ramesh',9877000001),
(2,2,'Van',7251,'Suresh',9877000002),
(3,3,'Auto',1946,'Mahesh',9877000003),
(4,4,'Bus',8623,'Arjun',9877000004),
(5,5,'Van',3178,'Kiran',9877000005),
(6,6,'Bus',5409,'Vijay',9877000006),
(7,7,'Auto',2714,'Harish',9877000007),
(8,8,'Van',9365,'Mukesh',9877000008),
(9,9,'Bus',1582,'Ajay',9877000009),
(10,10,'Auto',6841,'Rohit',9877000010),
(11,11,'Bus',4297,'Nitin',9877000011),
(12,12,'Van',7754,'Prakash',9877000012),
(13,13,'Bus',2068,'Sanjay',9877000013),
(14,14,'Auto',8913,'Deepak',9877000014),
(15,15,'Van',3475,'Kamal',9877000015),
(16,16,'Bus',9621,'Amit',9877000016),
(17,17,'Auto',5134,'Manoj',9877000017),
(18,18,'Bus',7486,'Rakesh',9877000018),
(19,19,'Van',1829,'Dinesh',9877000019),
(20,20,'Bus',6357,'Ketan',9877000020);
SELECT * FROM TRANSPORT;

SELECT * FROM STUDENTS;
SELECT * FROM STUDENTS WHERE Gender='Male';
SELECT * FROM STUDENTS ORDER BY Name ASC;
SELECT DISTINCT "Cast" FROM STUDENTS;
SELECT * FROM STUDENTS WHERE Name LIKE 'A%';
SELECT * FROM STUDENTS WHERE Age BETWEEN 15 AND 16;
SELECT * FROM STUDENTS WHERE [Cast] IN ('General','OBC');
SELECT COUNT(*) AS Total_Students FROM STUDENTS;
SELECT SUM(Amount_Paid) AS Total_Fees FROM "FEE&PAYMENT";
SELECT AVG(Salary) AS Avg_Salary FROM TEACHERS;
SELECT MAX(Total_mark) AS Highest_Mark FROM ACADEMIC;
SELECT MIN(Total_mark) AS Lowest_Mark FROM ACADEMIC;
SELECT Gender, COUNT(*) AS Total FROM STUDENTS GROUP BY Gender;
SELECT Grade, COUNT(*) AS Total FROM RESULTS GROUP BY Grade HAVING COUNT(*) > 0;
SELECT S.Name, C.Classname, C.Section FROM STUDENTS S INNER JOIN CLASS C ON S.C_ID = C.C_ID;
SELECT Name FROM STUDENTS WHERE P_ID IN ( SELECT P_ID FROM PARENTS WHERE Father_Name = 'Rohit');