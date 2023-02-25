#include <iostream>// cin, cout, cerr, clog
                   // wcin wcout, wcerr, wclog

#include <cctype>  // isalnum(char), isalpha, isblank, iscntrl, isdigit, isgraph, [BOOL RETURN TYPE]
                   // islower, isprint, ispunct, isspace, isupper, isxdigit
                   // tolower, to upper - [NO RETURN TYPE, MODIFYING]

#include <cstring> // strcpy(base, copy), strncpy, memcpy, memmove
                   // strcat(str1,str2), strncat,
                   // strcmp(str1,str2) [0 if equal] ,memcmp, strcoll,strncmp, strxfrm
                   // memchr, strchr, strcspn, strpbrk, strrchr, strspn, strstr, strtok
                   // strlen(str),memset, strerror

#include <string>  // [1]size(), [2]length(), [3]max_size(), [4]resize(), [4]capacity(), [6]reserve()
                   // [7]clear(), [8]empty(), [9]shrink_to_fit()
                   // [10]str.at(), [11]str.back() = '!', [12]front()
                   // [13]str.insert(pos, str, l), [14]erase(pos, l), [15]str1.replace(pos, l, str2),
                   // [16]str.assign(str, pos, l), [17]str1swap.(str2), [18]str.pop_back(), [19]str.push_back(c);
                   // [20]str.append(str2, pos, l)
                   // [21]str.c_str()[char equivalent of str],
                   // [22]str.find(substr, pos), [23]str.copy(base, l, pos)
                   // [24]str = str2.substr(pos, l )
                   // [25]str.compare(str2)||(pos, l, substr)
                   // data, get_allocator, r_find, find_first_of, find_last_of, find_first_not_of
                   // find_last_not_of

int main()
{
    int s = 5;
    int x;
    std::cout << (s/2)+1;
	return 0;
}
