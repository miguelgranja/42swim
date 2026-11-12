#!/usr/bin/sh
# Usage go to a directory from where you want to check all the the .c and .h files...
echo "00 Check prerequisit" &&
which c_formatter_42 > /dev/null || ( echo "Read me previous message about :
pip3 install --user c_formatter_42
and add in the PATH $HOME/.local/bin" >&2
exit 1
)
find . -name '*.[ch]' -print | grep -v '/\.git/' | sed 's:/[^/]*$::' | sort | uniq | while read d
do
        (
        echo "Testing ${d}" &&
                cd "${d}" &&
                echo "0 Check for extra files" &&
                ( git ls-files 2>/dev/null >/dev/null && ( echo "\tIn git." && git ls-files 2>/dev/null ) || true ) &&
                echo "\tIn directory" &&
                ls -lA &&
                echo "1 Formating for Norminette" &&
                c_formatter_42 * &&
                echo "2 Try to compile and produce /tmp/a.out" &&
                cc -Wall -Wextra -Werror -D TEST -o /tmp/a.out *.c &&
                echo "3 Norminette Check" &&
                norminette *.[hc] &&
                echo "4 run the program (with 2 lines before and 2 lines after.\n\n" &&
                /tmp/a.out &&
                echo "\n\n5 Check the external Undefine and define Text in your code." &&
                for o in *.c
                do
                        echo "\n\t5 Check file ${o}\n" &&
                        cc -Wall -Wextra -Werror -c -o /tmp/o.o "${o}" &&
                        echo "\t\tText and Undefine" &&
                        ( nm /tmp/o.o | grep '[ \t][UT][ \t]' | grep -v "[ \t][UT][ \t]_" | nl | sed 's/^/\t\t\t/' || true ) &&
                        echo "\t\tIs there my requested function ?" &&
                        ( nm /tmp/o.o | grep "[ \t][T][ \t]`basename ${o} .c`$" | nl | sed 's/^/\t\t\t/' | grep . || echo "NOT FOUND! CHECK ! CHECK ! CHECK ! CHECK ! CHECK ! CHECK ! CHECK ! CHECK ! CHECK ! CHECK !" >&2 ) &&
                        echo "\t\tAre there any functions that are not mine and not authorized in the exercise ?" &&
                        ( nm /tmp/o.o | grep "[ \t][U][ \t]" | nl | sed 's/^/\t\t\t/' || true ) &&
                        echo "\t End of ${o} --------------------------------------------------------------------------" || echo "ERROR CHECK ${o} Retcode ${?}" >&2
                done &&
                echo "End of ${d} --------------------------------------------------------------------------" || echo "ERROR CHECK ${d} Retcode ${?}" >&2
        )
done &&
echo "All checked. Are you sure nothing is missing ?" &&
echo "===============================================" &&
( git status 2>/dev/null >/dev/null && ( echo "6 Git status." && git status 2>/dev/null ) || true ) &&
echo "\nGoo jobs" ||
echo "Stop Too Early ${?}"
exit 0
