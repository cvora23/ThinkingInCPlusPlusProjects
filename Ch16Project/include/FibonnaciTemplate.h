/*
 * FibonnaciTemplate.h
 *
 *  Created on: Jul 9, 2014
 *      Author: cvora
 */

#ifndef FIBONNACITEMPLATE_H_
#define FIBONNACITEMPLATE_H_

#include "require.h"

template<class T>
T fibonacci(T type,int n) {
  const int sz = 100;
  require(n < sz);
  static T f[sz]; // Initialized to zero
  f[0] = f[1] = 1;
  // Scan for unfilled array elements:
  int i;
  for(i = 0; i < sz; i++)
    if(f[i] == 0) break;
  while(i <= n) {
    f[i] = f[i-1] + f[i-2];
    i++;
  }
  return f[n];
} ///:~

#endif /* FIBONNACITEMPLATE_H_ */
