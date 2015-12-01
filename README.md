# build-report

A build reporting and testing tool good for educational purposes mostly but helpful in understanding native and cross compilation

Bascially this is a simple project I created to anchor into my mind some library types and macros.  Coming back to doing more C/C++ and asm coding after 4 years of exclusively scripting I needed to do this.  However I feel this is a great tool also for reference, checking build environments and education for the general dev-pop.  So if it can serve you then welcome.

It is supplied with0ut any warrenty what so ever and free to use and distribute as you please (commerical or otherwise.)  No need to give credit where it is due, just use it as you please.  Of course you must take full responcibility for you use of this project and its code and generated programs and content.  I accept none.

# Get it

The usual drill: clone locally or download-unzip.

# Build it

1) Go to your local repo directory  # fe. $ cd build-report
2) cmake .      # don't miss the dot, no need to create or cd to any subdirectort
3) make         # I can't think of any reason you would ever want to install this globally but you can if you want
4) ./bin/all    # to test it works, you should get a huge amount of output, so you may want to pipe to more or direct output to a file

all the built files live in the ./bin/ directory, there are many sub-programs as well

if you have comments, suggestions, praise or critics, please create an issue at:
https://github.com/LaughingSun/build-report/issues
