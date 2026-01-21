#include <stdio.h>
#include <stdint.h>
#include <string.h>

void some_base_to_string(uint8_t* msg, size_t msg_sz, uint8_t* some_base, size_t some_base_sz)
{
   memset(msg, '\0', msg_sz);
   if (some_base_sz % 2 != 0 || some_base_sz/2 >= msg_sz)
      return;

   for (int i = 0; i < some_base_sz; i+=2)
   {
      uint8_t msb = (some_base[i+0] <= '9' ? some_base[i+0] - '0' : (some_base[i+0] & 0x5F) - 'A' + 10);
      uint8_t lsb = (some_base[i+1] <= '9' ? some_base[i+1] - '0' : (some_base[i+1] & 0x5F) - 'A' + 10);
      msg[i / 2] = (msb << 4) | lsb;
   }
}

int main() {
   int res;

   printf("Flag:\n");
   scanf("%x", &res);

   if (res == 0x466C6167)
   {
      uint8_t some_base_flag[] = "4e484d32497b746869735f69735f615f67723361745f72337633727333217d";
      uint8_t flag[31];

      some_base_to_string(flag, 38, some_base_flag, 62);
      printf("Le flag est:\n");
      printf(flag);
   }

   return 0;
}