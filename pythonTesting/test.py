from cs50 import SQL #cs 50 library

db = SQL("sqlite:///shows.db")

rows = db.execute('''
    SELECT title, rating FROM shows
    JOIN ratings ON shows.id = ratings.show_id
    WHERE rating >= 6.0
    LIMIT 5;
''')

for row in rows:
    print(f"Title: {row['title']}, Rating: {row['rating']}")