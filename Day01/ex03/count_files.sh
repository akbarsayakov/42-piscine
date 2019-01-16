find `pwd` \( -type f -or -type d \) -name ".*" -prune -o -print | wc -l | sed 's/ //g'
