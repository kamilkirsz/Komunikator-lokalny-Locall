-- Tworzenie tabeli użytkowników
CREATE TABLE users (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    login TEXT NOT NULL,
    password TEXT NOT NULL
);