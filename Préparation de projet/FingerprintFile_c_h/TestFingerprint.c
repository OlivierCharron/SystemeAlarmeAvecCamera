#include <TestFingerprint.h>
#include "FingerprintSensor.c"


void main()
{
   setup_timer_3(T3_DISABLED | T3_DIV_BY_1);


   while(TRUE)
   {
     verifyPassword();
     /*getImage();
     image2Tz(uint8_t slot = 1);
     createModel();
   
     emptyDatabase();
     storeModel(uint16_t id);
     loadModel(uint16_t id);
     getModel();
     deleteModel(uint16_t id);
     fingerFastSearch();
     getTemplateCount();
     writePacket(uint32_t addr, uint8_t packettype, uint16_t len, uint8_t *packet);
     getReply(uint8_t packet[], uint16_t timeout=DEFAULTTIMEOUT);*/
   }

}
