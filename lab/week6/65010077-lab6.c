#include <stdio.h>
#include <windows.h>
#include <conio.h>

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
  setcolor(7, 0);
  printf("^");
}

void erase_bullet(int x, int y)
{
  gotoxy(x, y);
  setcolor(0, 0);
  printf(" ");
}

int main()
{
  int WIDTH = 80, HEIGHT = 20;
  int direction = 0;
  setcursor(0);
  char ch = ' ';
  int x = 38, y = 20;

  draw_ship(x, y);
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
    }

    Sleep(100);
  } while (ch != 'x');
  return 0;
}