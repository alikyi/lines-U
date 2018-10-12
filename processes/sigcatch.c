      #include <stdio.h>
       #include <sys/types.h>
       #include <signal.h>
       #include <unistd.h>

       void catch_ctlc( int sig_num )
       {
         printf( "Caught Control-C\n" );
         fflush( stdout );

         return;
       }

       int main()
       {

         signal( SIGINT, catch_ctlc );

         printf( "Go ahead, make my day.\n" );

         pause();

         return 0;
      }
