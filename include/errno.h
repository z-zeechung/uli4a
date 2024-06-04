// TODO

# ifndef H_ULI4A_ERRNO
# define H_ULI4A_ERRNO

        // later when implmenting pthread, replace this with sth like # define errno (errnos[get_pthread_id()])
        # define errno uli4a_errno
        extern int errno;

# endif
