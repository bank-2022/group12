-- MySQL dump 10.13  Distrib 8.0.27, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: pankkiautomaatti
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `account`
--

DROP TABLE IF EXISTS `account`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `account` (
  `id_account` int DEFAULT NULL,
  `account_number` varchar(45) DEFAULT NULL,
  `balance` int DEFAULT NULL,
  UNIQUE KEY `id_account` (`id_account`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account`
--

LOCK TABLES `account` WRITE;
/*!40000 ALTER TABLE `account` DISABLE KEYS */;
INSERT INTO `account` VALUES (1,'FI21 4234 8093 0004 56',2314),(2,'FI09 4956 5533 0000 76',254200),(3,'FI05 4323 5064 0001 78',7256),(4,'FI25 4108 8730 0004 17',10236),(5,'FI04 4562 1452 8522 41',2542);
/*!40000 ALTER TABLE `account` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `actions`
--

DROP TABLE IF EXISTS `actions`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `actions` (
  `id_actions` int DEFAULT NULL,
  `date` datetime DEFAULT NULL,
  `action` varchar(45) DEFAULT NULL,
  `total` float DEFAULT NULL,
  `id_account` int DEFAULT NULL,
  `id_card` int DEFAULT NULL,
  UNIQUE KEY `id_actions` (`id_actions`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `actions`
--

LOCK TABLES `actions` WRITE;
/*!40000 ALTER TABLE `actions` DISABLE KEYS */;
INSERT INTO `actions` VALUES (1,'2022-04-05 13:25:00','talletus',50,1,1),(2,'2022-04-05 13:35:00','otto',20,1,1),(3,'2022-04-05 00:00:00','talletus',50,1,1),(4,'2022-04-05 00:00:00','talletus',50,2,2222),(5,'2022-04-05 00:00:00','talletus',50,2,2222),(6,'2022-04-05 00:00:00','talletus',50,2,2222),(7,'2022-04-05 00:00:00','talletus',50,2,2222),(8,'2022-04-05 00:00:00','talletus',50,2,2222),(9,'2022-04-06 00:00:00','talletus',50,2,2222);
/*!40000 ALTER TABLE `actions` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `card`
--

DROP TABLE IF EXISTS `card`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `card` (
  `id_card` int DEFAULT NULL,
  `pin` varchar(255) DEFAULT NULL,
  `id_customer` int DEFAULT NULL,
  `id_account` int DEFAULT NULL,
  `locked` tinyint(1) DEFAULT NULL,
  `attempts` int DEFAULT NULL,
  UNIQUE KEY `id_card` (`id_card`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `card`
--

LOCK TABLES `card` WRITE;
/*!40000 ALTER TABLE `card` DISABLE KEYS */;
INSERT INTO `card` VALUES (1111,'$2a$10$jE2r0YUQDjuCe/sALkaZOOMKrIDJYnEqAbPaqFKU6Ob9tV32zVJWe',1,1,0,2),(2222,'$2a$10$tugKwWeZ.atNZHnW/F8vm.KK4Jt20IalTQW4UdNIXsjP2RIywzPs6',2,2,0,NULL),(3333,'$2a$10$zy.YzbZqhKjouYGlR1toHeNUtrGgiw9S27XThn//fqmt3zKmxX3bK',3,3,NULL,NULL),(4444,'$2a$10$0dlbo2t1WSDrt5dWKICKGupeiHEuGCiaT7O12gTxtdXjDxd7WqyW6',4,4,NULL,NULL),(NULL,NULL,NULL,NULL,NULL,NULL),(NULL,NULL,NULL,NULL,NULL,NULL),(NULL,NULL,NULL,NULL,NULL,NULL),(NULL,NULL,NULL,NULL,NULL,NULL),(NULL,NULL,NULL,NULL,NULL,NULL),(NULL,NULL,NULL,NULL,NULL,NULL),(NULL,NULL,NULL,NULL,NULL,NULL);
/*!40000 ALTER TABLE `card` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customer`
--

DROP TABLE IF EXISTS `customer`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `customer` (
  `id_customer` int DEFAULT NULL,
  `name` varchar(45) DEFAULT NULL,
  `adress` varchar(45) DEFAULT NULL,
  `phone_number` varchar(45) DEFAULT NULL,
  UNIQUE KEY `id_customer` (`id_customer`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customer`
--

LOCK TABLES `customer` WRITE;
/*!40000 ALTER TABLE `customer` DISABLE KEYS */;
INSERT INTO `customer` VALUES (1,'Joonatan Yrjänä','Ukkoherrantie 2C50','0442799298'),(2,'Riku Paananen','Oksapiha 1A','0443341037'),(3,'Nea Pauna','Ruukinkuja 2A65','0406645999'),(4,'Ville Similä','Sairaskatu 43','0442871131'),(5,'Testi','Sairaskatu 1','0401234567'),(6,'Matti','Sairaskatu 43','0501234567');
/*!40000 ALTER TABLE `customer` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tili_asiakas`
--

DROP TABLE IF EXISTS `tili_asiakas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tili_asiakas` (
  `id_account` int DEFAULT NULL,
  `id_customer` int DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tili_asiakas`
--

LOCK TABLES `tili_asiakas` WRITE;
/*!40000 ALTER TABLE `tili_asiakas` DISABLE KEYS */;
INSERT INTO `tili_asiakas` VALUES (1,1),(2,2),(3,3),(4,4);
/*!40000 ALTER TABLE `tili_asiakas` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-04-21 10:58:18
