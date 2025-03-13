#ifndef INVENTORY_H
#define INVENTORY_H

extern void executeTake(const char* noun);
extern void executeDrop(const char* noun);
extern void executeAsk(const char* noun);
extern void executeGive(const char* noun);
extern void executeInventory(void);

#endif
