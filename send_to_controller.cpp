#include "common_util.h"
#include "message.h"
#include "send_to_controller.h"

void sendToController(BreachType breachType)
{
  const unsigned short header = 0xfeed;
  print("%x : %x", header, breachType);
}