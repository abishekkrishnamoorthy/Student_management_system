run: 
	gcc main_menu.c db_conn.c curd_db.c new_data.c main.c add_data.c View_data.c modify_data.c `pkg-config --cflags --libs libmongoc-1.0`  -o sms


