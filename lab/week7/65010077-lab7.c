#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int score = 0;

int max_bullet = 5;
int pos_x[5], pos_y[5];
int count = 0;

void setcolor(int fg, int bg)
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}

void gotoxy(int x, int y)
{
  COORD c = {x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship(int x, int y)
{
  gotoxy(x, y);
  setcolor(2, 4);
  printf("<-0->");
}

void earse_ship(int x, int y)
{
  gotoxy(x, y);
  setcolor(0, 0);
  printf("     ");
}

void setcursor(bool visible)
{
  HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_CURSOR_INFO lpCursor;
  lpCursor.bVisible = visible;
  lpCursor.dwSize = 20;
  SetConsoleCursorInfo(console, &lpCursor);
}

void draw_bullet(int x, int y)
{
  gotoxy(x, y);
  setcolor(2, 0);
  printf("^");
}

void erase_bullet(int x, int y)
{
  gotoxy(x, y);
  setcolor(0, 0);
  printf(" ");
}

void draw_star(int x, int y)
{
  gotoxy(x, y);
  setcolor(7, 0);
  printf("*");
}

void erase_star(int x, int y)
{
  gotoxy(x, y);
  printf(" ");
}

void draw_score(int x, int y)
{
  gotoxy(x, y);
  setcolor(7, 0);
  printf("Score : %d", score);
}

char cursor(int x, int y)
{
  HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
  char buf[2];
  COORD c = {x, y};
  DWORD num_read;
  if (!ReadConsoleOutputCharacter(hStd, (LPTSTR)buf, 1, c, (LPDWORD)&num_read))
  {
    return '\0';
  }
  else
  {
    return buf[0];
  }
}

int main()
{
  srand(time(NULL));
  int score_x = 82, score_y = 1;
  int WIDTH = 80, HEIGHT = 20;
  int direction = 0;
  setcursor(0);
  char ch = ' ';
  int x = 38, y = 20;

  draw_score(score_x, score_y);
  draw_ship(x, y);

  for (int i = 0; i < 20; i++)
  {
    draw_star(10 + rand() % 69, 2 + rand() % 4);
  }

  do
  {
    int bullet_state = 0;
    if (kbhit())
    {
      ch = getch();
      if (ch == 'a')
        direction = -1;

      if (ch == 'd')
        direction = 1;

      if (ch == 's')
        direction = 0;

      if (ch == ' ')
        bullet_state = 1;

      fflush(stdin);
    }
    if (direction != 0)
    {
      if (x + direction > WIDTH - 5)
        direction = 0;
      if (x + direction < 0)
        direction = 0;

      earse_ship(x, y);
      x += direction;
      draw_ship(x, y);
    }
    if (bullet_state && pos_y[count] < 0)
    {
      if (y > 0)
      {
        pos_x[count] = x + 2;
        pos_y[count] = y - 1;
        count++;
        count %= max_bullet;
        draw_bullet(x + 2, y - 1);
        Beep(700, 25);

        if (cursor(pos_x[count], pos_y[count] - 1) == '*')
        {
          draw_star(10 + rand() % 69, 2 + rand() % 4);
          score += 1;
          draw_score(score_x, score_y);
          Beep(700, 25);
        }
      }
    }

    for (int i = 0; i < max_bullet; i++)
    {
      if (pos_y[i] < 0)
        continue;
      erase_bullet(pos_x[i], pos_y[i]);
      pos_y[i]--;
      if (pos_y[i] >= 0)
        draw_bullet(pos_x[i], pos_y[i]);
      if (cursor(pos_x[i], pos_y[i] - 1) == '*')
      {
        draw_star(10 + rand() % 69, 2 + rand() % 4);
        score += 1;
        draw_score(score_x, score_y);
        Beep(700, 25);
      }
    }

    Sleep(100);
  } while (ch != 'x');
  return 0;
}