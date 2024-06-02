static int sg = 100;

int a()
{
   static int s = 10;

   return s++ + sg++;
}