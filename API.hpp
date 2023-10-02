#pragma once 

#ifdef DEBUG
  #define INNARDS_DEBUG
#else 
  #define INNARDS_DEBUG noexcept
#endif