       #define MAX_LINE        80
       #define MY_SHM_ID        111
       #define MY_SEM_ID        111
       typedef struct {
               long type;               // Msg Type (> 0)
               float fval;              // User Message
               unsigned int uival;      // User Message
               char strval[MAX_LINE+1]; // User Message
       } MY_TYPE_T;
