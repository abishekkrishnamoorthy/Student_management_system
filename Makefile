run: 
	gcc db_conn.c first_page.c main.c add_data.c View_data.c modify_data.c `pkg-config --cflags --libs libmongoc-1.0`  -o sms


