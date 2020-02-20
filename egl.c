#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include <EGL/egl.h>

int main(int argc, char ** argv)
{
        EGLDisplay display;
        EGLBoolean b;

        /* get an EGL display connection */
        display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
        if (display == EGL_NO_DISPLAY) {
          return EXIT_FAILURE;
        }

        /* initialize the EGL display connection */
        b = eglInitialize(display, NULL, NULL);
        printf("eglInitialize says %d\n", b);

        return EXIT_SUCCESS;
}
