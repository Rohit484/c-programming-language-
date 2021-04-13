#include <stdio.h>

void on_sig10_exit(int u) { printf("sig10 exit\n"); }
void on_sig20_exit(int u) { printf("sig20 exit\n"); }
void default_exit(int u) { printf("default exit\n"); }
void user_default_exit(int u)
{
    printf("user default exit\n");
}

void (*exit_by)(int);

void (*bsd_signal(int sig, void (*func)(int)))(int)
{
    switch (sig) {
    case 10:
        return on_sig10_exit;
    case 20:
        return on_sig20_exit;
    default:
        if (func == NULL)
            return default_exit;
        else
            return user_default_exit;
    }
}

int main()
{
    (bsd_signal(10, NULL))(0);
    (bsd_signal(20, NULL))(0);
    (bsd_signal(30, NULL))(0);
    (bsd_signal(30, user_default_exit))(0);
    return 0;
}
