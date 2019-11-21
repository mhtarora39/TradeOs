void print(const char *str)
{
  //ToDo : try with constexpr
  static unsigned short *video_memory = (unsigned short *)0xb8000; //GOT Video Memory

  for (int i = 0; str[i] != '\0'; i++)
  {
    // OXFFOO : 2nd byte is reserve for color
    video_memory[i] = (video_memory[i] & 0xFF00) | str[i];
  }
}

extern "C" void kernalMain(const void *multi_boot, unsigned int /*multi boot
magic*/
)
{

  print("Hello World");
  //Kernal shouldn't be stop
  while (1)
    ;
}
