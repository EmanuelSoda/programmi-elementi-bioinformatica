/*
  Copyright (C) 2014 by Gianluca Della Vedova


  You can redistribute this file and/or modify it
  under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Box is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this file
  If not, see <http://www.gnu.org/licenses/>.
*/


/**
   @file fibo2.c
   @brief Compute the first \c n fibonacci numbers
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
uint32_t fibo(uint32_t x);
/**
   \brief Prints the fibonacci sequence up to a certain value \c limit
   \param limit
*/
uint32_t fibo(uint32_t x) {
        if (x <= 2)
                return 1;
        else
                return fibo(x - 1) + fibo(x - 2);
}


int main(int argc, char **argv) {
        uint32_t limit = atoi(argv[1]);
        for (uint32_t n = 1; n <= limit; n++)
                printf("%" PRIu32 " ", fibo(n));
        printf("\n");
}
