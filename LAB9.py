import mysql.connector

##cursorObject=dataBase.cursor()
## cursorObject.execute("CREATE DATABASE LAB9DATABASE")

##creatingtable_query="""CREATE TABLE marveltable(
                           ##ID int(60) NOT NULL,
                           ##Movie VARCHAR(60) NOT NULL,
                           ##Date VARCHAR(60) NOT NULL,
                           ##MCU_Phase VARCHAR(60) NOT NULL,
                           ##PRIMARY KEY(ID))

    ##cursor=connection.cursor()
    ##cursor.execute(creatingtable_query)


try:
    connection=mysql.connector.connect(host="localhost",database="lab9database",user="root",passwd="")
    cursor = connection.cursor()
    mysql_insert_query = """INSERT INTO marveltable(ID,Movie,Date,MCU_Phase) VALUES (%s,%s,%s,%s)"""
    with open("Marvel.txt","r") as file:
     for line in file:
        x=line.split()
        record=(x[0],x[1],x[2],x[3])
        cursor.execute(mysql_insert_query, record)
        connection.commit()


except mysql.connector.Error as error:
 print("Failed to insert into MySQL table {}".format(error))
finally:
    if connection.is_connected():
        cursor.close()
        connection.close()
        print("MYSQL Connection is closed.")